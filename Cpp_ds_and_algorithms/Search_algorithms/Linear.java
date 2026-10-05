public class Linear{
    public static void main(String[] args) {
        Integer[] nums = {10, 2, 3, 33, 4, 6};

        System.out.println(linearSearch(nums, 3));
    }

    public static  int linearSearch(Integer[] nums, int toFind){
        for(int i=0; i<nums.length; i++){
            if(nums[i]==toFind){
                return i;
            }
        }

        return -1;
    }
}
