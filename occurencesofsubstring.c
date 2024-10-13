#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[50];
    int count = 0;
    int len_str, len_sub;
    int i, j;

   
    printf("Enter the parent string: ");//taking user input
    gets(str);  

    printf("Enter the substring: ");
    scanf("%s", substring); 

    len_str = strlen(str);
    len_sub = strlen(substring);
    
    for(i = 0; i < len_str; i++) 
    {
        for(j = 0; j < len_sub; ) 
        {
            if(str[i] == substring[j]) 
            {
                if(j == len_sub - 1) 
                {
                    count++;
                    break;
                }
                i++;
                j++;
            } 
            else 
            {
                break;
            }
        }
        j = 0;  //resetting j
    }

    printf("%d", count);  
    return 0;
}
