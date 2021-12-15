#include<iostream>
using namespace std;
int main()
{
    int arr[50], n, i, j, k, elem, index;
    cout<<"Enter the size for array: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=1; i<n; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
        {
            continue;
        }
        arr[index] = elem;
    }
    cout<<"\nThe sorted array is :\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}