# Libqtaws
[![Build Status](http://img.shields.io/travis/pcolby/libqtaws/master.svg)](https://travis-ci.org/pcolby/libqtaws)
[![Coverage Status](https://img.shields.io/coveralls/pcolby/libqtaws/v0.1.0.svg)](https://coveralls.io/r/pcolby/libqtaws)
[![GitHub Issues](http://img.shields.io/github/issues/pcolby/libqtaws.svg)](https://github.com/pcolby/libqtaws/issues)
[![GitHub Release](http://img.shields.io/github/release/pcolby/libqtaws.svg)](https://github.com/pcolby/libqtaws/releases/latest)
[![LGPLv3 License](http://img.shields.io/badge/license-LGPLv3-blue.svg)](https://www.gnu.org/licenses/lgpl.html)

Libqtaws is an open-source (LGPL) library for consuming [Amazon Web Services (AWS)](http://aws.amazon.com/) from
[Qt](http://qt-project.org/) applications.

The library is in very early stages of development; only the AWS signature
code and AWS endpoints information has been implemented so far, but what has been implemented is
[100% documented](http://pcolby.github.io/libqtaws/0.1.0/api/annotated.html)
(including the [internal code](http://pcolby.github.io/libqtaws/0.1.0/internal/annotated.html)) and
currently has 100% [unit test line coverage](http://pcolby.github.io/libqtaws/0.1.0/coverage/).

Specific AWS services are being implemented in the order in which they are of interest to me,
but of course, anyone can contribute implementations for any services that are more important to them.
Also, feel free to use the issue tracker to show interest in particular AWS services being implemented.

Next steps are roughly:

1. add Amazon's official V4 signature test suite to the unit tests ([_done_](https://github.com/pcolby/libqtaws/issues/2))
2. implement base AwsService class(es) (_in progress_)
3. SQS (_in progress_)
4. SNS
5. DynamoDB
6. S3, EC2, Elasticache, ..., etc.

## Requirements
### Qt 5.1
Currently, libqtaws requires Qt 5.1+  This is because the library uses Qt's QMessageAuthenticationCode class for
generating HMAC codes for AWS request signatures, and that class was not added until Qt 5.1.0.

It is possible to make the library work with Qt 5.0 by backporting QMessageAuthenticationCode from Qt 5.1 to Qt 5.0 -
indeed, this is what this project does for [travis-ci](https://travis-ci.org/) support (see [.travis.yml](.travis.yml)
for example), but that is not officially supported (might become so, if enough people show interest).

Note, the library will soon depend on Qt5's built-in JSON support, so it is unlikely that libqtaws will ever officially
support earlier version of Qt, such as Qt4.8.

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

See the doxygen-generated [API documentation](http://pcolby.github.io/libqtaws/0.1.0/api/annotated.html).

There's also [internal documentation](http://pcolby.github.io/libqtaws/0.1.0/internal/annotated.html) for those
interested in the internal library implementation.

## Test Coverage

See the [test coverage report](http://pcolby.github.io/libqtaws/0.1.0/coverage/).
