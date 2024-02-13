#include<iostream>
#include<time.h>
using namespace std;


int main(){
	
	int rnum, num;
	srand(time(0));
	
	rnum = (rand() % 500) + 1 ;
	
	cout<<"Welcome to the Random Number Guesser where you have to guess a number between 1 and 500!"<<
	" My code will tell you if your guess is too high or too low until you guess the right number. "<<
	"\n\n\t\t\t\t\t\tGood Luck!\n \n \n";
	
	cout<<"Enter your guess: ";
	cin>>num;
	
	int i =1;
		
	while(rnum != num){
		
		if(num > 500){
			cout<<"Your guess is out of range!"<<endl;
		}
		
		else if(num < rnum){
			cout<<i<<". Your guess is too low!"<<endl;
			
		}
		
		else if(num > rnum){
			
			cout<<i<<". Your guess is too high!"<<endl;
			
		}
		
		
	cout<<"Enter your guess: ";
	cin>>num;
	i++;
	}
	

	cout<<"\n\nYour Guess is correct!\n\n\t\t\t\t\tThe number was : "<<rnum;


	return 0;
	
}