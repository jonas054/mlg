#include <string>

class Regexp
{
public:
  Regexp(const char* s): m_str(s) {}

  bool matches(const std::string& s) const;

private:
  const std::string m_str;
};
