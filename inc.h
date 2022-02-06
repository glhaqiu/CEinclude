#include<iostream>

int count_index = 1;

#define printLn(s) std::cout << "\n" << "line_" << count_index << ": " << s << "\n"; \
  count_index++;
