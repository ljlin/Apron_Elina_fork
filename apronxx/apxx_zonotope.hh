#ifndef __APXX_ZONOTOPE_HH
#define __APXX_ZONOTOPE_HH

#include "apxx_manager.hh"

#include "zonotope.h"

namespace apron {

    class zonotope_manager : public manager {

    public:

        /*! \brief Creates a new manager.
         *
         * \arg \c strict whether to allow strict inequalities as well as non-strict inequalities.
         *
         * Note that abstract values created with strict and non-strict managers
         * are not compatible.
         */
        zonotope_manager();

        //! Copy operator.
        manager& operator=(const manager&);
    };

#include "apxx_zonotope_inline.hh"

}

#endif /* __APXX_ZONOTOPE_HH */
