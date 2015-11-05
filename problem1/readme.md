#Problem 1

####Project Euler problem number 1

**If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.**

How I solved it:

My idea was to find out the highest multiplier for a given number. For example, we know that if the Max is 10, the highest multiplier for 3 as a divisor, is 3. Using that, I created a loop and then iterated up to that multiplier while adding all of the multiples. Since the number given was 1000 non-inclusive, I made a separate if statement if the divisior was 5 to make sure that the last digit was not included. That condition subtracted 1 from the greatest possible multiplier in the case of 5. I also had to take into account the overlaps betweent the two. 

This implementation is done in C++