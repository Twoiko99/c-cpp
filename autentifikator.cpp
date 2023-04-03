#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	
	int i;
	char login[16],buf[16];
	puts("log");
	gets(login);
	//printf("%d",strlen(login));
	FILE * p1;
	p1=fopen("login.txt","rt");
	for(i=0;i<5;i++){
		fgets(buf,15,p1);
		//printf("%d-buf:%d-login\n",strlen(buf),strlen(login));
		int k=memcmp(login,buf,strlen(buf)-1);
	    //printf("%s:%d",buf,k);
	if(k==0){
		
			printf("%s,privet",login);
		break;
		
	}
	
}
	//fgets(buf,6,p1);
	//printf("%s",buf);	
	fclose(p1);
	
	
}
