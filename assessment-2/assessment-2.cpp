#include<iostream>
#include<string>
using namespace std;
int main()
{
	const double perhour= 18.50;
	const double perminutes = .40;
	const double CostOfDinner = 20.70;
	
	string wedding;
	string name;
	int guests,minutes;

	cout<<"\nEnter the name of event = ";
	getline(cin, wedding);
	cout<<"\nEnter the customer's first and last name = ";
	getline(cin, name);
	cout<<"\nEnter the number of guests = ";
	cin>>guests;
	cout<<"\nEnter the number of minutes in the event = ";
	cin>>minutes;
	
	cout<<"\n**********Event Management System**********";
	
	cout<<"\n\nEnter the name of event\n"<<wedding;
	cout<<"\nEnter the customer's first and last name\n"<<name;
	cout<<"\nEnter the number of guests\n"<<guests;
	cout<<"\nEnter the number of minutes in the event\n"<<minutes;
	
	cout<<"\n\n==========Event estimate for : " <<name<<"==========";
	int ser,deposit;
	
	cout<<"\nenter the number of server = ";
	cin>>ser;
	cout<<"\nenter the deposit =  ";
	cin>>deposit;
	cout<<"\nnumber of server = "<<ser;
	
	double cost1 = (minutes/60)*perhour;
	double cost2 = (minutes%60)*perminutes;
	double CostForOneServer = cost1+cost2;
	
	double TotalFoodCost = guests*CostOfDinner;
	double avragecost = TotalFoodCost/guests;
	double totalcost = TotalFoodCost+(CostForOneServer*ser);
	double DepositAmount = totalcost *.25;
		
	cout<<"\nThe cost for server = "<<CostForOneServer;
	cout<<"\nThe cost fof food is = "<<TotalFoodCost;
	cout<<"\navrage cost per person = "<<avragecost;
	
	cout<<"\n\nTotal cost is = "<<totalcost;
	cout<<"\nplease deposit a "<<deposit<<"% deposit to reserve the event";
	cout<<"\nThe deposit needed is = "<<DepositAmount;     	
	
	return 0;
}
