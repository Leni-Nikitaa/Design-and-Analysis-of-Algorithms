# Breadth-First Search (BFS) 

This directory contains an implementation of the Breadth-First Search (BFS) algorithm for graph traversal in C.

### Description

The Breadth-First Search (BFS) algorithm is used to explore or traverse all the vertices of a graph in breadth-first order. It starts from a given source vertex and visits all its adjacent vertices before moving on to the next level of vertices. BFS ensures that all vertices at the same level are visited before moving deeper into the graph.

In this implementation, the graph is represented using an adjacency matrix, where `adj[i][j]` is `true` if there is an edge between vertices `i` and `j`, and `false` otherwise. The algorithm uses a queue data structure to keep track of the vertices to visit.