
enum class TokenTypes {
  Identifier,
  Constant,
  Int,
  Void,
  Return,
  OpenParen,
  CloseParen,
  OpenBrace,
  CloseBrace,
  Semicolon
};

typedef struct {

} Lexer;

Lexer next_token(int position, Lexer *tokens) {}
