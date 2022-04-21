/**
 * @file helloworld.cpp
 * @author Zhou xiaowei (rainfeng@163.com)
 * @brief
 * @version 0.1
 * @date 2022-03-11 10::52:19
 *
 * @copyright Copyright AChen Studio (c) 2022
 *
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @brief
 *
 * @return int
 */
int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
