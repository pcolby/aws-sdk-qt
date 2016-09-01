# Libqtaws
[![Build Status](https://img.shields.io/travis/pcolby/libqtaws/master.svg "Linux (Travis CI)")](https://travis-ci.org/pcolby/libqtaws)
[![Build Status](https://img.shields.io/appveyor/ci/pcolby/libqtaws/master.svg "Windows (AppVeyor)")](https://ci.appveyor.com/project/pcolby/libqtaws)
[![Coverage Status](https://img.shields.io/codecov/c/github/pcolby/libqtaws.svg?label=codecov)](https://codecov.io/github/pcolby/libqtaws)
[![Coverage Status](https://img.shields.io/coveralls/pcolby/libqtaws.svg?label=coveralls)](https://coveralls.io/r/pcolby/libqtaws)
[![Coverity Scan Status](https://img.shields.io/coverity/scan/5528.svg "Coverity Scan")](https://scan.coverity.com/projects/5528)
[![GitHub Issues](http://img.shields.io/github/issues-raw/pcolby/libqtaws.svg)](https://github.com/pcolby/libqtaws/issues)
[![GitHub Release](http://img.shields.io/github/release/pcolby/libqtaws.svg)](https://github.com/pcolby/libqtaws/releases/latest)
[![LGPLv3 License](http://img.shields.io/badge/license-LGPLv3-blue.svg)](https://www.gnu.org/licenses/lgpl.html)

Libqtaws is an open-source (LGPL) library for consuming [Amazon Web Services (AWS)](http://aws.amazon.com/) from
[Qt](http://qt-project.org/) applications.

The library is still in early stages of development, but already includes much
of the basic framework plumbing required for implementing asynchronous AWS
clients, including generic classes for managing the building of AWS requests
(including all five AWS signature types) and processing of AWS responses.

The first [0.1.0](https://github.com/pcolby/libqtaws/releases/tag/v0.1.0)
release included just the signature, endpoint and region classes.  But that
release was [100% documented](http://pcolby.github.io/libqtaws/0.1.0/api/annotated.html)
(including the [internal code](http://pcolby.github.io/libqtaws/0.1.0/internal/annotated.html))
and 100% [unit tested](http://pcolby.github.io/libqtaws/0.1.0/coverage/).

Work is now progressing on the SQS client classes - the basics of which are in
place now, but need to be documented and unit tested before I could consider
them complete.

After SQS, other Amazon services (such as SNS, DynamoDN, S3, EC2, etc) will be
added in the order people ask for them.

Of course, if you want to contribute your own classes for access specific AWS
services, please do so!  See the `SqsClient` and related classes for the
patterns to use when adding new AWS service client classes.

## Requirements
### Qt 5.1+
Libqtaws requires Qt 5.1+  The library uses Qt's QMessageAuthenticationCode
class for generating HMAC codes for AWS request signatures, and that class was
first added in Qt 5.1.0.

It is possible to make the library work with Qt 5.0 by backporting
QMessageAuthenticationCode from Qt 5.1 to Qt 5.0, but that is not officially
supported.

## Building
This library supports out-of-source builds (highly recommended), for example:

~~~{.sh}
mkdir -p <tmp-build-dir>
pushd <tmp-build-dir>
qmake -Wall -Wlogic -Wparser CONFIG+=debug_and_release <path-to-cloned-repo>
make # or `nmake` on Windows
make check
popd
~~~

## API Documentation

See the doxygen-generated [API documentation](http://pcolby.github.io/libqtaws/head/api/annotated.html).

There's also [internal documentation](http://pcolby.github.io/libqtaws/head/internal/annotated.html) for those
interested in the internal library implementation.

## Test Coverage

See the [test coverage report](http://pcolby.github.io/libqtaws/head/coverage/).
