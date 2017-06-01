#include <stdio.h>

int main(int argc, char** argv) {
  //printf("%d", argc);
  char* name = "World";

  if (argc >= 2) {
    name = argv[1];
  }

  printf("Hello, %s!\n", name);
}
