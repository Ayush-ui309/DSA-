# Longest Consecutive Sequence

**LeetCode: 128**

## Approach

Store all elements of the array in an `unordered_set` for fast lookup.

For each element, check whether its previous number (`current - 1`) exists in the set.

- If it exists, the current element is not the starting point of a sequence, so skip it.
- If it does not exist, the current element is the starting point of a consecutive sequence.
- Start counting from that element and check the next consecutive numbers using a `while` loop.
- Update the maximum count whenever a longer sequence is found.

This ensures that each consecutive sequence is counted only from its starting element.

## Key Concept — Unordered Set

`unordered_set` stores unique elements and provides average O(1) lookup.

Here, it is used to quickly check whether a number exists without repeatedly searching the original array.

The important idea is to check `current - 1` first. If it is not present, the current element is the beginning of a sequence, so we start counting from there. This prevents the same sequence from being counted multiple times.

## Diagram

```
Input: [100, 4, 200, 1, 3, 2]

                ↓

Unordered Set: {100, 4, 200, 1, 3, 2}

                ↓

        1 → 2 → 3 → 4

                ↓

        Longest Sequence = 4
```

## Dry Run

For `current = 1`:

```
1 - 1 = 0 → Not present
→ 1 is the starting point.

1 → 2 → 3 → 4

Count = 4
Maximum = 4
```

For `current = 3`:

```
3 - 1 = 2 → Present
→ 3 is not the starting point.
→ Skip.
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) average |
| Space | O(n) for the `unordered_set` |