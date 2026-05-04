## Bubble Sort

Bubble Sort is a simple, comparison-based sorting algorithm. It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. [1, 2, 3, 4, 5] 

------------------------------
## 🔦 Overview

* Definition: A basic sorting algorithm that "bubbles" the largest (or smallest) elements to their correct positions at the end of the list.
* Analogy: Like bubbles rising to the surface of a glass of soda; the largest values slowly move to the top of the array.
* Core Goal: To organize a collection into ascending or descending order through local swaps. [6, 7, 8, 9, 10] 

------------------------------
## ⚙️ How it Works

   1. Iterate: Start at the beginning of the array.
   2. Compare: Look at the first two elements.
   3. Swap: If the first is greater than the second, swap them.
   4. Move Forward: Move to the next pair and repeat the comparison.
   5. Repeat Passes: After one full pass, the largest element is at the end. Repeat the process for the remaining unsorted elements. [11, 12, 13, 14, 15] 

------------------------------
## 🎯 When to Use

* Educational Purposes: It is the standard starting point for learning how sorting logic works.
* Nearly Sorted Data: If the array is already almost sorted, Bubble Sort (with a "flag" optimization) can finish very quickly.
* Memory Constraints: It is an "in-place" algorithm, meaning it requires almost no extra memory to run.
* Small Datasets: For lists with very few items, its simplicity is sometimes preferred over complex algorithms. [16, 17, 18, 19, 20] 

------------------------------
## 🚀 Application

* Computer Science Education: Used universally to teach the concept of algorithmic loops and swaps.
* Graphics Hardware: Sometimes used in specialized hardware where the "swap" operation is extremely cheap.
* Check for Sortedness: A single pass of Bubble Sort can be used to verify if a list is already sorted. [21, 22] 

------------------------------
## ⚠️ Common Mistakes

* Inefficiency: Beginners often use it for large datasets where it becomes extremely slow.
* Unnecessary Passes: Forgetting to stop the algorithm early if no swaps occurred during a pass (the "Optimized Bubble Sort").
* Indexing Errors: Off-by-one errors when comparing the "current" and "next" element at the end of the array. [23, 24, 25, 26, 27] 


