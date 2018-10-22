 
// Find duplicate numbers from a given array

function findDuplicateNumbers(arr) {
    
    return arr.reduce((accum, currentValue, currentIndex, array) => {
        if (array.indexOf(currentValue) !== currentIndex && accum.indexOf(currentValue) < 0) {
            accum.push(currentValue);
        }
        return accum;
    }, []);
}

findDuplicateNumbers([9, 9, 111, 2, 3, 4, 4, 4, 5, 7]);
findDuplicateNumbers([9]);