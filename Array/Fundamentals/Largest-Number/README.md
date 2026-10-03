# Largest Number

**LeetCode: 179**

## Approach

Convert each integer into a string and store them in a string vector.

Instead of normal sorting, use a custom comparator. For two strings `A` and `B`, compare `A + B` and `B + A`. If `A + B` is greater, place `A` before `B`. This ensures that the final concatenation forms the largest possible number.

After sorting, concatenate all strings to get the answer.

## Key Concept — Custom Comparator

Normal sorting cannot determine which number should come first for this problem. Therefore, a custom comparator is used.

For two numbers:

A = "25", B = "9"

A + B = "259"  
B + A = "925"

Since `925 > 259`, `9` comes before `25`.

The comparator performs this comparison while sorting the elements.

The comparator can be written as a separate `cmp` function or as a lambda function directly inside `sort()`.

## Diagram

```
[25, 9, 3, 30]
        ↓
Convert to strings
["25", "9", "3", "30"]
        ↓
Compare A+B with B+A
        ↓
Arrange in required order
        ↓
["9", "3", "30", "25"]
        ↓
Concatenate
        ↓
"933025"
```

## Dry Run

For `A = "25"` and `B = "9"`:

```
A + B = "259"
B + A = "925"

Since 925 > 259,
9 comes before 25.
```

For `A = "3"` and `B = "30"`:

```
A + B = "330"
B + A = "303"

Since 330 > 303,
3 comes before 30.
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n log n) comparisons, with string operations depending on the number of digits |
| Space | O(n) for storing the converted strings and the result |