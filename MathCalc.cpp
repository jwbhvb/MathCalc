//Programmer: John Bagsby
//Date: 10/4/14
//File: MathCalc.cpp
//Description: "Calculates various math functions."

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/*----------PROTOTYPES----------*/

//Description: Prints the welcome message to the user.
//Pre: None.
//Post: Just a lovely welcome message.
//Return: None.

void welcomeMessage();

//Description: Calculates the factors of a number.
//Pre: Number passed must be positive.
//Post: Factors will be printed off.
//Return: None.

void factorize(int n);

//Description: Calculates the quotient of a polynomial divided by a divisor.
//Pre: Number passed must be positive.
//Post: Quotient will be printed off.
//Return: None.

void sytheticDivide(int size);

//Description: Shows the menu of math functions to select.
//Pre: None.
//Post: The menu will be printed off.
//Return: None.

void displayMenu();

//Description: Prints the farewell message and pauses the system.
//Pre: Must be a Windows system for pause.
//Post: My gratitude will be printed off.
//Return: None.

void signOff();

//Description: Get the input of the user.
//Pre: None.
//Post: The user's input is passed back .
//Return: Returns an int value.

int getMenuChoice();

/*----------VARIABLES-----------*/
const string FUNC_1 = "Factorize";
const string FUNC_2 = "Sythetic Divide";

int main()
{
  int menuChoice = 0;
  int num; //User input
  welcomeMessage();
  
  while(menuChoice!=3)
  {
    displayMenu();
    menuChoice = getMenuChoice();
    
    switch(menuChoice)
    {
      case 1:
        cout<<"Enter a number to factorize : ";
        cin>>num;
        factorize(num);
        break;

      case 2:
        cout<<"Enter the highest exponent of the polynomial : ";
        cin>>num;
        sytheticDivide(num);
        break;

      default:
        break;
    }
  }
  signOff();
  return 0;
}

void welcomeMessage()
{
  cout<<"Welcome to Math Helper.\nBy: John Bagsby"<<endl<<endl;
  return;
}

void displayMenu()
{
  cout<<"_____________________"<<endl
      <<"1. "<<FUNC_1<<endl
      <<"2. "<<FUNC_2<<endl
      <<"3. Quit"<<endl
      <<"_____________________"<<endl<<endl;
  return;
}

int getMenuChoice()
{
  int output = 0;
  while(output!=1&&output!=2&&output!=3)
  {
    cout<<"Enter a valid choice : ";
    cin>>output;
  }
  return output;
}

void signOff()
{
  cout<<"Thanks for using my Math Helper."<<endl;
  system("pause");
  return;
}

void factorize(int n)
{
  cout<<"The factors for "<<n<<"."<<endl;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      cout<<i<<" and "<<n/i<<endl;
    }
  }
  return;
}

void sytheticDivide(int size) //Only stores the coefficients to the array right now.
{
  int num;
  int polyCoefficients[size];
  for(int i=size;i>=0;i--)
  {
    if(i==0)
    {
      cout<<"Enter the constant : ";
      cin>>num;
      polyCoefficients[i]=num;
    }else if(i==1)
    {
      cout<<"Enter the coefficient of the x term : ";
      cin>>num;
      polyCoefficients[i]=num;
    }
    else
    {
      cout<<"Enter the coefficient of the x^"<<i<<" term : ";
      cin>>num;
      polyCoefficients[i]=num;
    }
  }
  return;
}