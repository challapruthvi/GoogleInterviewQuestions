/*
*  Get most frequent item of an array
*/

const getFrequentItem = (inputArray) => {
    if (inputArray.length === 0) {
        return undefined;
    }
    let frequentElement = inputArray[0];
    let maxCount = 1;
    let map = {};
    inputArray.forEach(element => {
        if (map[element] === undefined) {
            map[element] = 1;
        } else {
            map[element] = map[element] + 1;
        }

        if (map[element] > maxCount) {
            maxCount = map[element];
            frequentElement = element;
        }
    });

    return frequentElement;
};

getFrequentItem([]);
getFrequentItem([24]);
getFrequentItem([2,3,1,3,4,5,1,3,1,3,1,1]);
