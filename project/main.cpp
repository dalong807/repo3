#include <iostream>
#include<string>
#include<iostream>
#include"workerManager.h"
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
using namespace std;

int main() {
//    Worker * worker=NULL;
//    worker=new Emplyee(1,"张三",1);
//            worker->showInfo();
//    delete worker;
//    worker = new Manager(2,"李四",2);
//            worker->showInfo();
//    delete worker;
//    worker = new Boss(3,"王五",3);
//    worker->showInfo();
//    delete worker;
    WorkerManager wm;
    int choice;
    while (true)
    {
        wm.Show_Menu();
        cout<<"请输入您的选择"<<endl;
        cin>>choice;
        switch (choice) {
            case 0://退出系统
                wm.ExitSystem();
                break;
            case 1://增加职工
            wm.Add_Emp();
                break;
            case 2://显示职工
            wm.show_Emp();
                break;
            case 3://删除职工
            wm.Del_Emp();
                break;
            case 4://修改职工
            wm.Mod_Emp();
                break;
            case 5://查找职工
            wm.Find_Emp();
                break;
            case 6://排序职工
            wm.Sort_Emp();
                break;
            case 7://清空职工
            wm.Clean_File();
                break;
            default:
                system("cls");


        }
    }
    system("pause");
    return 0;
}
