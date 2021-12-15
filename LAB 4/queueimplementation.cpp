#include <iostream>
using namespace std;
int queue[100], n = 100, f = - 1, r = - 1;
void enqueue() 
{
   int val;
   if (r == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (f == - 1)
      f = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      r++;
      queue[r] = val;
   }
}
void dequeue() 
{
   if (f == - 1 || f > r) 
   {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[f] <<endl;
      f++;;
   }
}
void display() 
{
   if (f == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = f; i <= r; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: enqueue();
         break;
         case 2: dequeue();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}