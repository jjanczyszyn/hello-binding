  // contents of index.js
  const addon = require('hello');
  const assert = require('assert');

  describe('hello', function() {
    describe('add', function() {
      it('should sum two numbers', function(){
        assert(addon.add(100, 42) == 142);
        assert(addon.add(100.5, 42) == 142.5);
      });
      it('returns NaN if arguments are not numbers', function(){
        assert(isNaN(addon.add("no")));
        assert(isNaN(addon.add()));
        assert(isNaN(addon.add(function(){})));
      });
    });
  });
