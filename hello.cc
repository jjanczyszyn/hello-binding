  #include <nan.h>


  namespace hello {

  using v8::Number;
  using v8::Value;
  using v8::Local;
  using v8::Object;
  using v8::FunctionCallbackInfo;


  void add(const FunctionCallbackInfo<Value>& info){
    Nan::Maybe<double> value = Nan::To<double>(info[0]);
    Nan::Maybe<double> value1 = Nan::To<double>(info[1]);
    Local<Number> retval = Nan::New(value.FromJust() + value1.FromJust());
    info.GetReturnValue().Set(retval);
  }

  void Initialize(Local<Object> exports) {
      NODE_SET_METHOD(exports, "add", add);
  }

  // macro to load the module when require'd
  NODE_MODULE(hello, Initialize)

}
