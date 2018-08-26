#include <limits>
#include <map>
#include <set>
#include <string>
#include <vector>

#include <stdio.h>

std::string to_string(const int val) {
  const size_t len = 4 * sizeof(int);
  char tmp[len];
  snprintf(tmp, len, "%d", val);
  return tmp;
}

std::string to_string(const unsigned val) {
  const size_t len = 4 * sizeof(unsigned);
  char tmp[len];
  snprintf(tmp, len, "%u", val);
  return tmp;
}

std::string to_string(const long val) {
  const size_t len = 4 * sizeof(long);
  char tmp[len];
  snprintf(tmp, len, "%ld", val);
  return tmp;
}

std::string to_string(const unsigned long val) {
  const size_t len = 4 * sizeof(unsigned long);
  char tmp[len];
  snprintf(tmp, len, "%lu", val);
  return tmp;
}

std::string to_string(const long long val) {
  const size_t len = 4 * sizeof(long long);
  char tmp[len];
  snprintf(tmp, len, "%lld", val);
  return tmp;
}

std::string to_string(const unsigned long long val) {
  const size_t len = 4 * sizeof(unsigned long long);
  char tmp[len];
  snprintf(tmp, len, "%llu", val);
  return tmp;
}

std::string to_string(const float val) {
  const size_t len = std::numeric_limits<float>::max_exponent10 + 20;
  char tmp[len];
  snprintf(tmp, len, "%f", val);
  return tmp;
}

std::string to_string(const double val) {
  const size_t len = std::numeric_limits<double>::max_exponent10 + 20;
  char tmp[len];
  snprintf(tmp, len, "%f", val);
  return tmp;
}

std::string to_string(const long double val) {
  const size_t len = std::numeric_limits<long double>::max_exponent10 + 20;
  char tmp[len];
  snprintf(tmp, len, "%Lf", val);
  return tmp;
}

std::string to_string(const std::string& val) {
  return val;
}

std::string to_string(const char val) {
  return std::string(1, val);
}

template <typename T>
std::string to_string(const std::vector<T>& val) {
  if (val.empty()) {
    return "{}";
  }

  std::string ret = "{";
  for (typename std::vector<T>::const_iterator it = val.begin();
       it != val.end(); ++it) {
    ret += to_string(*it) + ", ";
  }

  ret = ret.substr(0, ret.size() - 2);
  ret += '}';

  return ret;
}

template <typename T>
std::string to_string(const std::set<T>& val) {
  if (val.empty()) {
    return "{}";
  }

  std::string ret = "{";
  for (typename std::set<T>::const_iterator it = val.begin(); it != val.end();
       ++it) {
    ret += to_string(*it) + ", ";
  }

  ret = ret.substr(0, ret.size() - 2);
  ret += '}';

  return ret;
}

template <typename k, typename v>
std::string to_string(const std::map<k, v>& val) {
  if (val.empty()) {
    return "{}";
  }

  std::string ret = "{";
  for (typename std::map<k, v>::const_iterator it = val.begin();
       it != val.end(); ++it) {
    ret += '{' + to_string(it->first) + ", " + to_string(it->second) + "}, ";
  }

  ret = ret.substr(0, ret.size() - 2);
  ret += '}';

  return ret;
}
