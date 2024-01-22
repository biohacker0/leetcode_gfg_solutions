/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let filteredArr =[]
    for(let items in arr){
        let result = fn(arr[items],Number(items))
        if(result)filteredArr.push(arr[items]);
    }
    return filteredArr
};