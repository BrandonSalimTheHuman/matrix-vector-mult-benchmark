# matrix-vector-mult-benchmark

How to run code:

In run.bat, change the file name in the second line after -c into the name of the file that you want to run.

Currently, it will run main_test.c

To run the code, open run.bat

# Validation
![validation](https://user-images.githubusercontent.com/114371928/207346382-6019b5bf-6c43-4e4b-a011-7c5d122d1dff.png)

On the left side, is the result main_test.c
On the right side, is the validation using numpy.dot (.py file is also uploaded here)

# Time 
![time_example](https://user-images.githubusercontent.com/114371928/207347059-a036b782-0028-413a-b9b0-e96169929658.png)

First, this is an example of how the time is recorded. In this photo, the value of n is 3. 
Here is the table showing the value of n and the time in seconds in 11 tests:

![table](https://user-images.githubusercontent.com/114371928/207347781-0008ced8-3c80-4a0c-958a-8665e1fa58f8.png)

And here is the graph plotted from that data:
![graph](https://user-images.githubusercontent.com/114371928/207347924-6ca46435-44b7-459e-854e-df001282e070.png)

# Space
![graph](https://user-images.githubusercontent.com/114371928/207348769-3105d8fe-f66d-4389-b490-f3ab48facd95.png)

Focus on the memory usage of main.
For this test, the value of n is set to 100.
