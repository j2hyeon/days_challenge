// 정렬sort
#include <iostream>
#include <vector>

using namespace std;

/* 선택 정렬 O(n^2)
: 정렬 되지 않은 데이터들에 대해 가장 작은 데이터를 찾아
    가장 앞의 데이터와 교환해나아가는 방식
:1~n 정렬 => 2~n 정렬 => .... => n-1 ~ n 정렬*/
void selectionSort(vector<int> &arr)
{
    int small; // 가장 작은 원소의 idx (0->1-> ... -> n-1)
    for (int i = 0; i < arr.size(); i++)
    {
        small = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }
}

/* 삽입 정렬 O(n^2)
: 정렬되지 않은 임의의 데이터를 이미 정렬된 부분의 적절한 위치에 삽입해가며 정렬
: i(>=2)번째 데이터와 그 앞의 데이터들을 비교해가면서 i++
*/
void insertSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

/* 버블 정렬 O(n^2)
: 이웃한 데이터들을 비교하며 가장 큰 데이터를 가장 뒤로 보내며 정렬하는 방식
*/
void bubbleSort(vector<int> &arr)
{

    for (int j = 0; j < arr.size() - 1; j++) // 가장 작은 숫자가 마지막 idx에 존재한다가정하면 update과정을 최소 arr.size()-1번 반복해야함
    {
        for (int i = 0; i < arr.size() - 1; i++) // i+1과 비교해줘야하므로 (arr.size()-1)번 까지 반복
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    // 입력
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 계산
    // selectionSort(arr);
    // insertSort(arr);
    bubbleSort(arr);

    // 출력
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}