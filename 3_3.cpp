// 3_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    int deg, min, sec;
    float sum;
    const float m2d(1.0 / 60), s2m(1.0 / 60);     //m2d : minutes to degree ;  s2m : seconds to minutes
    //pay attention to 1.0 instead of 1!!!
 
    cout << "Enter a latitude in degrees,minutes,and seconds:\n";
    cout << "First,enter the degrees: ";
    cin >> deg;
    cout << "Next,enter the minutes of arc: ";
    cin >> min;
    cout << "Finally,enter the seconds of arc: ";
    cin >> sec;
   
    sum = deg + min * m2d + sec * s2m * m2d;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << sum << " degrees";
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
