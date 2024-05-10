(fcall name: (fname) @function)

(fdec name: (identifier) @function)

(lambda argument: (identifier) @type)

(fdec argument: (identifier) @type)

(let name: (identifier) @property)

(boolean) @constant
(integer) @number
(string) @string

[
 "let"
 "while"
 "fn"
 "cond"
 "lambda"
 ] @keyword

(comments) @comment

(operator) @operator


")" @punctuation
"(" @punctuation
"{" @punctuation
"}" @punctuation
