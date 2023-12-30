#include <stdio.h>

int main() {
    float calories, fatGrams, caloriesFromFat, percentCaloriesFromFat;

    // Input the number of calories
    printf("Enter the number of calories: ");
    scanf("%f", &calories);

    // Input the number of fat grams
    printf("Enter the number of fat grams: ");
    scanf("%f", &fatGrams);

    // Input validation
    if (calories <= 0 || fatGrams <= 0 || caloriesFromFat > calories) {
        printf("Error: Invalid input. Calories or fat grams were incorrectly entered.\n");
        return 1;  // Exit the program with an error code
    }

    // Calculate calories from fat (1 gram of fat = 9 calories)
    caloriesFromFat = fatGrams * 9;

    // Calculate the percentage of calories from fat
    percentCaloriesFromFat = (caloriesFromFat / calories) * 100;

    // Display the results
    printf("\nCalories from Fat: %.2f\n", caloriesFromFat);
    printf("Percentage of Calories from Fat: %.2f%%\n", percentCaloriesFromFat);

    // Check if the food is low in fat (calories from fat are less than 30%)
    if (percentCaloriesFromFat < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}

