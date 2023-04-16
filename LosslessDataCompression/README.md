# Lossless Data Compression

Lossless data compression is a technique used to reduce the size of a data file without losing any information. Unlike lossy compression, which discards some data to achieve a smaller file size, lossless compression algorithms ensure that the compressed data can be reconstructed back to its original form.

## Huffman coding

Implementation of the Huffman Coding algorithm in C language. The Huffman Coding algorithm is used for lossless data compression, where the most frequently occurring symbols are assigned the shortest code words to reduce the overall length of the encoded data. The algorithm works by constructing a binary tree called the Huffman tree, where each leaf node represents a symbol and its frequency of occurrence, and each internal node represents the sum of the frequencies of its child nodes.

### Algorithm Complexity

The time complexity of the Huffman Coding algorithm is O(nlogn), where n is the number of symbols in the input.