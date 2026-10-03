# Single Number

**LeetCode: 136**

## Approach

Store the frequency of each element using an `unordered_map`. Traverse the array again and return the element whose frequency is `1`.

## Key Concept — Unordered Map

`unordered_map` stores each element with its frequency and provides average O(1) lookup. It is used here to quickly identify the element that appears only once.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) average |
| Space | O(n) |