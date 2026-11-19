*This project has been created as part of the 42 curriculum by benbiki.*

# Get Next Line

## Description

Get Next Line is a C project that implements a function which reads from a file descriptor and returns one line at a time.

The returned line includes the terminating `\n` when one is present. If the final line reaches end-of-file without a newline, the function returns that final content without adding a newline. The function returns `NULL` when there is no more content to read or when an error occurs.

The project focuses on file descriptors, the `read()` system call, dynamic memory allocation, string handling, and the use of a static variable to preserve data between function calls.

## Project Files

Mandatory files:

- `get_next_line.c` — the main Get Next Line implementation.
- `get_next_line.h` — function prototypes, includes, and the `BUFFER_SIZE` definition.
- `get_next_line_utils.c` — locally implemented helper functions used by Get Next Line.

Bonus files:

- `get_next_line_bonus.c`
- `get_next_line_bonus.h`
- `get_next_line_utils_bonus.c`

## Instructions

Compile the mandatory source files with the required compiler flags:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -c get_next_line.c get_next_line_utils.c
```

`BUFFER_SIZE` can be changed at compile time. When no value is supplied, the header's default definition is used.

The bonus source files are separate from the mandatory source files and are compiled independently:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -c get_next_line_bonus.c get_next_line_utils_bonus.c
```

## Local Test Main

The following `main()` is only for local testing. It is not part of the Get Next Line submission and should not be included among the project source files submitted to 42. Save it temporarily as `main.c` when you want to test the function with a text file.

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```

Compile the test program from the project directory:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl_test
```

Run it by passing the path to a text file:

```bash
./gnl_test test.txt
```

## Algorithm

The mandatory implementation uses a static `stash` pointer to preserve unread characters between calls.

1. **Initialize the stash:** On the first call, the static stash is `NULL`. The reading function creates an empty string so that new data can be appended to it.
2. **Read from the file descriptor:** `read_from_fd()` reads chunks of up to `BUFFER_SIZE` bytes into a temporary buffer. It continues until a newline is found, end-of-file is reached, or an error occurs.
3. **Append the new data:** Each chunk is joined to the current stash. The temporary joined string becomes the new stash, and the previous allocation is freed.
4. **Extract one line:** `extract_line()` searches for the first newline. If found, it allocates and copies the characters through that newline. If no newline exists, it copies the remaining stash, which represents the final line at EOF.
5. **Keep the remainder:** `update_stash()` removes the returned line from the stash. If characters remain after the line, it duplicates that remainder and stores it for the next call. If no characters remain, it frees the stash and sets the pointer to `NULL`.
6. **Return the line:** `get_next_line()` returns the newly allocated line. The caller is responsible for freeing the returned line.

This approach does not read the entire file at once. Reading stops when a newline is available, while any unread characters already obtained are preserved for the next call.

## Allowed Functions and Constraints

The Get Next Line implementation uses `read()`, `malloc()`, and `free()` as its external functions. String and memory helpers used by the implementation are written locally in the project utilities file.

The implementation must not use Libft, `lseek()`, or global variables. It must compile with `-Wall -Wextra -Werror`.

## Bonus

The bonus version extends the implementation to support multiple file descriptors at the same time. Each file descriptor must retain its own stash so that calls can alternate between descriptors without mixing their data or losing their reading positions.

The bonus implementation is kept in the three `_bonus` files listed above. It uses only one static variable, as required by the project subject.

## Resources

- The Get Next Line subject provided by 42.
- `read()` manual: https://man7.org/linux/man-pages/man2/read.2.html
- `malloc()` and `free()` manual: https://man7.org/linux/man-pages/man3/malloc.3.html
- `open()` manual: https://man7.org/linux/man-pages/man2/open.2.html

## AI Usage

AI assistance was used to discuss the Get Next Line algorithm, clarify C concepts related to file descriptors and dynamic memory, and review code explanations. AI-generated suggestions were treated as material for review and adaptation; the implementation must be understood and validated by the student.
