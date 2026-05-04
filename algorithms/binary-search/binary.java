public class BinarySearch {
    /**
     * Standard iterative Binary Search
     * @param arr - The sorted array to search through
     * @param target - The value to find
     * @return The index of target if found, otherwise -1
     */
    public static int search(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            // Using low + (high - low) / 2 to avoid integer overflow
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                return mid; // Target found
            } else if (arr[mid] < target) {
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }

        return -1; // Target not present
    }

    public static void main(String[] args) {
        int[] data = {1, 3, 5, 7, 9, 11};
        int target = 7;
        
        int result = search(data, target);
        
        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found.");
        }
    }
}
