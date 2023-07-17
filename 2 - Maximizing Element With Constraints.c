/*
*	in this problem, the goal is to determine the maximum value of an element at a certain 
*	index in an array of integers that can be constructed under some constraints.
*	More specifically, n is the desired array size, maxSum is the maximum allowed sum of elements in the array,
*	and k is the index of the element that needs its value to be maximized. The 0-indexed array has the following constraints:
*	The array consists of n positive integers. 
*	The sum of all elements in the array is at most maxSum. 
*	The absolute difference between any two consecutive elements in the array is at most 1.
*	What is the maximum value of the integer at index kin such an array?
*/

long taskOfPairing(int freq_count, long* freq) 
{    
    if(n == 1) return maxSum; 
    int right = k, left = k; 
    int count = 1; 
    int limitRight = n - 1; 
    while(n <= maxSum && (left > 0 || right < limitRight))
    { 
        n += right - left + 1; 
        if(left > 0) left--; 
        if(right < limitRight) right++; 
        count++; 
    } 
    if(n < maxSum) count += (maxSum - n)/(right - left + 1) + 1; 
    return count-1;
}