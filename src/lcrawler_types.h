/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef lcrawler_TYPES_H
#define lcrawler_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace lcrawler {

class IUrl;

typedef struct _IUrl__isset {
  _IUrl__isset() : str(false), ip(false), hub(true) {}
  bool str :1;
  bool ip :1;
  bool hub :1;
} _IUrl__isset;

class IUrl {
 public:

  static const char* ascii_fingerprint; // = "7F21FB535884165D6350077C7B970E93";
  static const uint8_t binary_fingerprint[16]; // = {0x7F,0x21,0xFB,0x53,0x58,0x84,0x16,0x5D,0x63,0x50,0x07,0x7C,0x7B,0x97,0x0E,0x93};

  IUrl(const IUrl&);
  IUrl& operator=(const IUrl&);
  IUrl() : str(), ip(), hub(false) {
  }

  virtual ~IUrl() throw();
  std::string str;
  std::string ip;
  bool hub;

  _IUrl__isset __isset;

  void __set_str(const std::string& val);

  void __set_ip(const std::string& val);

  void __set_hub(const bool val);

  bool operator == (const IUrl & rhs) const
  {
    if (!(str == rhs.str))
      return false;
    if (!(ip == rhs.ip))
      return false;
    if (!(hub == rhs.hub))
      return false;
    return true;
  }
  bool operator != (const IUrl &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IUrl & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const IUrl& obj);
};

void swap(IUrl &a, IUrl &b);

} // namespace

#endif