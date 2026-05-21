## Selection Sort

Selection Sort is a simple comparison-based sorting algorithm that repeatedly finds the smallest (or largest) element from the unsorted part and places it at the beginning. It reduces the number of swaps but is still inefficient for large datasets.

---

## 🔦 Overview

* **Definition**: A sorting algorithm that selects the minimum element from the unsorted portion and swaps it into its correct position.
* **Analogy**: Like picking the smallest item from a messy pile and placing it one by one into a sorted line.
* **Core Goal**: To build a sorted array by selecting the correct element at each step.

---

## ⚙️ How it Works

1. **Start from first element**: Assume it is the minimum.
2. **Find minimum**: Scan the remaining unsorted part to find the smallest element.
3. **Swap**: Place the smallest element at the current position.
4. **Move forward**: Move boundary of sorted part by one.
5. **Repeat**: Continue until the entire array is sorted.

---

## 🎯 When to Use

* **Small datasets**: Works fine for tiny inputs.
* **Minimal swap requirement**: Useful when write operations are expensive.
* **Simple systems**: Easy to implement and understand.
* **Educational purposes**: Good for learning sorting basics.

---

## 🚀 Application

* **Embedded systems**: Where simplicity matters more than speed.
* **Memory-constrained environments**: No extra space required.
* **Teaching sorting concepts**: Demonstrates selection logic clearly.
* **Basic optimization problems**: Used in simple algorithm demonstrations.

---

## ⚠️ Common Mistakes

* **Assuming it is efficient**: Always O(n²), even for sorted data.
* **Incorrect min tracking**: Forgetting to update minimum index properly.
* **Unnecessary swaps**: Swapping even when element is already in place.
* **Ignoring performance limits**: Not suitable for large datasets.

---

## 👾 Pseudocode

```text id="selection_sort_vault"
SelectionSort(arr)

    n ← length(arr)

    for i ← 0 to n - 1 do

        minIndex ← i

        for j ← i + 1 to n - 1 do

            if arr[j] < arr[minIndex] then
                minIndex ← j

        swap(arr[i], arr[minIndex])
```
