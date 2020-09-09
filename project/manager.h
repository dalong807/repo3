//
// Created by 1 on 2020/9/7.
//
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class Manager:public Worker{
public:
Manager(int id,string name,int dId);
virtual void showInfo();
virtual string getDeptName();
};

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#endif //PROJECT_MANAGER_H
