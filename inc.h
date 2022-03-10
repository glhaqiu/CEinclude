#include<bits/stdc++.h>

int count_index = 1;

#define printLn(s) { std::cout << "\n" << "line_" << count_index << ": " << s << "\n"; \
 count_index++; }

template<typename T>
void showTypeSize()
{
  printLn(sizeof(T));
}
