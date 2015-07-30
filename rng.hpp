#ifndef __FWDPP_CYTHON_RNG_HPP__
#define __FWDPP_CYTHON_RNG_HPP__

#include <fwdpp/sugar/GSLrng_t.hpp>

namespace fwdpp_cython {
  using GSLrng_t = KTfwd::GSLrng_t<KTfwd::GSL_RNG_MT19937>;
}

#endif
