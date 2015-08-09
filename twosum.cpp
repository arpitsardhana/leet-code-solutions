#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	unordered_map<int,int> map;
	vector<int> res;
	int temp,i;

	for(i=0;i<nums.size();i++){
		temp = target - nums[i];
	
		if (map.count(temp) && (map[temp] - 1) < i ) {
			res.push_back(map[temp]);
			res.push_back(i+1);
		} else {
			map[nums[i]] = i+1;
		}
	}

	return res;

}

int main()
{   
   	int myint[] = {1,2,3,4,5}; 
        vector<int> arr (myint, myint+sizeof(myint)/sizeof(int)); 

        vector<int> res =  twoSum(arr,5);
        cout<<endl<<"index"<< res[0]<<res[1]<<endl;
        return 0;
}

