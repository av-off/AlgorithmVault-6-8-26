## Quick Sort

Quick Sort is a highly efficient divide-and-conquer sorting algorithm that organizes elements by selecting a pivot and partitioning the array around it. It is widely used because of its strong average-case performance and in-place sorting capability.

---

## 🔦 Overview

* Definition: A sorting algorithm that partitions an array into smaller subarrays around a pivot element.
* Analogy: Picking a person in a queue and moving everyone shorter to the left and taller to the right.
* Core Goal: To sort data efficiently by recursively dividing the problem into smaller parts.

---

## ⚙️ How it Works

1. Choose Pivot: Select an element from the array as the pivot.
2. Partition:

   * Place all smaller elements to the left of the pivot.
   * Place all larger elements to the right of the pivot.
3. Recursive Sorting:

   * Apply Quick Sort to the left subarray.
   * Apply Quick Sort to the right subarray.
4. Repeat: Continue until subarrays contain one or zero elements.

---

## 🎯 When to Use

* Large Datasets: Performs extremely well for large arrays in average cases.
* In-Memory Sorting: Ideal when the entire dataset fits into memory.
* Fast General Sorting: Commonly used in standard library implementations.
* Random Access Structures: Works best with arrays or vectors.

---

## 🚀 Application

* System Libraries: Many language libraries use optimized Quick Sort variants internally.
* Competitive Programming: Popular because of its speed and simplicity.
* Database Systems: Used in internal sorting operations.
* Data Processing Pipelines: Efficient for sorting large collections quickly.

---

## ⚠️ Common Mistakes

* Bad Pivot Choice: Always choosing the first or last element can degrade performance to O(n²).
* Stack Overflow: Deep recursion can occur for highly unbalanced partitions.
* Forgetting Base Case: Missing recursion stopping conditions causes infinite recursion.
* Incorrect Partition Logic: Mishandling swaps can break sorting order.

