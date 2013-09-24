# Libqtaws [![Build Status](https://travis-ci.org/pcolby/libqtaws.png?branch=master)](https://travis-ci.org/pcolby/libqtaws)

Libqtaws is a library for consuming [Amazon Web Services (AWS)](http://aws.amazon.com/) from
[Qt](http://qt-project.org/) applications.

The library is very early stages of development; only the AWS signature
code and AWS endpoints information has been implemented so far, but what has been implemented is
[100% documented](http://pcolby.github.io/libqtaws/doc/api/annotated.html)
(invluding the [internal code](http://pcolby.github.io/libqtaws/doc/internal/annotated.html)) and
(currently) has 100% [unit test line coverage]((http://pcolby.github.io/libqtaws/test/coverage/).

Specific AWS services are being implemented in the order in which they are of interest to me,
but of course, anyone can contribute implementations for any services that are more important to them.
Also, feel free to use the issue tracker to show interest in particular AWS services being implemented.

Next steps are roughly:

1. add Amazon's official V4 signature test suite to the unit tests
2. implement base AwsService class(es)
3. SQS
4. SNS
5. DynamoDB

## Requirements
### Qt 5.1
Currently, libqtaws requires Qt 5.1+  This is because the library uses Qt's QMessageAuthenticationCode class for
generating HMAC codes for AWS request signatures, and that class was not added until Qt 5.1.0.

It is possible to make the library work with Qt 5.0 by backporting QMessageAuthenticationCode from Qt 5.1 to Qt 5.0 -
indeed, this is what this project does for [travis-ci](https://travis-ci.org/) support (see [.travis.yml](.travis.yml)
for example), but that is not officially supported (might become so, if enough people show interest).

Note, the library will soon depend on Qt5's built-in JSON support, so it is unlikely that libqtaws will ever officially
support earlier version of Qt, such as Qt4.8.

## API Documentaion

See the doxygen-generated [API documentation](http://pcolby.github.io/libqtaws/doc/api/annotated.html).

There's also [internal documentation](http://pcolby.github.io/libqtaws/doc/internal/annotated.html) for those
interested in the internal library implementation.

## Test Coverage

See the [test coverage report](http://pcolby.github.io/libqtaws/test/coverage/).
