
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_relaxng_ElementPattern__
#define __gnu_xml_validation_relaxng_ElementPattern__

#pragma interface

#include <gnu/xml/validation/relaxng/Pattern.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace relaxng
        {
            class ElementPattern;
            class NameClass;
            class Pattern;
        }
      }
    }
  }
}

class gnu::xml::validation::relaxng::ElementPattern : public ::gnu::xml::validation::relaxng::Pattern
{

public: // actually package-private
  ElementPattern();
  ::gnu::xml::validation::relaxng::NameClass * __attribute__((aligned(__alignof__( ::gnu::xml::validation::relaxng::Pattern)))) nameClass;
  ::gnu::xml::validation::relaxng::Pattern * pattern;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_relaxng_ElementPattern__