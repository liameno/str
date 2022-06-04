# str
#### A std::string helper library (C++17)
```cpp
//str.h

char get_first(const std::string &s);
char get_last(const std::string &s);

void remove_first(std::string &s);
void remove_last(std::string &s);

void trim_start(std::string &s);
void trim_end(std::string &s);
void trim(std::string &s);

std::vector<std::string> split(const std::string &s, const std::string &delimiter);

void to_lower(std::string &s);
void to_upper(std::string &s);
std::string to_lower_copy(const std::string &s);
std::string to_upper_copy(const std::string &s);

bool contains(const std::string &s, const char &value);
bool contains(const std::string &s, const std::string &value);

bool starts_with(const std::string &s, const std::string &v);
bool ends_with(const std::string &s, const std::string &v);

std::string replace(const std::string &s, const std::string &from, const std::string &to);

size_t find_end(const std::string &s, const std::string &v);
bool replace(std::string &s, const std::string &from, const std::string &to = "");
bool replace(std::string &s, size_t start_pos, const std::string &from, const std::string &to = "");
std::string replace_copy(const std::string &s, const std::string &from, const std::string &to = "");
std::string replace_copy(const std::string &s, size_t start_pos, const std::string &from, const std::string &to = "");
bool replace_end(std::string &s, const std::string &from, const std::string &to = "");
bool replace_end(std::string &s, const size_t &start, const std::string &from, const std::string &to = "");
std::string replace_end_copy(const std::string &s, const std::string &from, const std::string &to = "");
std::string replace_end_copy(const std::string &s, size_t start_pos, const std::string &from, const std::string &to = "");

std::string reverse(const std::string &s);
void remove_special_chars(std::string &s);
void remove_html_tags(std::string &html);

//str_impl.h
bool contains(const std::vector<T> &values, const T value);
std::string join(const std::string &separator, const std::vector<T> &... values);
//example: s="{0}{1}"; values: "1", "2"; res = "12"
std::string format(const std::string &s, const T &... values);
```
