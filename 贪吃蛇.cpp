#include<stdio.h>
#define size 10000
int main(){
	int melength,n,otherlength;
	int jewel=1;
	int snake[size];
	
	scanf("%d\n",&melength);
	scanf("%d\n",&n);
	
	for(int i = 0;i<n;i++){
		scanf("%d",&otherlength);
		snake[i] = otherlength;
	}
	for(int j=0;j<n;j++){
		if(melength>snake[j]){
			jewel += 1; 
		}
	}printf("%d\n",jewel);
}
