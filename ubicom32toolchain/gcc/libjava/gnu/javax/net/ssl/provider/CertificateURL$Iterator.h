
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CertificateURL$Iterator__
#define __gnu_javax_net_ssl_provider_CertificateURL$Iterator__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CertificateURL;
              class CertificateURL$Iterator;
              class CertificateURL$URLAndOptionalHash;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CertificateURL$Iterator : public ::java::lang::Object
{

public:
  CertificateURL$Iterator(::gnu::javax::net::ssl::provider::CertificateURL *);
  virtual ::gnu::javax::net::ssl::provider::CertificateURL$URLAndOptionalHash * CertificateURL$Iterator$next();
  virtual jboolean hasNext();
  virtual void remove();
  virtual ::java::lang::Object * next();
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) index;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::CertificateURL * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CertificateURL$Iterator__