#include "a0009.h"
#include <iostream>

using namespace std;

void swapStrings(char *s1, char *s2)
{
    unsigned int i;
    string str1(s1);
    string str2(s2);
    
    for(i = 0; i < str1.size(); ++i)
    {
        s2[i] = str1[i];
    }
    for(i = 0; i < str2.size(); ++i)
    {
        s1[i] = str2[i];
    }

    s1[str2.size()] = 0;
    s2[str1.size()] = 0;

}

void sortOrder(char list[][21], int size)
{
    int i;

    bool flag = true;

    
    while(flag == true)
    {
        flag = false;
        
        for(i = 1; i < size; ++i)
        {
            if(strcmp(list[i], list[i - 1]) < 0)
            {
                swapStrings(list[i], list[i - 1]);
                
                flag = true;
            }
        }
    }
}

void sortLen(char list[][21], int size)
{
    int i, j;
    int minIndex = 0;
    
    for(i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for(j = i + 1; j < size; j++)
        {
            if(strlen(list[j]) < strlen(list[minIndex]))
            {
                minIndex = j;
            }
        }
        swapStrings(list[i], list[minIndex]);
    }

}


    