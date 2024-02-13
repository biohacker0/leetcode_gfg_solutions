/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    let obj = {};
    for (let elem of this) {
        let key = fn(elem);
        if (!(key in obj)) {
            obj[key] = [];
        }
        obj[key].push(elem);
    }
    return obj;
};


/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */