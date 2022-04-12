class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int> > result;
        
        int start = intervals[0][0], end = intervals[0][1];
        for(auto& current : intervals)
        {
            if(current[0] > end)
            {
                result.push_back({start, end});
                start = current[0];
                end = current[1];
            }
            else
            {
                end = max(end, current[1]);
            }
        }
        result.push_back({start, end});
        return result;
    }
};

/*
Time complexity : O(NlogN) 
Space complexity: O(N)
*/