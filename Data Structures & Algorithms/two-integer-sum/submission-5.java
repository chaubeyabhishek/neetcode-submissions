class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int first = nums[i];
            int need = target - first;
            if(mp.containsKey(need)){
                return new int[]{mp.get(need),i};
            }
            mp.put(first,i);
        }

        return new int[]{};
    }
}
