#include <stdio.h>

int main() 
{
    int i,j;
    int partitions[] = {300, 600, 350, 200, 750, 125};
    int num_partitions = sizeof(partitions) / sizeof(int);
    int processes[] = {115, 500, 358, 200, 375};
    int num_processes = sizeof(processes) / sizeof(int);

    int status[num_partitions];
    for (int i = 0; i < num_partitions; i++) 
    for (i = 0; i < num_partitions; i++) 
	{
        status[i] = 0;
    }
    for (int i = 0; i < num_processes; i++) 
    for (i = 0; i < num_processes; i++) 
	{
        int j;
        for (j = 0; j < num_partitions; j++) 
		{
            if (status[j] == 0 && partitions[j] >= processes[i]) 


