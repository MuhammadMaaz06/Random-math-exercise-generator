//muhammadmaaz_i253066_assignment_02

#include<iostream>
#include<cstdlib>
#include<ctime>
//solving a math exercise 
using namespace std;
int main() {
	cout<< " ---  MATH EXERCISE  ---" <<endl;
	char operation;
	int maxvalue;
	int n1, n2;
	double answer, correct;
	bool flag=false;
	
    //starting the loop with the false condition
    while(operation!=('*'|| '-'||'+'||'/')) {
	
	
		cout<< " Enter the operation you want to perform :"<< endl;
		cin>> operation;

		//first condition of the operation
		if(operation!='+'|| operation!='-'|| operation!='*'|| operation!='/') 
		{
			cout<< " enter a valid operant!"<< endl;
break;
		}}
		//second condition
		cout<< " What is the maximum value for the input values of the exercise?: " << endl;
		cin>>  maxvalue;

		//third condition
		char negative;
		cout<<"Are negative numbers allowed?:" << endl;
		cin>> negative;

		srand(time(0));

		// if the negative numbers are allowed then making the range to negative max as well
		if(negative=='y'||negative=='Y') {
			n1= ((rand()%maxvalue) - maxvalue)+1;
			n2= ((rand()%maxvalue) - maxvalue)+1;

		//if negative numbers are not allowed then restricting them to positive numbers only
			if ((negative=='n'|| negative=='N')&& operation=='-') {
				n1= ((rand()%maxvalue)+1);
				n2= ((rand()%maxvalue)+1);
				n1>n2;
			}
			
		//condition for getting correct output when 0 is generated
			if((n1=='0'|| n2 == '0' )&& operation=='*') {
				correct = 0;
			}
		//condition for having a positive answer when both of the numbers are negative	
			if(negative=='y'&& (operation=='*'|| operation=='/')) {
				correct=answer;
			}
		//condition for getting the output for the infinite numbers which are actually not possible
			if(n2=='0'&& operation=='/') {
				cout<< " infinite number!" << endl;
			}
		}

		cout<< " solve the following exercise:" << endl<< endl;
		cout<< " "<< n1 << " "<< operation << " " << n2 << " ="<< endl;
		cin>> answer;
	//switching each of the operand cases
	
		switch(operation) {
			case '+':
				correct= n1+ n2;
				break;

			case '-':
				correct= n1-n2;
				break;

			case '*':
				correct= n1*n2;
				break;

			case '/':
				correct= n1/n2;
				break;

			default:

				cout<< "inavlid input!"<< endl;
				break;
		}
	//last condition of printing a message for the user whether his answer is correct are not	
		if(answer==correct) {
			cout<<" correct answer!"<< endl;
		} else {
			cout<< "wrong answer!"<<endl<< "the correct answer was:"<< correct <<  endl;

		}




	return 0;
}
