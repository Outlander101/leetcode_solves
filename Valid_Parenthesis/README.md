# Q20. Valid Parentheses (E)

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
```bash
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
```
 
## Examples

### Example 1:

```bash
Input: s = "()"

Output: true
```

### Example 2:

```bash
Input: s = "()[]{}"

Output: true
```

### Example 3:

```bash
Input: s = "(]"

Output: false
```

### Example 4:

```bash
Input: s = "([])"

Output: true
```

### Example 5:

```bash
Input: s = "([)]"

Output: false
```

## Constraints:

```bash
    1 <= s.length <= 104
    s consists of parentheses only '()[]{}'.
```

## Hint

### Hint 1

```bash
Use a stack of characters.
```

### Hint 2

```bash
When you encounter an opening bracket, push it to the top of the stack.
```

### Hint 3


```bash
When you encounter a closing bracket, check if the top of the stack was the opening for it. If yes, pop it from the stack. Otherwise, return false.
```

## Similar Questions

```bash
Generate Parentheses
Longest Valid Parentheses
Remove Invalid Parentheses
Check If Word Is Valid After Substitutions
Check if a Parentheses String Can Be Valid
Move Pieces to Obtain a String
```