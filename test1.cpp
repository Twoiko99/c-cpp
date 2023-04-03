#include<iostream>
#include <cstdlib>
using namespace std;

 void swap(int *p1, int *p2){
   int buf;
   buf=*p1;
   *p1=*p2;
   *p2=buf;

}


int max(int arr[2][20])
{ int a;
   int o=0;
   int l=0;
   a=arr[0][0];
    for(int i=0;i<40;i++)
     {
       if(a<arr[o][l])
	   {
	   	a=arr[o][l];
	   }
	   if(l==19)
	   {
	   	l=-1;
	   	o=1;
	   }
	   l+=1;
	   
  	
     }
     
     return a;
	
}










int min(int arr[2][20])
{ int a;
   int o=0;
   int l=0;
   a=arr[0][0];
    for(int i=0;i<40;i++)
     {
       if(a>arr[o][l])
	   {
	   	a=arr[o][l];
	   }
	   if(l==19)
	   {
	   	l=-1;
	   	o=1;
	   }
	   l+=1;
	   
  	
     }
     
     return a;
	
}
















int main()
{  //cout<<rand()<<"JARANDOMNOJE CHESLO";-Windows ne zahotel sozdavatj randomnoje chislo 
   int o =0;
   int mas[2][20]={{1,22,23,24,52,726,797,98,879,107,711,2312,1334,154,145,166,153467,13458,12139,24540},{1,21,341,454,513,631,47,248,9,10,113,152,135,14,3515,316,3517,18,134539,2034}};
   
   int mas2[40];
   int col=0;
   int el=0;
   cout<<max(mas)<<"-MAX"<<endl;
   cout<<min(mas)<<"-MIN"<<endl;
   
   
   /*for(int dp=0;dp<40;dp++)
   { 
     
	 mas2[dp]=mas[col][el];
	 el+=1;
	 
   	
   }
   
/*for(int sk;sk<40;sk++)
{
	cout<<mas2[sk]<<", ";
}
cout<<endl;

for(int i=0;i<40;i++)
{
	for(int j=1+i;j<40;j++)
	{
		if (mas2[i]>mas2[j])
		{
			swap(&mas2[i],&mas2[j]);
		}
	}
}*/   
   
  
  
/*  for(int ska=0;ska<40;ska++)
{
	cout<<mas2[ska]<<" ";
}
cout<<endl; 


int qd=0;
    int zb=0;*/
    
    
    
for(int i=0;i<20;i++)
{for(int j =i+1;j<20;j++)
 {
   if(mas[0][i]>mas[0][j])
   {
   	 swap(&mas[0][i],&mas[0][j]);
   }
   if(mas[1][i]>mas[1][j])
   {
   	 swap(&mas[1][i],&mas[1][j]);
   }  
 }
	
}





int b=0;





for(int i=o;i<40;i++)
{for(int j=0;j<20;j++)
{
	for(int k=0;k<40;k++)
	{ 
	  if(mas[0][k]>mas[1][j])
	  {
		  swap(&mas[0][k],&mas[1][j]);
	  }
	 
		
	}
}
	
}






/*for(int wa=0;wa<40;wa++)
 { 
    
 	mas[qd][zb]=mas2[wa];
 	//cout<<mas[qd][zb]<<"-mas "<<qd<<":"<<zb <<endl;
 	if (zb==19)
	 { zb=-1;
	   qd=1;
	 	
	 }
	 zb+=1;
 } */
   
   
   
   
   
   
   
   
   
   
   
   
   
 for(int l=0;l<20;l++)
   {
   	cout<<mas[o][l]<<" ";
   	if ((l==19)&&(o!=1))
	   {
	    l=-1;
	    o=1;
	   	
	   }
   	
   }
   cout<<endl;
   
   
  
  


















































   /*for(int q=0;q<20;q++)
   { for(int j=q+1;j<20;j++)
   {   if (mas[0][q]>mas[0][j])
       { 
          swap(&mas[0][q],&mas[0][j]);
       }
       
       
       if (mas[1][q]>mas[1][j])
       { 
          swap(&mas[1][q],&mas[1][j]);
       }
       
       
     
   	
    }
}
   	
    
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   o=0;
   
   
   
   
   for(int k=0;k<20;k++)
   {
   	cout<<mas[o][k]<<" ";
   	if ((k==19)&&(o!=1))
	   {
	    k=-1;
	    o=1;
	   	
	   }
   	
   }*/
   
   
	
	return 0;
	
}

