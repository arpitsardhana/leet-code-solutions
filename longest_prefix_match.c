#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* longestCommonPrefix(char** strs, int strsSize) {

    if (strs == NULL)

        return NULL;

    char *prefix = strs[0];

    int prefix_len = strlen(prefix);

    int str_entry = 1;

    int comp_len = 0;

    char *comp;


    while (strs[str_entry] != NULL) {
        comp = strs[str_entry];
        comp_len = 0;

        while ((comp_len < prefix_len) && (comp_len < strlen(str_entry))) {
            if (prefix[comp_len] != comp[comp_len]) {
                prefix_len = comp_len;
                break;
            } else {
                comp_len++;
            }
        }
        if (prefix_len == 0)
            return NULL;
        str_entry++;
    }
    

    while ((prefix[prefix_len] != NULL) && (prefix[prefix_len] != '\0'))
        prefix[prefix_len++] = '\0';

        return prefix;
}

int main()
{

	char *newstring[10] = {"test1" , "test2" ,"test3"};

	char *prefix = longestCommonPrefix(newstring,10);

	printf("%s\n",prefix);

	return 0;

}
