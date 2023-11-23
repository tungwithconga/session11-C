#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, temp, choice, j,key;
	printf("nhap so luong phan tu:");
	scanf("%d",&n);
	int numbers[n];
	for(i=0;i<n;i++){
		printf("numbers[%d]=", i);
		scanf("%d", &numbers[i]);
	}
	do{
	printf("menu\n");
	printf("1. in ra cac phan tu\n");
	printf("2.  Su dung Insertion Sort sap xep mang giam dan và in ra\n");
	printf("3.  Su dung Selection Sort sap xep mang tang dan và in ra\n");
	printf("4.  Su dung Bubble Sort sap xep mang giam dan và in ra\n");
	printf("5.  thoat\n");
	printf("nhap lua chon cua ban:");
	scanf("%d", &choice);
		switch(choice){
			case 1: 
				for(i=0;i<n;i++){
					printf("numbers[%d]=%d\t", i, numbers[i]);
				}
				break;
			case 2:
				for (int i=1;i<n;i++){
    				key=numbers[i];
    				j = i-1;
			    	while(j>=0 && key>numbers[j]){ 
			     		numbers [j+1] = numbers[j]; 
			      		j-=1;
			    	}
			    	numbers [j+1] = key;
			 	}
				printf("Mang sau khi da sap xep giam dan:\n"); 
				for (int i=0;i<n;i++) {
				    printf("%d\t", numbers[i]);
				}
				break;
			case 3:
				for (i=0;i<n-1;i++){
				    for(j=i+1;j<n;j++){
				      if (numbers[i]<numbers[j]){
				        temp = numbers[i]; 
				        numbers[i] = numbers[j]; 
				        numbers[j] = temp;
				      }
				    }
				  }
				printf("Mang sau khi da sap xep tang dan:\n"); 
				for (int i=0;i<n;i++) {
					printf("%d\t",numbers[i]);
				}
			    break;
			case 4:
				for (i=0;i<n-1;i++){
				    for(j=0;j<n-i-1;j++){
				      if (numbers[j]<numbers[j+1]){
				        temp = numbers[j];
				        numbers[j] = numbers [j+1]; 
				        numbers[j+1] = temp;
				      }
				    }
				  }
				printf("Mang sau khi da sap xep hiam dan:\n"); 
				for (i=0;i<n;i++) {
					printf("%d\t",numbers[i]);
				}
			    break;
			case 5:
				exit(0);
			default:
    			 printf("Vui long chon tu 1-5\n");		
		}
	}while (choice!=4);
}


