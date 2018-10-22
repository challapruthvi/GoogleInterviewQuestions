// Find largest and smallest numbers in an unsorted array

function findLargestSmallestNumbers(arr) {
    let largest = arr[0]; 
    let smallest = arr[0];

    arr.forEach(element => {
       if (element > largest) {
           largest = element;
       } else if (element < smallest) {
           smallest = element;
       }
    });

    return `Largest Number is: ${largest} and Smallest Number is: ${smallest}`;
}

findLargestSmallestNumbers([9, 8, 2, 1, 11, 20, 6, 7]);
