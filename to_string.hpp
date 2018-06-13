#include <string>
#include <limits>

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

