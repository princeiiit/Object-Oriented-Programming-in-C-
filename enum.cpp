#include<iostream>
using namespace std;
enum{
	circle,square,triangle
};
int main()
{
	int code;
	cout<<"enter shape code: ";
	cin>>code;
	while(code>=circle && code<=triangle)
	{
		switch(code){
			case circle:
				cout<<"you hit the code of circle :-) \n";
				break;
				case square:
				cout<<"you hit the code of square :-) \n";	
				break;
				case triangle:
					cout<<"you hit the code of triangle :-) \n";
				break;
		}
			cout<<"enter shape code: ";
	cin>>code;
	}
	cout<<"\nbye\n";
return 0;}
