#include <iostream>
#include <fstream>
#include <string>
#include "regexp.hpp"

using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[])
{
  const Regexp regexp(argv[1]);
  for (int i = 2; i < argc; ++i)
  {
    const char* const fileName = argv[i];
    std::ifstream f(fileName);
    static string line;
    for (int lineNumber = 1; getline(f, line); ++lineNumber)
    {
      if (regexp.matches(line))
        cout << fileName << ':' << lineNumber << ':' << line << endl;
    }
  }
  return 0;
}
