#include <stdio.h>

int dec2binarr(int n,int *a)
{	
	int i=0,j,k;

	while(n!=0){
		a[i++]=n%2;
		n=n/2;
	}
	for(j=0;j<i/2;j++){
		k = a[i-j-1] ;
		a[i-j-1]= a[j];
		a[j] = k;
	}
	return i;
}

int binarr2dec(int *a,int len)
{	
	int i,n=0,k;
	for(i=0;i<len;i++){
		if(a[i] == 1){
			k=1;
			n += k<<(len-i-1);
		}
	}
	return n;
}

int main()
{
	int a,arr[50],len;

	a = 17;

	len = dec2binarr(a,arr);

	a = binarr2dec(arr,len);

	return 0;
}