# Container With Most Water

**LeetCode: 11 | Topic: Two-Pointer Approach**

## Approach

- Start with two pointers at both ends of the array.
- This initially gives the maximum possible width.
- Calculate: `area = width × min(left height, right height)`.
- The smaller height decides the actual height of the container.
- Move the pointer having the smaller height.
- Continue until `lp` and `rp` meet.

## Key Concept

- The smaller boundary is the limiting factor.
- Moving the taller boundary cannot help while the smaller boundary remains unchanged.
- Therefore, always move the pointer with the smaller height.
- Width continuously decreases, so we try to compensate by finding a larger limiting height.

> **Important:** `min(height[lp], height[rp])` determines the container height. Start from both ends because that gives maximum width initially.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |