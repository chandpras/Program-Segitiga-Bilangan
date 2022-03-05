#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if(x <= 9 && x >= 1)
	{
    for(x; x > 0; x--)
    {
    	for(int y = 0; y < x; y++)
		{
    		cout << x << " ";
		}
		cout << endl;
    }
}else
{
	cout << "Bilangan tidak sesuai!";
} 
    return 0;
}
