#include <iostream>
#include <stack>
#include <string>
// string의 getline 이용 (line단위로 문장을 get)
using namespace std;

int main()
{
    while (true)
    {
        string input;
        stack<char> ss;
        getline(cin, input); // 문장을 받아서 input에 저장

        if (input == ".")
        {
            break; // 종료
        }
        else
        {
            for (int i = 0; i < input.length(); i++)
            {
                if (input[i] == '{' || input[i] == '(')
                {
                    ss.push(input[i]);
                }
                else if (input[i] = '}')
                {
                }
                else if (input[i] = ')')
                {
                }
            }
        }
    }
}
}