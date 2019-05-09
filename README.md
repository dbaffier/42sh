# 42sh
This project consists in coding a fully functional shell in C.

By tsisadag, gbourgeo, rfontain, dbaffier

Mandatory part:
- Full edition of commands line
- Redirection and aggregation operators `>` `>>` `<` `<<` `>&` `<&`
- Pipe `|`
- Separators `;`
- Logical operators `&&` `||`
- Built-ins `cd` `echo` `exit` `type`
- Monitoring of intern shell variables such as:
  - Intern variable creation and exportation
  - built-in `set`
  - Local variable `HOME=/tmp cd`
- Exit code access `${?}`
- Job control monitoring:
  - built-ins `jobs` `fg` `bg`
  - Operator and separator `&`
  - Monitoring of all signals
- Each built-ins must be written as posix-standart

Modulart part:
- Inhibitors `" (double quote)`, `' (simple quote)` and `\`
- Pattern matching (globing): `*`, `?`, `[]`, `!` and the characters intervals with `\` (back-slash)
- Tilde expansion and additional parameter formats:
  - `~`
  - `$(paramater:-word}`
  - `$(paramater:=word}`
  - `$(paramater:?word}`
  - `$(paramater:+word}`
  - `$(#paramater}`
  - `$(paramater%}`
  - `$(paramater%%}`
  - `$(paramater#}`
  - `$(parameter##}
- Control subsitution `$()`
- Contextual dynamic completion
- Alias management `alias`, `unalias`
- built-ins `test` with options: `texttt-b, -c, -d, -e, -f, -g, -L -p, -r, -S, -s, -u, -w, -x, -z, =, !=, -eq, -ne, -ge, -                                    lt, -le, !.` 
