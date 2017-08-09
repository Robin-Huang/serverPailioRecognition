import tensorflow as tf
import sys

# Image file path
image_file = sys.argv[1]
graph_file = sys.argv[2] + '/Papilionidae_classification/models/papilionidae_graph_4000.pb'
label_file = sys.argv[2] + '/Papilionidae_classification/models/papilionidae_number_labels.txt'


# Read image
image = tf.gfile.FastGFile(image_file, 'rb').read()

# Load label data
labels = []
for label in tf.gfile.GFile(label_file):
    labels.append(label.rstrip())

# Load cnn model
with tf.gfile.FastGFile(graph_file, 'rb') as f:
    graph_def = tf.GraphDef()
    graph_def.ParseFromString(f.read())
    tf.import_graph_def(graph_def, name='')

with tf.Session() as sess:
    softmax_tensor = sess.graph.get_tensor_by_name('final_result:0')
    predict = sess.run(softmax_tensor, {'DecodeJpeg/contents:0': image})

    # Sort the label by probability
    top = predict[0].argsort()[-len(predict[0]):][::-1]
    # for index in top:
    #     human_string = labels[index]
    #     score = predict[0][index]
    #     print(human_string, score)

    top_score = predict[0][top[0]]
    second_score = predict[0][1]

# print('%s 相似度(%.2f%%)' %(labels[top[0]], top_score*100), end = "")
print(labels[top[0]] + '_%.2f' %(top_score*100), end = "")
