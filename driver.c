
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
  }
}
