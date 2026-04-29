
# 🫧 Bubble Sort

Bubble Sort is a **simple comparison-based sorting algorithm** that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

It is mainly used for **learning sorting fundamentals**, not for real-world performance-critical systems.

---

## 🚀 How it works

1. Start from the beginning of the array
2. Compare each pair of adjacent elements
3. Swap them if they are in the wrong order
4. After each full pass, the largest element moves to the end
5. Repeat for remaining unsorted elements
6. Stop when no swaps occur in a pass

---

## ⚠️ Key Idea

* Large elements “bubble up” to the end after each iteration
* Each pass reduces the unsorted portion by one element
* Can be optimized by stopping early if no swaps happen

---

## 📌 Example

Input:
`[5, 1, 4, 2, 8]`

Steps:

* Pass 1 → `[1, 4, 2, 5, 8]`
* Pass 2 → `[1, 2, 4, 5, 8]`
* Sorted → `[1, 2, 4, 5, 8]`

---

## ⏱ Complexity

* Best Case: **O(n)** (already sorted)
* Average Case: **O(n²)**
* Worst Case: **O(n²)**

---

## 💡 Why it matters

Bubble Sort is important for beginners because it teaches:

* basic sorting logic
* nested loops
* swapping techniques
* algorithm optimization ideas

Even though it is inefficient, it builds a strong foundation for advanced sorting algorithms like Quick Sort and Merge Sort.

---

## 🧠 Use Cases

* Learning Data Structures & Algorithms
* Teaching sorting concepts
* Small datasets only

