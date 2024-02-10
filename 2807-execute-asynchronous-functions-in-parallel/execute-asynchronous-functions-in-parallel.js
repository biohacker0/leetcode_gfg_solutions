/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise(function(resolve, reject) {
        let results = [];
        let numResolved = 0;
        let numFunctions = functions.length;

        for (let i = 0; i < numFunctions; i++) {
            functions[i]()
                .then(value => {
                    results[i] = value;
                    numResolved++;

                    if (numResolved === numFunctions) {
                        resolve(results);
                    }
                })
                .catch(error => {
                    reject(error);
                });
        }
    });
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */