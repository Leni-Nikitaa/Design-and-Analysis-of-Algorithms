# Recursion

This repository contains a C implementation of a Recursion. The code provides a solution using a recursive algorithm with backtracking.

## Description

The Traveling Salesman Problem is a well-known problem in computer science and operations research. The objective is to find the shortest route that visits a set of cities exactly once and returns to the starting city. This code provides a basic implementation of the TSP solution.

## How It Works

1. **Input**: The program takes input for the number of villages (cities) and the cost matrix. The cost matrix represents the distances or costs between each pair of cities.

2. **Solution Algorithm**: The solution is found using a recursive algorithm with backtracking. The `mincost` function explores all possible routes, starting from the first city (0) and choosing the nearest unvisited city at each step. Once all cities are visited, the salesman returns to the starting city.

3. **Finding the Nearest City**: The `least` function is used to find the nearest unvisited city to the current city. It searches for the city with the smallest cost (distance) that has not been visited yet.

4. **Output**: The program prints the path taken by the salesman and the minimum cost once the `mincost` function is finished.

## Algorithm

The algorithm used in this code is a basic recursive backtracking approach to solve the Traveling Salesman Problem. It explores all possible permutations of city visits to find the minimum cost Hamiltonian cycle.