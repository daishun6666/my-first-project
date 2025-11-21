#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    cout << "程序开始运行..." << endl;
    
    // 检查是否有阻塞操作
    for(int i = 5; i > 0; i--) {
        cout << "倒计时: " << i << endl;
        Sleep(1000); // Windows下的延时
    }
    
    cout << "程序结束，按任意键退出..." << endl;
    system("pause > nul");
    return 0;
}
