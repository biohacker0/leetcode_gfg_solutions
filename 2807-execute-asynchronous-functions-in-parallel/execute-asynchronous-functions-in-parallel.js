/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    let list = []
    functions.forEach(function(item){
        list.push(item())
    })
   let promise=  Promise.all(list)
   return promise
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */