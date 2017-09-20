# Newton-Raphson method of solving an equation 

It is a quite simple method of solving an equation numerically in cases where the exact solution is difficult to find. In this method we use an initial guess value. Unlike bisection method, only one guess is required. Then the subsequent values are given by the Newton-Raphson equation. 

![Newton-Raphson](https://wikimedia.org/api/rest_v1/media/math/render/svg/710c11b9ec4568d1cfff49b7c7d41e0a7829a736)

I have used the equation  `x^2 - 612 = 0` as a demonstration. You can edit the source to use any equation of your choice. But remember the general rules for solving numerically using this method, especially this:
  - poor initial guess value will lead to quick convergence and generally faulty estimates thereafter.

`double` was used because `float` turned too imprecise for many calculations.
The code was written under Debian GNU/Linux in `vim` and compiled using `GCC`.
``` sh
$ gcc --version
gcc (Debian 7.2.0-4) 7.2.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Here's my vim. Pretty comfy I tell you. I shall never have the privilige to use [2 GB just to print a blinking cursor](https://github.com/Microsoft/vscode/issues/22900)  though!
![vim_setup](https://imgoat.com/uploads/c8349cc726/44673.png)


Here's the code running. The value obtained after 5 iterations can be verified with other sources too.
![vim_running](https://imgoat.com/uploads/c8349cc726/44674.png)


# LICENSE
![GNU_GPL_v3.0](https://www.gnu.org/graphics/gplv3-127x51.png)


Totally [RMS](https://stallman.org/) approved!
Make sure to check out [GNU](https://www.gnu.org) and [Free Software Foundation](https://www.fsf.org) as well!
