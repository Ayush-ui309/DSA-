# LeetCode 229 — Majority Element II

**Topic:** Algorithm / Moore's Voting Algorithm

## Approach

- An element must occur more than `n/3` times.
- There can be at most two valid majority elements.
- Therefore, maintain two candidates `ans1`, `ans2` with counts `c1`, `c2`.
- If the current element matches a candidate, increase its count.
- If a candidate count is `0`, replace that candidate with the current element.
- If the current element is different from both candidates and both counts are non-zero, decrease both counts.
- This cancels one occurrence of each candidate with the new different element.
- The first pass gives possible candidates; the second pass verifies their actual frequencies.
- Add every candidate whose frequency is greater than `n/3`.
- `INT_MIN` is used as the initial candidate so that `0` can safely be a valid array element.

## Key Concept

- Moore's Voting is extended from one candidate to two candidates.
- `> n/2` → at most 1 valid element.
- `> n/3` → at most 2 valid elements.
- When a third different element appears, one occurrence of all three is cancelled, so `c1--` and `c2--`.
- Verification is necessary because the voting phase gives candidates, not guaranteed answers.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) auxiliary space |