#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand (time(0));
	int secret_number=rand()%100+1;
	int guess;
	int attempts=0;
	cout<<"\n Welcome to the Number GUESSING GAME!";
	cout<<"\n Guess the number between 1 to 100";
	
	do{
		cout<<"\n Enter your guessed number: ";
		cin>>guess;
		attempts++;
	if (guess==secret_number){
	cout << "Congratulations! You won the game in " << attempts << " attempts" <<endl;
}
else if(guess>secret_number){
	cout<<"guessed number is too high!";
}
else if (guess < secret_number){
	cout<<"guesses number is too low!";
}
}
while (guess!= secret_number);
return 0;
}
