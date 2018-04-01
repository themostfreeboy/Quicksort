#include <stdio.h>
#include <stdlib.h>

void quicksort(int data[], int first, int last)//ÉıĞò¿ìÅÅ
{
	if(first>=last)    return;
	int key=data[first];
	int i=first;
	int j=last;
	while(i<j)
	{
		while(i<j && data[j]>=key)
		{
			j--;
		}
		data[i]=data[j];
		while(i<j && data[i]<=key)
		{
			i++;
		}
		data[j]=data[i];
	}
	data[i]=key;
	quicksort(data, first, i-1);
	quicksort(data, i+1, last);
}

int main()
{
	int test[10];
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			scanf("%d",&test[i]);
		}
		quicksort(test,0,9);
		for(int i=0;i<10;i++)
		{
			printf("%d\t",test[i]);
		}
		printf("\n");
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}