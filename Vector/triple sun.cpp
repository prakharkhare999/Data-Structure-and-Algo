#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 3, 4, 5, 6,3};
    int sum = 10;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j]+arr[k] == sum)
                {
                    cout << arr[i] << "," << arr[j] <<","<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}