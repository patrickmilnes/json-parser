
pub mod utils {
    pub fn create_err_msg(c: char) -> String {
        let s = "Symbol" + c.to_string().as_str() + "  is not part of JSON";
        let string = String::from(s);
        return string;
    }
}