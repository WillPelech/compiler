
// requirements

/*
 *preprocess the source file by running this command
 *
 *gcc -E -P INPUT_FILE -o PREPROCESSED_FILE
 *
 * */

/*
 * compile to
 *
 *
 *
 */
#include "stdbool.h"
#include "stdio.h"
#include "string.h"

typedef struct {
  bool PreprocessorOnly; // -E
  bool NoLineMarker;     // -P
  bool Lexer;            // --lexer
  bool Parser;           // --parser
  bool Assembly;         // --cdoegen
} Options;
Options opts = {};
int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    if (strcmp(argv[i], "-E") == 0) {
    } else if (strcmp(argv[i], "-P") == 0) {
    } else if (strcmp(argv[i], "--lexer") == 0) {
    } else if (strcmp(argv[i], "--parser") == 0) {
    } else if (strcmp(argv[i], "--codegen") == 0) {

    } else {
      printf("invalid argument recieved %s", argv[i]);
      return 1;
    }
  }
}
