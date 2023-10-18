//crc64:66aae40a15ae3ca9
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"

template<typename T>
typename Storage::loader<T>::loader_fun Storage::loader<T>::get_function(int tag) noexcept {
  switch(tag){
    case -2043716967: return Storage::load_implementation_helper<array< array< mixed > >, T>::load;
    case -1717182174: return Storage::load_implementation_helper<Optional < array< mixed > >, T>::load;
    case -1349254353: return Storage::load_implementation_helper<class_instance<C$VK$TL$RpcResponse>, T>::load;
    case -500457828: return Storage::load_implementation_helper<void, T>::load;
    case -100587552: return Storage::load_implementation_helper<array< class_instance<C$VK$TL$RpcResponse> >, T>::load;
    case 158135432: return Storage::load_implementation_helper<class_instance<C$KphpJobWorkerResponse>, T>::load;
    case 308909271: return Storage::load_implementation_helper<int64_t, T>::load;
    case 461523112: return Storage::load_implementation_helper<Optional < string >, T>::load;
    case 818704257: return Storage::load_implementation_helper<array< mixed >, T>::load;
    case 1009897433: return Storage::load_implementation_helper<class_instance<C$PDOStatement>, T>::load;
    case 1251598724: return Storage::load_implementation_helper<thrown_exception, T>::load;
    case 1625745680: return Storage::load_implementation_helper<Optional < int64_t >, T>::load;
    case 2003848354: return Storage::load_implementation_helper<mixed, T>::load;
    case 2066206666: return Storage::load_implementation_helper<bool, T>::load;
  }
  php_assert(0);
}

