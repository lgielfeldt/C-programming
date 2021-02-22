
#include<stdio.h>

// int a[3][3];

int main()
{   // have to initialize it - you can do it directly here or read each number from the keyboard
	int a[3][3];
	int i,j; // You will need them
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Read the content of the 3x3 arraby:\n");
			for (i=0;i<3;i++)
				for (j=0;j<3;j++)
				scanf("%d",&a[i][j]);

	printf("\nThe address of the array:\n");
		for (i=0;i<3;i++)
			for (j=0;j<3;j++)
				{   if (j==2) printf("0X%x\n",&a[i][j]);
					else printf("0x%x ",&a[i][j]);
				}

	printf("\nThe content of the array:\n");
		for (i=0;i<3;i++)
			for (j=0;j<3;j++)
				{   if (j==2) printf("%d\n",a[i][j]);
					else printf("%d ",a[i][j]);
				}

	return 0;
}



