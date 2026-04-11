# Q1. Two Sum (E)

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

## Examples

### Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

### Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

### Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.
 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

## Hint

### Hint 1
```bash
A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's best to try out brute force solutions just for completeness. It is from these brute force solutions that you can come up with optimizations.
```

### Hint 2
```bash
So, if we fix one of the numbers, say x, we have to scan the entire array to find the next number y which is value - x where value is the input parameter. Can we change our array somehow so that this search becomes faster?
```

### Hint 3
```bash
The second train of thought is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?
```

## Similar Questions
```bash
3Sum
4Sum
Two Sum II - Input Array Is Sorted
Two Sum III - Data structure design
Subarray Sum Equals K
Two Sum IV - Input is a BST
Two Sum Less Than K
Max Number of K-Sum Pairs
Count Good Meals
Count Number of Pairs With Absolute Difference K
Number of Pairs of Strings With Concatenation Equal to Target
Find All K-Distant Indices in an Array
First Letter to Appear Twice
Number of Excellent Pairs
Number of Arithmetic Triplets
Node With Highest Edge Score
Check Distances Between Same Letters
Find Subarrays With Equal Sum
Largest Positive Integer That Exists With Its Negative
Number of Distinct Averages
Count Pairs Whose Sum is Less than Target0
```
