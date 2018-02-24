ConkyBallonPlus
---
A conky script based on [Ballon Conky](https://iacoporosso.deviantart.com/art/Ballon-Conky-242334528)

![preview.jpg](./preview.jpg)

``` shell
$ conky -c left & conky -c right & exit
```

or

``` shell
$ cd .conky
$ git clone https://github.com/lzgh64/ConkyBallonPlus.git
```
Then turn on by Conky Manager

You can add alias in your shell config file like `.zshrc`.
``` shell
alias note='vim ~/.conky/ConkyBallonPlus/note.txt'
alias todo='vim ~/.conky/ConkyBallonPlus/todo.txt'
```
So that you can edit your note & todo list text file easily.

Note that this script is not always suited to your system, modify it if necessary.
