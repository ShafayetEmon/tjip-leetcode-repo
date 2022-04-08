class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lastIndex = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        
        while(lastIndex >= 0)
        {
            if(j < 0 || (i >= 0 && nums1[i] > nums2[j]))
                nums1[lastIndex--] = nums1[i--];
            else
                nums1[lastIndex--] = nums2[j--];
        }
        
    }
};

/*
Time complexity : O(N) 
Space complexity: O(1)
*/