#include "student.h"
#include <string>
void student::setName(std::string firstname, std::string lastname) 
{
  first = firstname;
  last = lastname;
}
std::string student::fullName()

{
  std::string str = "";
  str.append(first).append(" ").append(last);
    return str;
}

