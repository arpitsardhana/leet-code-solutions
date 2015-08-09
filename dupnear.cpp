#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums,int k) {
        unordered_map<int,int> map;

        for(int i = 0;i < nums.size();i++){
            if  (map.count(nums[i]) ==  1){
		cout<<endl<<i<<" "<<map[nums[i]];
		if ((i - map[nums[i]]) <= k){
                    return true;
                } else {
                    map[nums[i]] = i;
                }
            } else {
                map[nums[i]] = i;
            }
        }
            return false;
    }
};

int main(){

int arr[] = {-1,-1,3,4};
vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]) );

for(int i;i<nums.size();i++) cout<<nums[i]<<" ";
Solution sol1;
bool val = sol1.containsDuplicate(nums,1);
cout<<val<<endl;

return 0;
}
