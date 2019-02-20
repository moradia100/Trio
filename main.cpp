//File: Trio
//This will get 3 values from user input and print to std::out the same numbers in decending order

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

//Function to look at the values and swap the numbers as neccessary to 
//get the values in descending order
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}
//Function to swap 2 given numbers 
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
