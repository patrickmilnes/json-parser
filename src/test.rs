#[cfg(test)]
mod tests {
    use crate::lexer::{create_token, extract_string, get_token_type, remove_whitespace, StringHead, Token, TokenType};

    #[test]
    fn remove_whitespace_returns_retcon() {
        let s: String = String::from(" r e t c o n ");
        let not_whitespace = remove_whitespace(s);
        assert_eq!(not_whitespace, "retcon");
    }

    #[test]
    fn extract_string_returns_test() {
        let s: Vec<char> = String::from("\"test\"}[sadsad").chars().collect();
        let extracted: StringHead = extract_string(&s, 0);
        assert_eq!(extracted.1, "test");
    }

    #[test]
    fn create_token_returns_token() {
        let tok1 = Token {
            index: 1,
            value: String::from("hello"),
            t_type: TokenType::STRING
        };
        let tok2 = create_token(1, String::from("hello"), TokenType::STRING);
        assert_eq!(tok1, tok2);
    }

    #[test]
    fn get_token_type_returns_TokenType() {
        let tok_t1: Result<TokenType, String> = get_token_type('[');
        let tok_t2: Result<TokenType, String> = get_token_type('{');
        let tok_t3: Result<TokenType, String> = get_token_type('%');

        assert_eq!(tok_t1, Ok(TokenType::LBRACKET));
        assert_eq!(tok_t2, Ok(TokenType::LBRACE));
        assert_eq!(tok_t3, Err(String::from("Symbol % is not part of JSON")));
    }
}