Hello
=====

a language interpreter by Nils Magnus (magnus@linuxtag.org)

**Hello** is a strong typed, infix-notated, object-oriented,
imperative, functional, and fictional solution specific language. It
was invented by Nils Magnus during a team event at secunet Security
Networks AG in 2004.

Language
--------

**Hello** is an interpreted language. To write code in **Hello**, you
need the Hello-interpreter available in this repository (see
Installation). Hello-scripts can be of arbitrary length (depending on
operating system and hard disk capacity) and accept arbitrary encoding
of the source code.

Empty source code makes **Hello** to write "Hello World" to standard
output. In any other case, a slight, but society-tolerable
insultation based on an furry animal is issued (platform depending).

Installation
------------

The Hello-interpreter itself is written in C. Prerequisites are a C
compiler, the `make` and `git` utilities, and an operating system that
tries to conform to POSIX. To compile the interpreter, check out the
project and run `make`. The interpreter is now ready and can be
invoked with `./hello`. It accepts one file as an argument, containing
the source code in the **Hello** language.

Example
-------

Language behavior on many source code instances:

```
echo "Welcome" > input
./hello input
You are a weasel.
```

Language behaviour on empty source code:

```
echo -n "" > input
./hello input
Hello World
```

Performance considerations
--------------------------

**Hello** is considered an extraordinary efficient programming
language, with an O(1) complexity of both runtime and memory
consumption:

```
$ time ./hello input 
Hello World

real	0m0.001s
user	0m0.000s
sys	0m0.000s
```

Licensing
---------

**Hello** is Copyright (c) 2004, 2019 by Nils Magnus
(magnus@linuxtag.org). Language, its design and interpreter are
licensed under the GPL v2. See LICENSE.