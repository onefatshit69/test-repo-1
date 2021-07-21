# Coding problem 1 
## Number of spider in Tree/Graph

Given a tree with N vertices, find the total number of spiders which can be found in the tree.

A spider is defined as a set of five vertices in the tree connected by edges which can be arranged in the following form:

                 C                     B
        
             /           \         /            \
        
         D                  A                    E

 

Here A, B, C, D, E are vertices given in tree.

OR

Formally, you have to count the number of ways to choose 5 nodes, say (A, B, C, D, E) such that there is an edge from A to B, B to C, C to D and D to E.

Note: Two spiders X and Y are considered to be different if there exists a node u, such that u is present in spider X and not in spider Y.

Input: The first line contains a single integer N representing the number of nodes in the tree.

Following N-1 lines contain 2 integers x and y, denoting an undirected edge between nodes x and y.

Output: Print a single integer denoting the number of spiders modulo 109 + 7.

Example:

Input:

N=6

1 2

1 3

2 4

2 5

3 6

Output: 2

Explanation: Two spiders can be found in the tree, containing vertices {1, 2, 3, 4, 6} and {1, 2, 3, 5, 6}

Expected time : O(N)