#ifndef IMAGELOADER_HPP_INCLUDED
#define IMAGELOADER_HPP_INCLUDED

#include "util/utiltype.hpp"
#include "resources/pixel-buffer.hpp"
#include <istream>

namespace trillek {
namespace resource {

util::void_er LoadPNG(util::InputStream & f, PixelBuffer & pix);

}
}

#endif