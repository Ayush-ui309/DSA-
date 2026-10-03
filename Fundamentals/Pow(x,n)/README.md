# Pow(x, n)

**LeetCode: 50**

## Approach

Instead of multiplying `x` repeatedly `n` times, the exponent is processed using its binary representation.

If `binary % 2 == 1`, the current value of `x` is multiplied with `ans`. After every iteration, `x` is squared and `binary` is divided by `2`.

For a negative exponent, `x` is changed to `1/x` and the exponent is made positive.

The special cases for `n = 0`, `x = 0`, and `x = -1` are handled first.

## Key Concept — Binary Exponentiation

Binary exponentiation, also called exponentiation by squaring, reduces the number of operations by processing the exponent bit by bit.

```
binary exponent
→ check last bit
→ if 1, multiply ans by x
→ square x
→ divide exponent by 2
→ repeat
```

## Dry Run

For `x = 2, n = 5`:

```
binary = 5

Iteration 1:
5 % 2 = 1 → ans = 1 × 2 = 2
x = 4
binary = 2

Iteration 2:
2 % 2 = 0 → ans = 2
x = 16
binary = 1

Iteration 3:
1 % 2 = 1 → ans = 2 × 16 = 32
binary = 0

Result = 32
```

## Complexity

| | Complexity |
|---|---|
| Time | O(log n) |
| Space | O(1) |

## Key Takeaway

Binary exponentiation avoids repeated multiplication by using the binary representation of the exponent and repeatedly squaring the base.