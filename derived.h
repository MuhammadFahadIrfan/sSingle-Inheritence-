#include <iostream>
#include "base.h"
#include <conio.h>
using namespace std;
class derived:public base

{
  public:
  void display()
  {
    cout<<"CUBE OF"<<this->val<<"is"<<this->val*this->val*this->val<<endl;
  };
  private:
  int val;
};