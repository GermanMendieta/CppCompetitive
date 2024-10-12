#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution *st = new Solution();
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = st->twoSum(nums, 3);

    // Imprimir el resultado
    for (int i : result)
    {
        cout << i << " . ";
    }
    cout << endl;

    return 0;
}
