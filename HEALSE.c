#include <stdio.h>

int main(void) {
	// your code goes here
	int h;
	scanf("%d",&h);
	if(h<8)
	{
	    printf("LESS");
	}
	else if(h==8)
    {
        printf("PERFECT");
    }
    else
    {
        printf("MORE");
    }

}

