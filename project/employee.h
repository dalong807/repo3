#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class Emplyee: public Worker{
public:
    Emplyee(int id,string name,int dId);
    virtual void showInfo();
    virtual string getDeptName();
};//
// Created by 1 on 2020/9/7.
//

#ifndef PROJECT_EMPLOYEE_H
#define PROJECT_EMPLOYEE_H

#endif //PROJECT_EMPLOYEE_H
