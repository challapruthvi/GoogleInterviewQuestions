// To find the missing number in a given integer array of 1 to 100? 
// (Unique numbers with no duplicates and only one number is missing)

function findMissingNum(arr) {
    const n = arr.length + 1;
    const expectedSum = n * (n + 1) / 2;
    
    const arraySum = arr.reduce((sum, i) => sum + i, 0);

    return expectedSum - arraySum;
}

findMissingNum([1, 2, 3, 4, 6, 7]);

// To find the missing number / numbers in a given integer array which can contain duplicates
// Below code is the generic way to find missing number / numbers 

function findMissingNumbers(arr) {
    // Create sparse array with a 1 at each index equal to a value in the input.
    var sparse = arr.reduce((sparse, i) => (sparse[i]=1,sparse), []);
    // Create array 0..highest number, and retain only those values for which
    // the sparse array has nothing at that index (and eliminate the 0 value).
    return [...sparse.keys()].filter(i => i && !sparse[i]);
}

findMissingNumbers([9, 15, 1, 1, 9]);
findMissingNumbers([2, 5, 3, 1, 4, 7, 10, 15, 2, 1]);