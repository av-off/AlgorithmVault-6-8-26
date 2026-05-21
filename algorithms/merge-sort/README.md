## Merge Sort

Merge Sort is a stable divide-and-conquer sorting algorithm that splits an array into smaller halves, sorts them recursively, and then merges them back together in sorted order. It guarantees consistent performance and is widely used where stability and predictability matter.

---

## 🔦 Overview

* **Definition**: A sorting algorithm that divides the array into halves, sorts them recursively, and merges the sorted halves.
* **Analogy**: Like sorting two piles of papers separately, then merging them into one perfectly ordered stack.
* **Core Goal**: To achieve efficient and stable sorting with predictable performance.

---

## ⚙️ How it Works

1. **Divide**: Split the array into two equal halves.
2. **Conquer**: Recursively sort both halves.
3. **Merge**: Combine the two sorted halves into one sorted array.
4. **Compare While Merging**: Always pick the smaller element from the two halves.
5. **Finish**: Continue until the full array is reconstructed.

---

## 🎯 When to Use

* **Stable sorting required**: Keeps equal elements in their original order.
* **Large datasets**: Performs consistently with O(n log n) complexity.
* **Linked lists**: Works very well compared to many other sorting algorithms.
* **External sorting**: Useful when data doesn’t fit into memory.

---

## 🚀 Application

* **Database systems**: Used for sorting large datasets reliably.
* **External storage sorting**: Handles data stored in disk efficiently.
* **Programming libraries**: Used in stable sort implementations.
* **Inversion counting problems**: Useful in advanced algorithm problems.

---

## ⚠️ Common Mistakes

* **Forgetting merge step logic**: Incorrect merging breaks sorted order.
* **Extra space assumption**: Merge sort requires additional memory (O(n)).
* **Incorrect mid calculation**: Can lead to uneven splits or errors.
* **Not copying remaining elements**: Missing leftover elements from one half.

---

## 👾 Pseudocode

```text id="merge_sort_vault"
MergeSort(arr)

    if length(arr) ≤ 1 then
        return arr
        // Base case: already sorted

    mid ← length(arr) // 2

    left ← MergeSort(arr[0 : mid])
    right ← MergeSort(arr[mid : end])

    return Merge(left, right)


Merge(left, right)

    result ← empty array
    i ← 0
    j ← 0

    while i < length(left) AND j < length(right) do

        if left[i] ≤ right[j] then
            append left[i] to result
            i ← i + 1
        else
            append right[j] to result
            j ← j + 1

    while i < length(left) do
        append left[i] to result
        i ← i + 1

    while j < length(right) do
        append right[j] to result
        j ← j + 1

    return result
```
