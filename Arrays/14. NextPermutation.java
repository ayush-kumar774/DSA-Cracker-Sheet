import java.util.*;

class Solution {
        public void nextPermutation(int[] nums) {
                int i = nums.length - 2;
                while (i >= 0 && nums[i + 1] <= nums[i]) {
                        i--;
                }
                if (i >= 0) {
                        int j = nums.length - 1;
                        while (j >= 0 && nums[j] <= nums[i]) {
                                j--;
                        }
                        swap(nums, i, j);
                }
                reverse(nums, i + 1);
                for (int j = 0; j < nums.length; j++) {
                        System.out.print(nums[j] + " ");
                }
                System.out.println();
        }

        private void reverse(int[] nums, int start) {
                int i = start, j = nums.length - 1;
                while (i < j) {
                        swap(nums, i, j);
                        i++;
                        j--;
                }
        }

        private void swap(int[] nums, int i, int j) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
        }
}

class NextPermutation {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                Solution sol = new Solution();
                int n = sc.nextInt();
                int arr[] = new int[n];
                for (int i = 0; i < n; i++) {
                        arr[i] = sc.nextInt();
                }
                sol.nextPermutation(arr);
                sc.close();
        }
}