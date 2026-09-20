# AGENTS.md

## Project context
- This repository is a small learning project for an introductory programming course at UFOP.
- The main code is in `programas.c` and is intended to be a simple C exercise or practice file.
- The repository is intentionally minimal: there are no large modules, frameworks, or test suites.

## Working conventions
- Prefer simple, readable C code over clever or overly abstract solutions.
- Keep variable names clear and descriptive; this is a teaching-oriented project.
- Preserve compatibility with standard C and avoid relying on non-portable extensions.
- Use comments sparingly and only to explain important logic or exercise intent.

## Validation
- Since this repo has no automated test harness, validate changes by compiling the project directly.
- Use: `gcc programas.c -o programas`
- Then run: `./programas`
- If the code is being modified for a specific exercise, keep the program self-contained and easy to understand.

## File guidance
- Treat `programas.c` as the primary source file unless a new exercise file is explicitly added.
- Keep the repository structure simple; avoid introducing build tools or scripts unless the project clearly requires them.
- When updating documentation, prefer brief notes in `README.md` over adding unnecessary project complexity.
