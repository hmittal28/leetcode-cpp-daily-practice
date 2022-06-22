class Solution {
 public:
  int findKthLargest(vector<int>& nums, int l)
  {
    priority_queue<int, vector<int>, greater<>> minHeap;

    for (const int num : nums) 
    {
      minHeap.push(num);
      if (minHeap.size() > l)
        minHeap.pop();
    }

    return minHeap.top();
  }
};