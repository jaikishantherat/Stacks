/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

const int SIZE=5;
int top=-1;
int X[SIZE];

    
bool nothing() //retuns a boolean value which is true if the stack is empty or else it would be empty.
{
  if(top==-1)
  return true;
  else
  return false;
}

void create_stack() //Creates a new stack/Deletes everything in the stack.
 {
        if(nothing())
{
  cout<<"Stack is empty!\n";
}
       else
       {
        for(int i = 0; i < SIZE; i++)
        {
        top --;
        
        }
        cout<<"Stack is empty!\n";
       }
 
 }

void push(int value) //Adds or pushes in new numbers into the stack or to the top.
{
  if(top==SIZE-1)
  {    cout<<"Stack is full!\n";
  }
   else
  {
    top++;
    X[top]=value;
  }
}


void pop() //Removes or Pops the top number in the stack.
{
 if(nothing())
 {
  cout<<"Stack is empty!\n";
 }
 else
 {
  top--;
 }
}



void Display_top() //Displays the top number of the stack.
{
 if(nothing())
 {
  cout<<"Stack is empty!\n";
 }
 else
  cout<<"Element at top is: "<<X[top]<<"\n";

}

void displayStack() //Displays the entire stack.
{
  if(nothing())
 {
    cout<<"Stack is empty!\n";
 }
 else
 {
  for(int i=0 ; i<=top; i++)
    cout<<X[i]<<" ";
   cout<<"\n";

  }

}


int main()
{
   //declaration block
   int user_choice, value, leave=1;
   
  while( leave == 1)
     { 
   cout<<"\n chose one of the following \n1.CREATE STACK \n2.PUSH\n3.POP\n4.SHOW TOP\n5.DISPLAY STACK\n6.PURGE STACK\n7.EXIT\n";
   cin>>user_choice; 
   switch (user_choice)
   {
   case 1:create_stack();
          break;
       
       
   case 2: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
         
   case 3: 
       {
           pop();
           cout<< "The value popped = "<<X[top+1]<<" at index = " << top+1 <<"\n";
       }
        break;
        
   case 4: Display_top();
        break;
    
   case 5: displayStack();
        break;
        
    case 6:create_stack();
          break;

   case 7: leave=0;
        break;
        
    }
 } 
    return 0;
}
