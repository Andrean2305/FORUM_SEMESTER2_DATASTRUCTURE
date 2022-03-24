#include<iostream>
using namespace std;

//tower of HANOI function implementation
void TOH(int n,char t1, char t2,char t3)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<t1<<" to "<<t3<<endl;
		return;
	}
	
	TOH(n-1,t1,t3,t2);
	cout<<"Move Disk "<<n<<" from "<<t1<<" to "<<t3<<endl;
	TOH(n-1,t2,t1,t3);
}

//main program
int main()
{ 
	int n;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
	return 0;
}