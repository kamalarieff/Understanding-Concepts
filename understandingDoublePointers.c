#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char** test;
	char** testArray[2];
	char* name;
	char* name1;
	name = "kamal";
	name1 = "arieff";
	
	test = &name;
	
	testArray[0] = &name;
	testArray[1] = &name1;
	
	printf("test = %s\n",*test);
	printf("testArray[0] = %s\n",*testArray[0]);
	printf("testArray[1] = %s\n",*testArray[1]);
	
	return 0;
}
