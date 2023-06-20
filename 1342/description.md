# 1342. Number of Steps to Reduce a Number to Zero

## Question

Given an integer `num`, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by `2`, otherwise, you have to subtract `1` from it.

**Example 1:**

```
Input: num = 14
Output: 6
Explanation:
Step 1) 14 is even; divide by 2 and obtain 7.
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3.
Step 4) 3 is odd; subtract 1 and obtain 2.
Step 5) 2 is even; divide by 2 and obtain 1.
Step 6) 1 is odd; subtract 1 and obtain 0.
```

**Example 2:**

```
Input: num = 8
Output: 4
Explanation:
Step 1) 8 is even; divide by 2 and obtain 4.
Step 2) 4 is even; divide by 2 and obtain 2.
Step 3) 2 is even; divide by 2 and obtain 1.
Step 4) 1 is odd; subtract 1 and obtain 0.
```

**Example 3:**

```
Input: num = 123
Output: 12
```

**Constraints:**

- `0 <= num <= 106`

## Solution

The solution is pretty straightforward, we just loop the number and follow the steps and rules until we get `0` while counting the number of steps. For this case, we can use bitwise operation because there are only 2 operation that can be replace with bitwise operataion

The division by 2 can be subtituted with bitwise right-shift by 1 and the subtraction by 1 can be subtitute with bitwise XOR by 1.

**Python Solution**

```python
def numberOfSteps(num: int) -> int:
    res = 0

    while num != 0:
        if num & 1:     # AND operation for even/odd checking
            num ^= 1    # XOR
        else:
            num >>= 1   # Right Shift
        res += 1

    return res
```
