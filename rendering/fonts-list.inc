static std::unordered_map<unsigned, std::pair<const unsigned char*, std::pair<unsigned,bool>(*)(char32_t)>> fonts
{
    { 4*256 + 5,  {ns_f4x5::bitmap, ns_f4x5::unicode_to_bitmap_index} },
    { 4*256 + 6,  {ns_f4x6::bitmap, ns_f4x6::unicode_to_bitmap_index} },
    { 5*256 + 7,  {ns_f5x7::bitmap, ns_f5x7::unicode_to_bitmap_index} },
    { 5*256 + 8,  {ns_f5x8::bitmap, ns_f5x8::unicode_to_bitmap_index} },
    { 6*256 + 9,  {ns_f6x9::bitmap, ns_f6x9::unicode_to_bitmap_index} },
    { 6*256 + 10, {ns_f6x10::bitmap, ns_f6x10::unicode_to_bitmap_index} },
    { 6*256 + 13, {ns_f6x13::bitmap, ns_f6x13::unicode_to_bitmap_index} },
    { 7*256 + 13, {ns_f7x13::bitmap, ns_f7x13::unicode_to_bitmap_index} },
    { 7*256 + 14, {ns_f7x14::bitmap, ns_f7x14::unicode_to_bitmap_index} },
    { 8*256 + 8,  {ns_f8x8::bitmap, ns_f8x8::unicode_to_bitmap_index} },
    { 8*256 + 10, {ns_f8x10::bitmap, ns_f8x10::unicode_to_bitmap_index} },
    { 8*256 + 12, {ns_f8x12::bitmap, ns_f8x12::unicode_to_bitmap_index} },
    { 8*256 + 13, {ns_f8x13::bitmap, ns_f8x13::unicode_to_bitmap_index} },
    { 8*256 + 14, {ns_f8x14::bitmap, ns_f8x14::unicode_to_bitmap_index} },
    { 8*256 + 15, {ns_f8x15::bitmap, ns_f8x15::unicode_to_bitmap_index} },
    { 8*256 + 16, {ns_f8x16::bitmap, ns_f8x16::unicode_to_bitmap_index} },
    { 8*256 + 19, {ns_f8x19::bitmap, ns_f8x19::unicode_to_bitmap_index} },
    { 9*256 + 15, {ns_f9x15::bitmap, ns_f9x15::unicode_to_bitmap_index} },
    { 9*256 + 18, {ns_f9x18::bitmap, ns_f9x18::unicode_to_bitmap_index} },
    { 10*256+ 20, {ns_f10x20::bitmap, ns_f10x20::unicode_to_bitmap_index} },
    { 12*256+ 13, {ns_f12x13::bitmap, ns_f12x13::unicode_to_bitmap_index} },
    { 18*256+ 18, {ns_f18x18::bitmap, ns_f18x18::unicode_to_bitmap_index} },
};