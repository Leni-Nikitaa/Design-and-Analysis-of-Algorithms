# String Searching

This repository contains a C implementation of string searching. This has a hash-based string searching algorithm that efficiently identifies the occurrence of a pattern within a given text.

## Description

The Rabin-Karp algorithm employs hashing techniques to search for patterns within a text efficiently. 

## Overview

- **Initialization:** The algorithm initializes hash values for the pattern and the initial substring of the text. It also defines a prime number (`q`) for modulo operations and a constant (`d`).

- **Search:** The pattern is slid over the text, and hash values are calculated for each substring. When a hash match is found, a character-by-character comparison is performed to confirm the match.

- **Rolling Hash:** Instead of recalculating the hash value from scratch for each substring, a rolling hash is used to efficiently update the hash value based on the previous hash.

- **Modulo Operation:** Throughout the process, modulo operations with the prime number `q` are applied to prevent integer overflow.

- **Handling Hash Collisions:** If hash values match, a final character-by-character check is performed to avoid false positives caused by hash collisions.

## Implementation

The C code in this repository provides a practical implementation of the Rabin-Karp algorithm. It includes functions for searching a pattern within a given text.