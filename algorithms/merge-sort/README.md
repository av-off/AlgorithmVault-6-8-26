# Merge Sort

Merge Sort is a powerful divide-and-conquer sorting algorithm that repeatedly splits an array into smaller parts, sorts them independently, and then merges them back together in sorted order. It is known for its consistent performance and stability.

---

## 🔦 Overview

* **Definition:** A sorting algorithm that divides an array into halves, recursively sorts them, and merges the sorted halves.
* **Analogy:** Splitting a messy deck of cards into smaller piles, sorting each pile, then combining them into one perfectly ordered deck.
* **Core Goal:** To achieve efficient and stable sorting with guaranteed `O(n log n)` performance.

---

## ⚙️ How it Works

1. **Divide:** Split the array into two halves.
2. **Recursive Sort:** Recursively apply Merge Sort on both halves.
3. **Merge:** Combine the two sorted halves into one sorted array.
4. **Repeat:** Continue until the entire array becomes sorted.

---

## 🎯 When to Use

* **Large Datasets:** Performs efficiently even on very large arrays.
* **Stable Sorting Needed:** Preserves the relative order of equal elements.
* **Linked Lists:** Works exceptionally well because merging is efficient.
* **Predictable Performance:** Preferred when worst-case guarantees matter.

---

## 🚀 Application

* **Database Systems:** Used in external sorting for massive datasets.
* **Parallel Computing:** Easy to parallelize due to divide-and-conquer structure.
* **Inversion Counting:** Helps count inversions efficiently in arrays.
* **Real-World Libraries:** Forms the foundation of several hybrid sorting algorithms.

---

## ⚠️ Common Mistakes

* **Ignoring Extra Space:** Merge Sort requires additional memory for merging.
* **Incorrect Merge Logic:** Mishandling pointers while merging can break sorting.
* **Infinite Recursion:** Forgetting the base case (`array length <= 1`).
* **Off-by-One Errors:** Incorrect midpoint calculations or subarray ranges.

