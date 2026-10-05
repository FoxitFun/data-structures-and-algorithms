public class Binary {

    public static int binarySearchIter(Integer[] nums, int toFind) {
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == toFind) {
                return mid;
            }
            else if (nums[mid] > toFind) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return -1;
    }

    public static int binarySearchRek(
            Integer[] nums,
            int toFind,
            int left,
            int right) {

        if (left > right) {
            return -1;
        }

        int mid = (left + right) / 2;

        if (nums[mid] == toFind) {
            return mid;
        }
        else if (nums[mid] > toFind) {
            return binarySearchRek(nums, toFind, left, mid - 1);
        }
        else {
            return binarySearchRek(nums, toFind, mid + 1, right);
        }
    }

    public static void main(String[] args) {
        Integer[] nums = {10, 20, 30, 40, 50, 60, 70, 80, 90};

        System.out.println(binarySearchIter(nums, 30));
        System.out.println(binarySearchRek(nums, 30, 0, nums.length - 1));
    }
}
