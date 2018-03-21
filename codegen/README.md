# Libqtaws Code Generator
[![Build Status](https://img.shields.io/travis/pcolby/libqtaws/codegen.svg "Linux (Travis CI)")](https://travis-ci.org/pcolby/libqtaws)
[![Build Status](https://img.shields.io/appveyor/ci/pcolby/libqtaws/codegen.svg "Windows (AppVeyor)")](https://ci.appveyor.com/project/pcolby/libqtaws)
[![GPLv3 License](http://img.shields.io/badge/license-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl.html)

Libqtaws-codegen is part of the [libqtaws] project.  Specifically, This
`codegen` branch contains a simple application that is used to automate the
generation of a number of the [libqtaws] classes from a set of API descriptions.

## Requirements

While the [libqtaws] library aims to support with all versions of Qt from Qt
5.1 onwards, with or without C++11 support, this code generator currently
requires Qt 5.10 or later, which also requires C++11.

But other than a recent version of Qt, and a decent modern C++ compiler, this
code generator has no special requirements.

## License

While the [libqtaws] library is made available under the [LGPL], this code
generator is released under the [GPL].

The [API descriptions](descriptions) are copied verbatim from the [aws-sdk-cpp](
https://github.com/aws/aws-sdk-cpp/tree/master/code-generation/api-descriptions)
project, which provides those descriptions under the [ASL].

[libqtaws]: https://github.com/pcolby/libqtaws
[ASL]: http://www.apache.org/licenses/LICENSE-2.0 "Apache License"
[LGPL]:https://www.gnu.org/licenses/lgpl.html "GNU Lesser General Public License"
[GPL]: https://www.gnu.org/licenses/gpl.html "GNU General Public License"
