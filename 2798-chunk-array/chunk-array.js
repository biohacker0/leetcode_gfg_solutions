/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let final = [];
    
    while (arr.length > 0) {
        let res = []; 
        for (let i = 0; i < size && arr.length > 0; i++) {
            res.push(arr.shift());
        }
        final.push(res);
    }
    
    return final;
};