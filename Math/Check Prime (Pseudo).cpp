// Topic: Math
// Problem: Check Prime
// Status: Pseudo Approach
// Description: Checks if a given integer is prime.

/*
PSEUDO CODE APPROACH:
Function isPrime(N):
    if N <= 1:
        return false
    if N <= 3:
        return true
    if N % 2 == 0 or N % 3 == 0:
        return false
        
    for i from 5 to sqrt(N) step 6:
        if N % i == 0 or N % (i + 2) == 0:
            return false
            
    return true
*/
