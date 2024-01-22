/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    let fval = val;
    let obj={}
    obj.toBe = function(val){
        let oval=val;
        if(fval===oval) return true
        else throw new Error("Not Equal")
    },
    obj.notToBe = function(val){
        let oval=val;
        if(fval!==oval) return true
        else throw new Error("Equal")
    }
    return obj
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */