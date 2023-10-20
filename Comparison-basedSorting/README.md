# Comparision-based Sorting Implementation in C

This repository contains a C program that demonstrates the **Quick Sort** algorithm for sorting an array of integers. Quick Sort is a widely used comparison-based sorting algorithm known for its efficiency.

## Description

Quick Sort is a popular and efficient sorting algorithm that follows the divide-and-conquer approach. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, based on whether they are less than or greater than the pivot. These sub-arrays are then sorted recursively.

## How Quick Sort Works

1. The `swap` function is used to swap two integer values.
2. The `partition` function selects a random pivot element and reorganizes the array so that elements smaller than the pivot are on the left, and elements greater than the pivot are on the right. It returns the final position of the pivot.
3. The `quickSort` function is a recursive function that sorts the array. It calls `partition` to determine the pivot and then recursively sorts the sub-arrays on the left and right of the pivot.
4. The `printArray` function is used to print the sorted array.
