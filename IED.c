#include <stdio.h>

int main(void) {
	int x,y,z,a,b,c;
	scanf("%d %d %d",&x,&y,&z);
	b=(x*z);
	c=(y*z);
	if(b>c){
	    printf("%d",b);
	}
	else if(c>b)
	{
	    printf("%d",c);
	}

}

