## Bubble Sort

Bubble Sort is a simple comparison-based sorting algorithm used to arrange elements in a specific order (usually ascending). It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Over time, larger elements "bubble" to the end of the array.

---

## 🔦 Overview

* **Definition**: A sorting algorithm that repeatedly compares and swaps adjacent elements if they are in the wrong order.
* **Analogy**: Like sorting books by repeatedly swapping two out-of-order books until everything is arranged correctly.
* **Core Goal**: To gradually push the largest (or smallest) elements to their correct positions.

---

## ⚙️ How it Works

1. **Start from the beginning**: Take the first element of the array.
2. **Compare neighbors**: Check adjacent elements one by one.
3. **Swap if needed**: If the left element is greater than the right, swap them.
4. **End of pass**: After one full pass, the largest element is at the end.
5. **Repeat**: Reduce the range and repeat until no swaps are needed.

---

## 🎯 When to Use

* **Small datasets**: Works fine for tiny inputs.
* **Educational purposes**: Best for understanding sorting basics.
* **Nearly sorted data**: Can perform reasonably if the array is almost sorted.
* **Simple implementations**: When simplicity matters more than performance.

---

## 🚀 Application

* **Teaching sorting concepts**: Common in introductory computer science.
* **Basic system logic demos**: Used to show how comparisons and swaps work.
* **Debugging practice**: Helps visualize step-by-step sorting behavior.

---

## ⚠️ Common Mistakes

* **Ignoring optimization**: Not stopping early when the array is already sorted.
* **Wrong loop bounds**: Comparing out-of-range indices.
* **Assuming efficiency**: Using it for large datasets (very slow, O(n²)).
* **Forgetting swaps check**: Without a swap flag, unnecessary passes continue.

---

## 👾 Pseudocode

```
BubbleSort(arr)

    n ← length(arr)

    for i ← 0 to n - 1 do
        swapped ← false

        for j ← 0 to n - i - 2 do

            if arr[j] > arr[j + 1] then
                swap(arr[j], arr[j + 1])
                swapped ← true

        if swapped == false then
            break
            // Array is already sorted
```

