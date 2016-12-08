# Libqtaws

[![Join the chat at https://gitter.im/pcolby/libqtaws](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/pcolby/libqtaws?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
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

Work then progressed for the SQS client classes - the basics of which are in
place now (see the [0.2.0 pre-release](https://github.com/pcolby/libqtaws/releases/tag/v0.2.0)),
however that work was put on hold when Amazon released their official
[AWS SDK for C++](https://github.com/aws/aws-sdk-cpp "aws-sdk-cpp"), while this
project re-evaluated its value proposition, as well as a potential shift to
becoming a light Qt-based wrapper for Amazon's SDK (which was not deemed a good
fit in the end).

However, now that Amazon has made public the API descriptions used to
generate most of the C++ SDK, effort is now being put into a Qt-based code
generator that will create the bulk of the service client and model classes from
those API descriptions.

Note that the API descriptions do not cover things like the signature, endpoint
and region classes, which is where the bulk of the development effort has been
to date, making all the investment in this project so far still completely
worthwhile :)

## Requirements
### Qt 5.1+
Libqtaws requires Qt 5.1 or later, as the library makes use of Qt's
QMessageAuthenticationCode class for generating HMAC codes for AWS request
signatures, and that class was first added in Qt 5.1.0.

Backporting QMessageAuthenticationCode to Qt 5.0 is [relatively simple](
https://github.com/pcolby/libqtaws/blob/196b5cd5e571d6883d288705234770a5e606d1f0/.travis.yml#L34),
but outside the scope of this project.

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
