# Best Time to Buy and Sell Stock

**LeetCode: 121 | Topic: Greedy Algorithm**

## Approach

- Maintain `bestBuy` as the minimum price seen so far.
- For every current price, calculate the profit using: `prices[i] - bestBuy`.
- Keep the maximum profit in `maxProfit`.
- After checking the profit, update: `bestBuy = min(bestBuy, prices[i])`.
- If prices continuously decrease, no positive profit is found, so `maxProfit` remains `0`.

## Key Concept

- For every selling price, the best possible buying price is the minimum price that appeared before it.
- Greedily keep the cheapest buying price seen so far.
- The important point is that the buying day must come before the selling day.
- `maxProfit = 0` automatically handles the case where no profit is possible.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |