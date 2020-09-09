//
// Created by 1 on 2020/9/7.
//
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class Boss:public Worker{
public:
    Boss(int id,string name,int dId);
    virtual void showInfo();
    virtual string getDeptName();
};
#ifndef PROJECT_BOSS_H
#define PROJECT_BOSS_H

#endif //PROJECT_BOSS_H
