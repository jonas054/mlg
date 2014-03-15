#include <iostream>
#include "regexp.hpp"

bool Regexp::matches(const std::string& s) const
{
  std::cerr << m_str << std::endl;
  return s.find(m_str) != std::string::npos;
}
