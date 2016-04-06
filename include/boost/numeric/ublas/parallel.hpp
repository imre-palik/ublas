//
//  Copyright (c) 2016
//  Michael Lehn, Imre Palik
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
#ifndef _BOOST_UBLAS_PARALLEL_
#define _BOOST_UBLAS_PARALLEL_
#if defined(_OPENMP) && _OPENMP >= 201307UL
#include <omp.h>
#include <cassert>
#define BOOST_UBLAS_OPENMP_

namespace boost { namespace numeric { namespace ublas {
    struct cpu_topology {
        const unsigned sockets;
        const unsigned cores_per_sockets;
        cpu_topology(unsigned s, unsigned c)
          : sockets(s), cores_per_sockets(c)
            {
	        assert (s > 0);
	        assert (c > 0);
		assert (s > 1 || c > 1);
	    }
    };
}}}

#endif
#endif
