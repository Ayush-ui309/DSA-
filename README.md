# DSA — LeetCode & Problem Solving Repository

A personal repository for organizing and revising Data Structures & Algorithms solutions. Every solution here is one I have personally solved, understood, and documented for long-term retention and placement preparation.

---

## Purpose

- Maintain clean, well-explained solutions to DSA/LeetCode problems.
- Organize problems by **topic → pattern/algorithm/technique** for efficient revision.
- Serve as a quick-reference during technical and placement discussions.

---

## Repository Structure

```
DSA/
│
├── Fundamentals/          # General mathematical/DSA fundamentals (Fibonacci, GCD, etc.)
│
├── Array/
│   ├── Algorithms/        # Important array algorithms (e.g., Kadane's, Dutch National Flag)
│   ├── Two-Pointer/
│   ├── Sliding-Window/
│   ├── Hashing/
│   ├── Prefix-Sum/
│   ├── Binary-Search/
│   └── Fundamentals/      # Array problems not tied to a specific pattern
│
├── String/
├── Linked-List/
├── Stack/
├── Queue/
├── Tree/
└── Graph/
```

> Subfolders inside `String`, `Linked-List`, `Stack`, `Queue`, `Tree`, and `Graph` will be added as problems are solved.

---

## Organization Rules

- **Topic folders** represent the primary data structure or domain (e.g., `Array`, `Tree`).
- **Pattern/Algorithm subfolders** group problems by the core technique used in the solution (e.g., `Two-Pointer`, `Sliding-Window`).
- **`Algorithms/`** (under a topic) contains standalone implementations of important algorithms relevant to that topic.
- **`Fundamentals/`** (under a topic) holds problems that don't belong to a specific pattern — general or mixed-technique problems.
- **Top-level `Fundamentals/`** is for general mathematical/DSA concepts not tied to any one topic (e.g., Fibonacci, GCD, reverse number).
- New pattern folders are created **only when a solved problem actually requires them** — no speculative folders.

---

## Per-Question Structure

Each solved problem lives in its own folder:

```
Problem-Name/
├── solution.cpp   # The maintained solution
└── README.md      # Explanation of the approach
```

### What the question README contains

- **Approach** — A concise explanation of the actual solution used.
- **Key Concepts** — Relevant patterns, data structures, or algorithmic ideas.
- **Visual** — A simple diagram or example walkthrough.
- **Dry Run** — A short trace through the logic on a small input.
- **Complexity** — Time and space complexity.

> Only the solution being actively maintained is documented. Brute-force alternatives are not included unless they offer distinct learning value.

---

## Goal

This repository is designed primarily for **revision**, **pattern recognition**, and being able to **clearly explain solutions** in technical interviews and placement discussions.
