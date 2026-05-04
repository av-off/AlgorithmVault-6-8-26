## Binary Search

Binary Search is an efficient divide-and-conquer algorithm used to locate a specific item in a sorted collection. By repeatedly halving the search range, it finds targets significantly faster than a linear scan.

------------------------------
## 🔦 Overview

* Definition: A search algorithm that finds the position of a target value within a sorted array.
* Analogy: Opening a physical dictionary to the middle, then deciding whether to search the front or back half.
* Core Goal: To reduce the search time from linear to logarithmic.

------------------------------
## ⚙️ How it Works

   1. Initialize: Set two boundaries, low (start) and high (end).
   2. Calculate Mid: Find the middle index of the current range.
   3. Evaluate:
   * If mid == target: Return the index.
      * If mid < target: Narrow the search to the right half.
      * If mid > target: Narrow the search to the left half.
   4. Repeat: Continue until the target is found or the range is empty.

------------------------------
## 🎯 When to Use

* Sorted Datasets: The data must be pre-sorted; otherwise, the algorithm fails.
* Static Data: Best used when data doesn't change often, as re-sorting after every insertion is expensive.
* Random Access: The data structure must allow jumping to any index (like an Array, not a Linked List).
* Large Inputs: Use when a Linear Search is too slow for the scale of your data.

------------------------------
## 🚀 Application

* Database Indexing: Quickly retrieving records from sorted primary keys.
* System Libraries: Powering functions like Java's Arrays.binarySearch().
* Debugging: The "Git Bisect" command uses binary search to find which commit introduced a bug.

------------------------------
## ⚠️ Common Mistakes

* Unsorted Data: Using binary search on an unsorted array will yield incorrect results.
* Boundary Errors: Using low < high instead of low <= high, which can skip the target.
* Overflow: Using (low + high) // 2 in languages with fixed integer sizes (use low + (high - low) // 2 instead).



