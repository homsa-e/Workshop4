#include <iostream>

int custom_strlen (const char string[])
{
  int i = 0;
  while (string[i] != 0)
      i++;
  return i;
}

int main()
{
    std::cout << custom_strlen ("Hello World") << std::endl;
    return 0;
}
