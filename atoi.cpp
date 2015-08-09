#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        long int i = 0;
        long int num = 0;
	int temp_num;
        int mul = 1;
        int flag = 0;
        int sign = 0;
	int firstchar = 0;
        
        while(i < str.size()){
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'){
                	i++;
                	if (flag == 1)
                    		break;
                	else
                    		continue;
        	} else {
			if (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')) {
	
			} else
				break;

		} 


            if (str[i] == '+' || str[i] == '-') {
                if (str[i+1] >= '0' && str[i+1] <= '9'){
                    if (str[i] == '+'){
                        sign = 1;
                     }else
                        sign = 2;
                } else {
                    break;
		}
            } 
            if (str[i] >= '0' && str[i] <= '9'){
                if (flag == 0)
                    flag = 1;
                temp_num = str[i] - '0' ;
                num = num*10 + temp_num;
            } else {
			if (flag == 1)
                    	  break;
            }
            if ((num >= 2147483647) && (sign < 2)){
                return 2147483647;
            } 
            if ((num >= 2147483648) && (sign == 2)){
                return -2147483648;
            } 
            i++;
        }

        if (sign == 2)
            return num*(-1);
        else
            return num;
    }
};

int main(){
string str = "bree123";
string str1 = "-1";
string str2 = "+1";
string str3 = "16263563563635636363636";
string str4 = "-2147483648";
int num,num1,num2,num3,num4;
Solution sol1;
num = sol1.myAtoi(str);
num1 = sol1.myAtoi(str1);
num2 = sol1.myAtoi(str2);
num3 = sol1.myAtoi(str3);
num4 = sol1.myAtoi(str4);
cout<<num<<endl;
cout<<num1<<endl<<num2<<endl<<num3<<endl<<num4;
cout<<endl;

return 0;
}

