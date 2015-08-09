#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ptr = 0;
        int flag = 0;
        int location = 0;
        for(int i=s.size() - 1;i >= 0;i--){
            if (flag == 0){
                if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r'){
                    flag = 0;
		    continue;
                }else{
                    flag = 1;
                    location = i+1;
                }    
            }
            if ((flag == 1) && (s[i] == ' ')){
		if (location <= i) {
			ptr = 0;
			location++;
		} else
                	ptr = i+1;
                
		break;
            }
        }
	cout<<location<<"  "<<ptr;
        return (location - ptr);
    }

};

int main(){
	string str= "he ";
	Solution sol1;
	cout<<str<<" "<<sol1.lengthOfLastWord(str)<<endl;
	return 0;

}
