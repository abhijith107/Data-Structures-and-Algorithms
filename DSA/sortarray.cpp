#include <iostream.h>
using namespace std;

int main()
{
int num;
cout<<"Enter the number of houses:";
cin>>num;
int house_number[num];
int position[num];
cout<<"Enter the house number and position of the house: "<< endl;
for(int i =0; i<num; i++)
{
cin>>house_number[i]; 
cin>>position[i]; 
}
cout<<"Input: "<<endl;
for(int i=0; i<num; i++)
{
cout<<"["<<house_number[i]<<","<<position[i]<<"] ";
}
cout<<endl;
int dupli_position[num];
for(int i=0; i<num; i++)
{
dupli_position[i] = position[i]; 
}
sort(dupli_position, dupli_position+num); 
int temp;
int x1, x2;
int position1, position2;
int maxi =0;
for(int i=0; i<num-1; i++)
{
int temp = abs(dupli_position[i+1]-dupli_position[i]); 
if(temp > maxi)
{
maxi = temp; 
x1 = dupli_position[i]; 
x2 = dupli_position[i+1];
}
}
for(int i=0; i<num; i++)
{
if(x1 == position[i])
{
position1 = i;
}
else if (x2 == position[i])
{
position2 = i;
}
}
if(house_number[position1]>house_number[position2]) 
{
cout<<"Result: "<<"["<<house_number[position2]<<","<<house_number[position1]<<"]";
}
else
{
cout<<"Result: "<<"["<<house_number[position1]<<","<<house_number[position2]<<"] ";
}
return 0;
}

