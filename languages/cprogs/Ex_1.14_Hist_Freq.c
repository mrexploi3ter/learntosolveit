#include<stdio.h>
int main(){
	char c;
	int array[256];
	for(int i=0;(i++)<=255;array[i-1]=0){;}
	while((c=getchar())!=EOF){
		if(c!=' ' && c != '\n'){
		++array[c];
	}
	}
	for(int i=0;i<=255;i++){
		if(array[i]!=0){
			printf("%c-%d\n",i,array[i]);
		}
	}
	}

