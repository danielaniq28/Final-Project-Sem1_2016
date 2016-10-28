#include <iostream>
using namespace std;
 float price,order,total,discount;
char type;
int main (){
		cout<<"==============================================\n"<<"=                                            =\n"<<"=              SmartOrder Sys                =\n"<<"=         By [NIQ] [WAN] [NOQ] [MAN]         =\n"<<"=                                            =\n"<<"=        For Easy Smartphone Order!          =\n"<<"=                                            =\n"<<"==============================================\n";
	for (int x=1 ; x<=5 ; x++)
	{
	cout<<"\n\tNumber Of Order = " << x <<"\n\n";
	cout<<"==============================================\n"<<"\tEnter Type Of Smartphone\n"<<"\ts for sony, i for iPhone :\n";
	cin>>type;
	if ((type =='s')||(type == 'S'))
		{
		cout<<"\nNumber of Xperia XR order :\n";
		cin>>order;
		cout<<"\nInput Price of Xperia XR (in RM) :\n";
		cin>>price;
		total=price*order;
		cout<<"\nDiscount 30% for Sony Smartphones\n";
		discount=total*0.03;
		cout<<discount;
		cout<<"\n==============================================\n\n";
		cout<<"\tOrder Form : "<<x<<"\n\tNumber Of Order : "<<order<<"\n\tPrices Of Smartphones : "<<price<<"\n\tTotal Discounted Price :"<<discount<<"\n\n==============================================\n"<<"\n\n\n";
		}
			else
			{
			cout<<"\nNumber of iPhone's order :\n";
			cin>>order;
			cout<<"\nInput Price of iPhone's (in RM) :\n";
			cin>>price;
			total=price*order;
			cout<<"\nDiscount 10% for Apple's Smartphones\n";
			discount=(0.1)*total;
			cout<<discount;
			cout<<"\n==============================================\n\n";
			}
	}
}
