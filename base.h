#include <iostream>

#include <conio.h>
using namespace std;
class  base
{
  public:
  base()
  {
    this->val=0;
  }
  base(int val)
  {
    this->val=val;
  }

  base(base& clone)
  {
    this->val=clone.val;
  }

  int getval()
  {
    return  this->val;
  }

  void setval(int v)
  {
    this->val=v;
  }







  private:
  int val;

};
