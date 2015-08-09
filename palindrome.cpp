#include<iostream>
#include <cmath>
#include <string>

using namespace std;

class Solution {

public:

    bool isPalindrome(int x) {
	if (x < 0)
            return false;

        string str = to_string(x);
        int i = 0;
        int size = str.size();
        int lim = size - 1;
        while(i < size/2){
            if (i == lim)
                return true;

            if (str[i++] != str[lim--])
                return false;

        }
        return true;

        /*long int num = abs(x);
	long int temp = num;

        long int sum = 0;

        int rem;

        

        while(num != 0){

            rem = num%10;

            sum = sum*10 + rem;

            num = num/10;

        }

        cout<<abs(x)<<endl<<sum<<endl;       

        if (sum == abx(x))
            return true;
        else
            return false;*/

    }

};

int main()
{

	int num = 1;
	int num1 = 121;
        int num2 = 3244444;

	Solution sol1;
	bool val = sol1.isPalindrome(num);
	bool val1 = sol1.isPalindrome(num1);
	bool val2 = sol1.isPalindrome(num2);
	cout<<val<<" "<<val1<<"  "<<val2;
	return 0;

}
