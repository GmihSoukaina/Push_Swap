# Push_swap Tester

## How to use

The push_swap_test.sh or push_swap_test_linux.sh file and the checker_mac or checker_linux should be in the same directory where is the push_swap program. Once the terminal is open and we are in the project directory we executed this command:

If you don't have MacOS, instead of running push_swap_test.sh, execute push_swap_test_linux.sh

```bash push_swap_test.sh```

We also can add two arguments that will be the times that we executed the 100 and 500 tests. If you don't put arguments, it will execute 200 for each test by default.

```bash push_swap_test.sh 250 250```. 

<img width="540" alt="Screen Shot 2022-10-09 at 11 06 42 PM" src="https://user-images.githubusercontent.com/66915274/194779534-cf66c958-46a4-4c6f-bf2f-587af4ad8f8e.png">

If you would like to execute the bonus. If you don't put arguments, it will execute 200 for each test by default. 

```bash push_swap_test.sh -b```.

And if you want to define the quantity for 100 and 500 tests:

```bash push_swap_test.sh -b 100 100```

<img width="448" alt="Screen Shot 2022-10-10 at 3 12 48 AM" src="https://user-images.githubusercontent.com/66915274/194788176-19454b9d-61b7-4921-b440-1073c3d22c50.png">

### ❗️ You can check the sended arguments that makes your program fail with the traces.txt file ❗️

# Pushswap visualizer 

Useful tool to visualise your algorithm graphically. Program created by !(https://github.com/ailopez-o).

[VISUALIZER REPO](https://github.com/ailopez-o/42Barcelona-PushSwap-ProChecker)

If you want to run it, type the following command. The number represents the number of arguments push_swap will receive.

```bash push_swap_test.sh -v 500```

<img width="597" alt="Screen Shot 2023-01-13 at 5 23 58 PM" src="https://user-images.githubusercontent.com/66915274/212369245-54455057-43d9-42c5-a916-a825ff505813.png">

If you want to run the viewer with specific arguments use the following command followed by the desired arguments in double quotes.

```bash push_swap_test.sh -v2 "1 4 2 3 5"```
