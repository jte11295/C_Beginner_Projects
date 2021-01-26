Prompt
    -Uses multidimensional arrays
    -Program wil find total raifall for each year, the average yearly rainfall and the average rainfall for each month
    -Input will be a 2D array with hard-coded values for the rainfall amounts for the past 5 years
        -The array should have 5 rows (years) and 12 (months) columns
        -rainfall amounts should be floating point numbers. 
    
    Output should look something like this:
        YEAR    RAINFALL (inches)
        2010    32.4    
        2011    37.9
        2012    49.8
        2013    44.0
        2014    32.9

        The yearly average rainfall is 39.4 inches

        Monthly Averages:

        Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
        7.3 7.3 4.9 3.0 2.3 0.6 1.2 0.3 0.5 1.7 3.6 6.7

Hints
    -Init your 2D Array with Hard coded values
    -Remember, to iterate through a 2D array, you will need a nested loop
    -The key to this solution will be to visualize the 2D array and understand how to iterate through one, via a nested loop
    -As you are iterating, you can keep a running total (outer loop iterate by year, inner loop iterate by month) to get the total rainfall for all years.
    -To get the average monthly rainfalls iterate through the 2D array by having the outer loop go through each month and the inner loop go through each year
    