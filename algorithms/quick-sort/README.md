## Quick Sort

Quick Sort is a highly efficient divide-and-conquer sorting algorithm. It works by selecting a “pivot” element, partitioning the array into elements smaller and larger than the pivot, and then recursively sorting the sub-arrays. It is widely used in practice due to its average-case speed and in-place nature.

---

## 🔦 Overview

* **Definition**: A sorting algorithm that partitions an array around a pivot and recursively sorts the partitions.
* **Analogy**: Like organizing books by picking one book (pivot), placing smaller ones on the left and bigger ones on the right, then repeating the process.
* **Core Goal**: To efficiently sort by breaking the problem into smaller subproblems.

---

## ⚙️ How it Works

1. **Choose Pivot**: Select an element from the array (commonly first, last, or middle).
2. **Partition**: Rearrange elements so that:

   * Elements smaller than pivot go left
   * Elements greater than pivot go right
3. **Place Pivot**: Pivot is now in its correct sorted position.
4. **Recurse**: Apply the same process to left and right sub-arrays.
5. **Stop**: When sub-array size becomes 0 or 1.

---

## 🎯 When to Use

* **Large datasets**: Very efficient in practice for big inputs.
* **General-purpose sorting**: One of the most commonly used sorting algorithms.
* **In-place sorting needed**: Uses minimal extra memory.
* **Performance-critical systems**: Often faster than other O(n log n) sorts in real-world use.

---

## 🚀 Application

* **Standard libraries**: Used (or variants used) in many built-in sort functions.
* **Databases**: Helps in internal sorting operations.
* **System-level programming**: Used where fast average-case performance is required.
* **Competitive programming**: Common choice for custom sorting logic.

---

## ⚠️ Common Mistakes

* **Bad pivot choice**: Always choosing first/last element can degrade performance to O(n²).
* **Incorrect partitioning**: Wrong swaps can break sorting logic.
* **Not handling recursion base case**: Forgetting stopping condition leads to infinite recursion.
* **Stack overflow risk**: Deep recursion on already sorted data.

---

## 👾 Pseudocode

```text
QuickSort(arr, low, high)

    if low < high then

        pivotIndex ← Partition(arr, low, high)

        QuickSort(arr, low, pivotIndex - 1)
        QuickSort(arr, pivotIndex + 1, high)


Partition(arr, low, high)

    pivot ← arr[high]
    i ← low - 1

    for j ← low to high - 1 do

        if arr[j] ≤ pivot then
            i ← i + 1
            swap(arr[i], arr[j])

    swap(arr[i + 1], arr[high])
    return i + 1
```
