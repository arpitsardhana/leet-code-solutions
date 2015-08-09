
#include <stdlib.h>
#include <stdio.h>


/**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* twoSum(int* nums, int numsSize, int target) {

	int i ,j,flag;
	flag = 0;


	for (i = 0 ;i < numsSize;i++) {
        	

		for(j = 0; j < numsSize;j++){
		
			if ( j == i)
				continue;
			if (nums[i] + nums[j] == target) {
				flag = 1;
				break;	
			}
		}
		
		if (flag == 1) {
			i++;
			j++;
			break;
		}
	
	}

	int *result = malloc(2*sizeof(int));

	if ( i < j) {
		result[0] = i;
		result[1] = j;
	 } else {
		result[0] = j;
		result[1] = i;
	}
	
	return result;

}

int main()
{

	int arr[4] = {1,2,3,4};

	int *res = twoSum(arr,4,5);
	printf("index  %d index  %d \n",res[0],res[1]);
	return 0;
}




