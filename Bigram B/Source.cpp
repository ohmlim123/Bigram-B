#include<stdio.h>
int main()
{
	int N[100000] = {};
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	for (int i = 0;1;i++)
	{
		scanf_s("%d", &N[i]);
		a++;
		if (N[i] > 1)
		{
			break;
		}
	}

	for (int i = 0;i < a;i++)
	{
		if (N[i] == 0 && N[i + 1] == 0)
		{
			b++;
		}
		if (N[i] == 0 && N[i + 1] == 1)
		{
			c++;
		}
		if (N[i] == 1 && N[i + 1] == 0)
		{
			d++;
		}
		if (N[i] == 1 && N[i + 1] == 1)
		{
			e++;
		}

	}

	printf("\n%d", b);

	printf("\n%d", c);

	printf("\n%d", d);

	printf("\n%d", e);




	return 0;
}