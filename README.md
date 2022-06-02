# str
#### A single header, std::string helper library (C++11, C++14, C++17)
```cpp
std::vector<std::string> split(const std::string &s, const std::string &delimiter);
size_t find_end(const std::string &s, const std::string &v);
bool replace(std::string &s, const std::string &from, const std::string &to = "");
bool replace(std::string &s, size_t start_pos, const std::string &from, const std::string &to = "");
bool replace_end(std::string &s, const std::string &from, const std::string &to = "");
bool replace_end(std::string &s, const size_t &start, const std::string &from, const std::string &to = "");
void trim_start(std::string &s);
void trim_end(std::string &s);
void to_lower(std::string &s);
void to_upper(std::string &s);
bool starts_with(const std::string &s, const std::string &v);
bool ends_with(const std::string &s, const std::string &v);
void remove_special_chars(std::string &s);
```
