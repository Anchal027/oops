//create a program that allows a user to do the following:1) Create a bank account by supplying a user id and password.2) Login using their id and password.3) Quit the program.
//Now if login was successful the user will be able to do the following:1) Withdraw money.2) Deposit money.3) Request balance.4)Quit the program
#include<iostream>
#include<cstdlib>
using namespace std;
class ATM{
	private:
	int pin;
	int password=123;
	int count = 0;
	int entry;
	double deposit= 0.0;
	double balance=0.0;
	double withdraw=0.0;
	bool isTrue= true;
	public:
		void getdata(){
		do{
	cout<<"___**WELCOME TO YOUR ATM**___\n";
	cout<<"Enter your pin: \n";
	cin>>pin;
	if (pin == password)
	{
		do{
			cout<<"___**WELCOME TO YOUR ATM**___\n";
		cout<<"1) Withdraw money\n ";
 		cout<<"2) Deposit money\n" ;
		cout<<"3) Request balance\n";
		cout<<"4)Quit the program\n ";
		cout<<"Choose an option: \n";
		cin>> entry;	
	switch (entry){
		case 1:
			if(balance<=0)
			{
			cout<<"Please Deposit some money\n ";
		}
		else{
			cout<<"Withdraw Money:\n";
			cin>>withdraw;
			balance=balance-withdraw;
			if(balance<deposit){
				cout<<"Sorry!you Don't Have Money\n ";
			}
		}
			break;
		case 2:
			cout<<"Deposit money:\n ";
			cin>>deposit;
			balance=balance+deposit;
			break;
		case 3:
			cout<<"Request balance: \n"<<balance<<endl;					
			break;
		case 4:
			cout<<"HAVE A NICE DAY!!\n ";
			isTrue=false;
			break;
	}
		}while(isTrue != false);
	
	}
	else{
	count++;
	if (count==3)
		isTrue= false;
	else
		cout<<"WRONG PIN!!\n";
}
	}while (isTrue != false);
}
};
int main(){
ATM obj;
obj.getdata();	
	

	return 0;
}
