#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[] = {1,1,2,2,2,2,3,3,3,4,4,4,4,5};
    int frequency = 0;
    int most_common = values[0];
    int temp = 0;
    int tempfreq;
    int Values_size = sizeof(values)/sizeof(values[0]);
    int i = 0;
    int j = 0;

    for(i=0;i<Values_size;i++)
    {
        temp = values[i];
        tempfreq = 0;
        for (j = 1; j < Values_size; j++)
        {
            if (temp == values[j])
            tempfreq++;
        }
        if(tempfreq > frequency)
        {
            most_common = temp;
            frequency = tempfreq;
        }
    }

    printf("%d", most_common);
}


