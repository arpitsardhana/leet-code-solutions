#include <vector>
#include <iostream>

using namespace std;


class Solution {

public:

    void rotate(vector<int>& nums, int k) {

        

        vector<int> temp;

        int n = nums.size() - k;

        if ((k == 0) || (nums.size() == 0) || (k >= nums.size()))

            return;

            

        for(int i = 0;i < nums.size();i++ ){

            temp[i] = nums[n];

            n++;

            if (n == nums.size())

                n = 0;

        }

        

        for(int i = 0;i<nums.size();i++)

            nums[i] = temp[i];

    }

};

int main(){

int arr[] = {1,2,3,4};
vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]) );
Solution sol1;
sol1.rotate(nums,1);
cout<<nums[0];
cout<<endl<<nums[1];

return 0;
}
