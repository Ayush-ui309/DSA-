# LeetCode 169 — Majority Element

**Topic:** Algorithm / Moore's Voting Algorithm

## Approach

- Majority element is guaranteed to exist and occurs more than `n/2` times.
- Maintain one candidate `ANS` and its count `c`.
- If `c == 0`, make the current element the new candidate.
- Same element as `ANS` → `c++`; different element → `c--`.
- Since the majority element occurs more than all other elements combined, its count cannot be completely cancelled.
- Therefore, the final `ANS` is the majority element.

## Key Concept

- Moore's Voting Algorithm cancels one occurrence of the candidate with one occurrence of a different element.
- The majority element has enough occurrences to survive these cancellations.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |

> **Note:** If the question does not guarantee that a majority element exists, Moore's Voting only gives a candidate. Verify its frequency after the voting phase; if its frequency is not greater than `n/2`, return `-1`.