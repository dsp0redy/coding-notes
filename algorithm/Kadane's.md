# Kadane's Algorithm

- Kadane's Algorithm is an optimal, \(O(n)\) time complexity algorithm used to solve the Maximum Subarray Problem. 
- Given an array of integers, its goal is to find the contiguous subarray (a sequence of elements with no gaps) that produces the largest possible sum.

## Why is it special?

- A naive approach—calculating the sum of every possible subarray using nested loops—results in an \(O(n^2)\) time complexity, which runs slowly for large inputs. Kadane’s Algorithm optimizes this into a single pass (\(O(n)\) time) and constant space (\(O(1)\) space). It is classified as a Dynamic Programming technique.

## How It Works

- The algorithm keeps track of two variables as it iterates through the array from left to right:
    - current_sum: The maximum sum of a subarray that ends at the current index.
    - max_so_far: The overall maximum subarray sum encountered so far.
- At every element in the array, you face a choice:
    - Extend the previous subarray: Add the current element to current_sum.
    - Start a fresh subarray: Discard the previous current_sum if it is negative, and let the current element be the start of a new current_sum.
- The rule for evaluating the current element is: **current_sum = max(current_sum + current_element, current_element)**
- Then, max_so_far is updated if the new current_sum is greater

## Example:
[View source](../leetcode/53.cpp)


