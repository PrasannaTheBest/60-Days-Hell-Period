// Topic: Matrix
// Problem: Pascal's Triangle
// Status: Pseudo Approach
// Description: Generates Pascal's Triangle up to N rows.

/*
PSEUDO CODE APPROACH:
Function printPascalsTriangle(N):
    triangle = 2D array of size N x N
    
    for i from 0 to N-1:
        for j from 0 to i:
            if j == 0 or j == i:
                triangle[i][j] = 1
            else:
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j]
            print triangle[i][j] + " "
        print newline
*/
