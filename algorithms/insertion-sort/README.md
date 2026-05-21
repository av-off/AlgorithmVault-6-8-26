## Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one element at a time. It works similarly to how you sort playing cards in your hand by inserting each new card into its correct position.

---

## 🔦 Overview

* **Definition**: A sorting algorithm that inserts each element into its correct position within the already sorted portion of the array.
* **Analogy**: Like sorting cards in your hand—take one card at a time and place it in the correct spot.
* **Core Goal**: To gradually build a sorted list from left to right.

---

## ⚙️ How it Works

1. **Start from second element**: Treat the first element as already sorted.
2. **Pick current element**: Store it as the “key”.
3. **Shift elements**: Move all larger elements in the sorted part one position to the right.
4. **Insert key**: Place the key in its correct position.
5. **Repeat**: Continue until the array is fully sorted.

---

## 🎯 When to Use

* **Small datasets**: Works efficiently for small inputs.
* **Nearly sorted data**: Very fast when the array is almost sorted.
* **Online sorting**: Useful when data arrives one element at a time.
* **Simple implementation needed**: Easy to code and understand.

---

## 🚀 Application

* **Adaptive systems**: Performs well on partially sorted data.
* **Embedded systems**: Lightweight sorting with low overhead.
* **Hybrid algorithms**: Used inside advanced sorts like Timsort for small partitions.
* **Real-time insertion tasks**: When data is continuously updated.

---

## ⚠️ Common Mistakes

* **Assuming it is fast for large data**: Worst-case is O(n²).
* **Incorrect shifting logic**: Can overwrite elements if not handled properly.
* **Starting from index 0**: First element should be considered already sorted.
* **Ignoring nearly sorted advantage**: It performs best in such cases.

---

## 👾 Pseudocode

```text id="insertion_sort_vault"
InsertionSort(arr)

    n ← length(arr)

    for i ← 1 to n - 1 do

        key ← arr[i]
        j ← i - 1

        while j ≥ 0 AND arr[j] > key do
            arr[j + 1] ← arr[j]
            j ← j - 1

        arr[j + 1] ← key
```
