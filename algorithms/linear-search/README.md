## Linear Search

Linear Search is a simple searching algorithm that checks each element in a collection one by one until the target is found or the list ends. It does not require the data to be sorted and is the most straightforward way to search.

---

## 🔦 Overview

* **Definition**: A search algorithm that sequentially checks each element in the array until the target is found.
* **Analogy**: Like looking for a name in a phone contact list by checking every entry one by one.
* **Core Goal**: To find a target value using a direct, step-by-step scan.

---

## ⚙️ How it Works

1. **Start from beginning**: Begin at the first element of the array.
2. **Compare each element**: Check if current element matches the target.
3. **Match found**: If equal, return its index immediately.
4. **Move forward**: If not, go to the next element.
5. **End of array**: If no match is found, return -1.

---

## 🎯 When to Use

* **Unsorted data**: Works even when data is not sorted.
* **Small datasets**: Efficient enough for short lists.
* **Simple implementation needed**: No complex setup required.
* **One-time searches**: Useful when search frequency is low.

---

## 🚀 Application

* **Basic searching tasks**: Used in simple scripts and programs.
* **Small-scale systems**: Where performance is not critical.
* **Embedded systems**: Lightweight and easy to implement.
* **Fallback method**: Used when other search structures are unavailable.

---

## ⚠️ Common Mistakes

* **Assuming it is fast**: It has O(n) time complexity, slow for large data.
* **Using on large datasets**: Inefficient compared to binary search or hashing.
* **Skipping edge cases**: Forgetting empty array or single-element array handling.
* **Not stopping early**: Continuing search even after finding the target.

---

## 👾 Pseudocode

```text
LinearSearch(arr, target)

    for i ← 0 to length(arr) - 1 do

        if arr[i] == target then
            return i
            // Target found at index i

    return -1
    // Target not found in array
```
