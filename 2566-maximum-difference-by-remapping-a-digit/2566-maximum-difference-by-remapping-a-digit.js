/**
 * @param {number} num
 * @return {number}
 */
var minMaxDifference = function (num) {
    let numString = num.toString();
    const maxValueArr = Array.from(numString);
    const minValueArr = Array.from(numString);
    let repeatedNum = -1;
    let repeatedNumTwo = -1;

    for (let i = 0; i < maxValueArr.length; i++) {
        if (maxValueArr[i] != 9 && ((maxValueArr[i] == repeatedNum) || (repeatedNum == -1))) {
            repeatedNum = maxValueArr[i];
            maxValueArr[i] = 9;
        }
        if (minValueArr[i] != 0 && ((minValueArr[i] == repeatedNumTwo) || (repeatedNumTwo == -1))) {
            repeatedNumTwo = minValueArr[i];
            minValueArr[i] = 0;
        }
    }

    let max = parseInt(maxValueArr.join(""));
    let min = parseInt(minValueArr.join(""));
    return max-min;
};