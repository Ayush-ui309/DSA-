# Remove Duplicate Letters

**LeetCode: 316 | Topic: String / Stack**

## Approach and Key Concept

- **Pattern:** Stack + Greedy + Frequency/Visited tracking.
- The required result must contain every distinct character exactly once, while being lexicographically smallest and preserving the relative order of the original string.
- `freq[26]` stores how many occurrences of each character are still remaining in the string.
- `check[26]` records whether a character is already present in `ans`.
- `ans` behaves like a stack:
  - `ans.back()` → top of the stack
  - `ans.pop_back()` → pop the top character
  - `ans += s[i]` → push the current character

## Why Decrement `freq[ind]` First?

- We are currently processing `s[i]`, so its remaining count must be reduced first.
- After decrementing, `freq[ind] > 0` means that this character will occur again later.
- Therefore, when the while-loop checks a character at the top of `ans`, `freq[...] > 0` tells us whether that character can safely be removed because it will be available again later.

## Why `check[ind]` and `continue`?

- Every character must appear only once in the final answer.
- If `check[ind]` is already true, that character is already present in `ans`.
- Therefore, the current occurrence is unnecessary and we simply skip it using `continue`.

## Core Logic of the While-Loop

```cpp
ans.length() > 0 && ans.back() > s[i] && freq[ans.back() - 'a'] > 0
```

All three conditions are necessary:
1. `ans.length() > 0` → There must be a character to remove.
2. `ans.back() > s[i]` → The last character is lexicographically larger than the current character. Removing it can make the answer lexicographically smaller.
3. `freq[ans.back() - 'a'] > 0` → The removed character appears again later. Therefore, removing it is safe because we can insert it again later.

When all three are true:
- Mark the popped character as unavailable in `check[]`.
- Pop it from `ans`.
- Continue checking the new last character (which is why the while-loop may remove multiple characters).

## Why Greedy & Stack?

- **Greedy:** At each step, we make the locally best choice. If a larger character is at the top and a smaller current character can come before it without losing the larger character, we remove the larger one. This continuously pushes the result toward the smallest possible lexicographical order.
- **Stack:** We only need to examine the most recently inserted character. If it is unsuitable, we remove it with `pop_back()`. After popping, we again inspect the new last character.

## Dry Run

Input: `cbacdcbc`

- `c` → `ans = "c"`
- `b` → `c > b` and `c` appears again → pop `c`, then insert `b` → `ans = "b"`
- `a` → `b > a` and `b` appears again → pop `b`, insert `a` → `ans = "a"`
- `c` → insert → `ans = "ac"`
- `d` → insert → `ans = "acd"`
- `c` → already present → `continue`
- `b` → `d > b` and `d` appears again? No → cannot pop `d`; insert `b` → `ans = "acdb"`
- `c` → already present → `continue`

Final answer: `acdb`

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Auxiliary Space | O(1) (`freq` and `check` fixed size 26) |
