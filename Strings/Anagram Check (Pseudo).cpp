// Topic: Strings
// Problem: Anagram Check
// Status: Pseudo Approach
// Description: Checks if two strings are anagrams of each other.

/*
PSEUDO CODE APPROACH:
Function isAnagram(str1, str2):
    if length(str1) != length(str2):
        return false
        
    char_counts = array of size 256 initialized to 0
    
    for i from 0 to length(str1) - 1:
        char_counts[str1[i]] = char_counts[str1[i]] + 1
        char_counts[str2[i]] = char_counts[str2[i]] - 1
        
    for count in char_counts:
        if count != 0:
            return false
            
    return true
*/
