#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i = 0;i < nums.size();i++){
            if  (map.count(nums[i]) ==  1){
                return false;
            } else {
                map[nums[i]] = 1;
            }
        }
        if (nums.size() > 1)
            return true;
        else 
            return false;
    }
};

int main(){

int arr[] = {1,2,3,4};
vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]) );
Solution sol1;
bool val = sol1.containsDuplicate(nums);
cout<<val<<endl;

return 0;
}

