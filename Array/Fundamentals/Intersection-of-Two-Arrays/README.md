# Intersection of Two Arrays

**LeetCode: 349**

## Approach

Store all elements of `nums1` in an `unordered_set`. Traverse `nums2` and check whether each element exists in the set. If found, add it to the result and erase it to avoid duplicates.

## Key Concept — Unordered Set

`unordered_set` stores unique elements and provides average O(1) lookup. It is used here to quickly check whether an element of `nums2` exists in `nums1`.

## Complexity

| | Complexity |
|---|---|
| Time | O(n + m) average |
| Space | O(n) |