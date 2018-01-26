#include <stdio.h>

void array_rand(int *list, int count)
{
	int i = 0;
	
	srand( time(NULL) );
	while(--count > 0)
 	{
	 	*(list + i) = rand() % 101; 
	 	i++;
    }

}
void array_inp(int *list, int count)
{
	int i = 0;
	
	while(--count > 0)
	{
		printf("%d ", *(list+i));
		i++;	
	}
	
}
int main(int argc, char *argv[])
{
	int mang[15]={};
	array_rand(mang,16);
	array_inp(mang,16);
	getchar();
	return 0;
}
