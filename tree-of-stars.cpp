//Program creates Christmas tree from stars
#include <iostream>
using namespace std;
int main()
{	
   int  r, stars=1;
   cout<<"Enter rows: ";
   cin>>r;
   for (int x=r; x>0; x--) 
	{
		for(int i=(x-1); i>0; i--) /* for rows*/
		  cout<<" ";
		for(int y=0; y<stars; y++) /*for stars*/
		  cout<<"* ";
		stars+=1;
		  cout<<"\n";
    }
   system("PAUSE");
   return 0;
} 
