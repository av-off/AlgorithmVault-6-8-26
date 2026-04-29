
# 🔍 Binary Search

Binary Search is a **divide-and-conquer algorithm** used to efficiently locate a target value within a **sorted array**.

Instead of scanning every element, it repeatedly **cuts the search space in half**, achieving logarithmic performance.

---

## ⚡ Complexity

| Type  | Complexity |
|-------|----------|
| Time  | O(log n) |
| Space | O(1)     |

---

## 🧠 Core Idea

At each step:

- Compare the target with the **middle element**
- Eliminate **half of the array**
- Continue on the remaining half

This drastically reduces the number of comparisons.

---

## 🔄 Algorithm Steps

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`

2. While `left ≤ right`:
   - Compute middle index:
     ```
     mid = (left + right) // 2
     ```
   - If `arr[mid] == target` → return index
   - If `target < arr[mid]` → search left half
   - If `target > arr[mid]` → search right half

3. If not found → return `-1`

---

## 📌 Example

```text
Array:  [1, 3, 5, 7, 9]
Target: 7
````

Steps:

* mid = 2 → value = 5 → go right
* mid = 3 → value = 7 → found ✅

**Output:** `3`

---

## ⚠️ Requirements

* The array **must be sorted**
* Works best on **random-access structures** (like arrays)

---

## 💡 Why it matters

* Reduces search time from **O(n)** → **O(log n)**
* Foundation for many advanced techniques:

  * Lower/upper bound search
  * Binary search on answers
  * Searching in rotated arrays

---

## 🆚 Binary vs Linear Search

| Feature         | Binary Search | Linear Search |
| --------------- | ------------- | ------------- |
| Time Complexity | O(log n)      | O(n)          |
| Requires Sorted | Yes           | No            |
| Performance     | Very fast     | Slower        |

---

## 🚀 Use Cases

* Searching in large sorted datasets
* Competitive programming problems
* Database indexing concepts
* Optimization problems (binary search on answer)

---

## ⚠️ Common Mistakes

* ❌ Forgetting to sort the array
* ❌ Infinite loop due to wrong mid update
* ❌ Overflow in `(left + right)` (use `left + (right - left) // 2` in some languages)

---

## 🧩 Variations

* First/last occurrence of an element
* Lower bound / upper bound
* Search in rotated sorted array
* Binary search on monotonic functions

---

> 🔥 Mastering Binary Search is essential — it shows up everywhere from interviews to real-world systems.


