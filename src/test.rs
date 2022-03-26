#[cfg(test)]
mod tests {
    use crate::lexer::{
        create_token,
        extract_string,
        remove_whitespace,
        StringHead,
        Token,
        TokenType
    };

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
}