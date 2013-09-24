# Libqtaws [![Build Status](https://travis-ci.org/pcolby/libqtaws.png?branch=master)](https://travis-ci.org/pcolby/libqtaws)

Libqtaws is a library for consuming [Amazon Web Services (AWS)](http://aws.amazon.com/) from
[Qt](http://qt-project.org/) applications.

## Requirements
### Qt 5.1
Currently, libqtaws requires Qt 5.1+  This is because the library uses the QMessageAuthenticationCode for generating
HMAC codes for AWS request signatures.

It is possible to make the library work with Qt 5.0 by backporting QMessageAuthenticationCode from Qt 5.1 to Qt 5.0 -
indeed, this is what this project does for [travis-ci](https://travis-ci.org/) support (see (.travis.yml)[.travis.yml]
for example), but that is not officially supported (might become so, if enough people show interest).

Note, the library will soon depend on Qt5's built-in JSON support, so it is unlikely that libqtaws will ever officially
support earlier version of Qt, such as Qt4.8.

## API Documentaion

See the doxygen-generated [API documentation](http://pcolby.github.io/libqtaws/doc/api/annotated.html).

There's also [internal documentation](http://pcolby.github.io/libqtaws/doc/internal/annotated.html) for those
interested in the internal library implementation.

## Test Coverage

See the [test coverage report](http://pcolby.github.io/libqtaws/test/coverage/).
