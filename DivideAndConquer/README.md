# Divide and Conquer 

This repository contains C programs that implements the Divide and conquer algorithm for different problems.

## Binary Search

A C program that implements the binary search algorithm for searching an element in a sorted array.

### Algorithm

The binary search algorithm is a divide and conquer algorithm that searches for an element in a sorted array by repeatedly dividing the search interval in half. The algorithm compares the middle element of the search interval with the target element and continues the search in the left or right half of the interval depending on the comparison until the target element is found or the interval is empty.

## Merge Sort

An implementation of the Merge Sort algorithm in C programming language.

### Introduction

Merge Sort is a divide and conquer algorithm that sorts an array or a list of elements by breaking it down into smaller sub-arrays, sorting those sub-arrays, and then merging them back together in a sorted order. The algorithm has a time complexity of O(n log n), making it efficient for large datasets.

This implementation of the Merge Sort algorithm is written in C programming language.

## Quick Sort

A C implementation of the Quick Sort algorithm. The program prompts the user to enter the number of elements to be sorted and the elements themselves, and then sorts the array using the Quick Sort algorithm.

### Algorithm

The Quick Sort algorithm is a divide-and-conquer sorting algorithm that sorts an array by partitioning it into two sub-arrays, then recursively sorting the sub-arrays. The algorithm works as follows:

1. Choose a pivot element from the array.
2. Partition the array such that all elements less than the pivot are on one side, and all elements greater than the pivot are on the other side.
3. Recursively sort the two sub-arrays.

In the implementation provided in this program, the pivot element is chosen as the first element of the array.