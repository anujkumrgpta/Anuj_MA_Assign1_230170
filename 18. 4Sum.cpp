// Did similar to that of 3 sum problem but taking four variables i and j, left and right this time.
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; ++i) {
        // Skip duplicate i
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; ++j) {
            // Skip duplicate j
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1, right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // Skip duplicates
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    while (left < right && nums[right] == nums[right - 1])
                        --right;

                    ++left;
                    --right;
                }
                else if (sum < target) {
                    ++left;
                }
                else {
                    --right;
                }
            }
        }
    }

    return result;}