/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __kinect_image_t_hpp__
#define __kinect_image_t_hpp__

#include <vector>
#include "image_metadata_t.hpp"

namespace kinect
{

/**
 * Describes an image
 *
 * This type should be kept compatible with camlcm.image_t, as defined
 * in camunits-extra
 */
class image_t
{
    public:
        int64_t    utime;

        int32_t    width;

        int32_t    height;

        int32_t    row_stride;

        int32_t    pixelformat;

        int32_t    size;

        std::vector< uint8_t > data;

        int32_t    nmetadata;

        std::vector< kinect::image_metadata_t > metadata;

    public:
        enum { PIXEL_FORMAT_UYVY = 1498831189 };
        enum { PIXEL_FORMAT_YUYV = 1448695129 };
        enum { PIXEL_FORMAT_IYU1 = 827677001 };
        enum { PIXEL_FORMAT_IYU2 = 844454217 };
        enum { PIXEL_FORMAT_YUV420 = 842093913 };
        enum { PIXEL_FORMAT_YUV411P = 1345401140 };
        enum { PIXEL_FORMAT_I420 = 808596553 };
        enum { PIXEL_FORMAT_NV12 = 842094158 };
        enum { PIXEL_FORMAT_GRAY = 1497715271 };
        enum { PIXEL_FORMAT_RGB = 859981650 };
        enum { PIXEL_FORMAT_BGR = 861030210 };
        enum { PIXEL_FORMAT_RGBA = 876758866 };
        enum { PIXEL_FORMAT_BGRA = 877807426 };
        enum { PIXEL_FORMAT_BAYER_BGGR = 825770306 };
        enum { PIXEL_FORMAT_BAYER_GBRG = 844650584 };
        enum { PIXEL_FORMAT_BAYER_GRBG = 861427800 };
        enum { PIXEL_FORMAT_BAYER_RGGB = 878205016 };
        enum { PIXEL_FORMAT_BE_BAYER16_BGGR = 826360386 };
        enum { PIXEL_FORMAT_BE_BAYER16_GBRG = 843137602 };
        enum { PIXEL_FORMAT_BE_BAYER16_GRBG = 859914818 };
        enum { PIXEL_FORMAT_BE_BAYER16_RGGB = 876692034 };
        enum { PIXEL_FORMAT_LE_BAYER16_BGGR = 826360396 };
        enum { PIXEL_FORMAT_LE_BAYER16_GBRG = 843137612 };
        enum { PIXEL_FORMAT_LE_BAYER16_GRBG = 859914828 };
        enum { PIXEL_FORMAT_LE_BAYER16_RGGB = 876692044 };
        enum { PIXEL_FORMAT_MJPEG = 1196444237 };
        enum { PIXEL_FORMAT_BE_GRAY16 = 357 };
        enum { PIXEL_FORMAT_LE_GRAY16 = 909199180 };
        enum { PIXEL_FORMAT_BE_RGB16 = 358 };
        enum { PIXEL_FORMAT_LE_RGB16 = 1279412050 };
        enum { PIXEL_FORMAT_BE_SIGNED_GRAY16 = 359 };
        enum { PIXEL_FORMAT_BE_SIGNED_RGB16 = 360 };
        enum { PIXEL_FORMAT_FLOAT_GRAY32 = 842221382 };
        enum { PIXEL_FORMAT_INVALID = -2 };
        enum { PIXEL_FORMAT_ANY = -1 };

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "image_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int image_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int image_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int image_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t image_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* image_t::getTypeName()
{
    return "image_t";
}

int image_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->width, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->height, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->row_stride, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->pixelformat, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->size, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->size > 0) {
        tlen = __byte_encode_array(buf, offset + pos, maxlen - pos, &this->data[0], this->size);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->nmetadata, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->nmetadata; a0++) {
        tlen = this->metadata[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int image_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->width, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->height, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->row_stride, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->pixelformat, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->size, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->size) {
        this->data.resize(this->size);
        tlen = __byte_decode_array(buf, offset + pos, maxlen - pos, &this->data[0], this->size);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->nmetadata, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->metadata.resize(this->nmetadata);
    for (int a0 = 0; a0 < this->nmetadata; a0++) {
        tlen = this->metadata[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int image_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __byte_encoded_array_size(NULL, this->size);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->nmetadata; a0++) {
        enc_size += this->metadata[a0]._getEncodedSizeNoHash();
    }
    return enc_size;
}

uint64_t image_t::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == image_t::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, (void*)image_t::getHash };

    uint64_t hash = 0x6fee6cb20472ff6aLL +
         kinect::image_metadata_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
