#ifndef DEBUG_HPP
#define DEBUG_HPP

#ifndef WAYFIRE_PLUGIN
#include "config.h"
#endif

#define nonull(x) ((x) ? (x) : ("nil"))

namespace wf
{
/**
 * Print the current stacktrace at runtime.
 *
 * @param fast_mode If fast_mode is true, the stacktrace will be generated
 *   using the fastest possible method. However, this means that not all
 *   information will be printed (for ex., line numbers may be missing).
 */
void print_trace(bool fast_mode);
}

#endif
