# Graham Scan

This Directory contains C implementations of the Graham's Scan method.

## Convex Hull

A C implementation of the Convex Hull algorithm using the Graham's Scan method.

### Introduction

The Convex Hull is a fundamental problem in computational geometry that involves finding the smallest convex polygon that encloses a given set of points in a plane. The Graham's Scan algorithm is a widely used method for solving this problem efficiently in O(n*log(n)) time complexity, where n is the number of input points.

### Algorithm

The Graham's Scan algorithm consists of the following steps:

1. Find the point with the smallest y-coordinate (p0). If there are multiple points with the same y-coordinate, choose the one with the smallest x-coordinate.
2. Sort the remaining points based on their polar angle with respect to the point p0. If two or more points have the same polar angle, keep the farthest one.
3. Push the first three points onto a stack.
4. For each remaining point, while the angle formed by the last two points on the stack and the current point is not counterclockwise, pop the last point off the stack.
5. Push the current point onto the stack.

The stack now contains the vertices of the Convex Hull.