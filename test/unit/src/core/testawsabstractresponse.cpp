/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testawsabstractresponse.h"

#include "core/awsabstractresponse.h"
#include "core/awsabstractresponse_p.h"

namespace TestAwsAbstractResponse_Mocks {

// Bare minimum concrete mock class.
class MockResponse : public AwsAbstractResponse {
public:
    MockResponse() : AwsAbstractResponse() { }
    MockResponse(QObject * const parent) : AwsAbstractResponse(parent) { }
    MockResponse(AwsAbstractResponsePrivate * const d, QObject * const parent)
        : AwsAbstractResponse(d, parent) { }
    virtual bool isValid() const { return false; }
protected:
    virtual void parseFailure(QIODevice &response) { Q_UNUSED(response); }
    virtual void parseSuccess(QIODevice &response) { Q_UNUSED(response); }
};

} using namespace TestAwsAbstractResponse_Mocks;

void TestAwsAbstractResponse::construct()
{
    {   // Verify the default parent argument is NULL.
        MockResponse response;
        QCOMPARE(response.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockResponse response(this);
        QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractResponse::construct_d_ptr()
{
    MockResponse temporaryResponse;
    AwsAbstractResponsePrivate * const responsePrivate =
        new AwsAbstractResponsePrivate(&temporaryResponse);
    MockResponse response(responsePrivate, this);
    QCOMPARE(response.d_func(), responsePrivate);
    QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractResponse::errorString_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::errorString()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::hasError_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::hasError()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::isValid_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::isValid()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::networkError_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::networkError()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::xmlParseError_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::xmlParseError()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::xmlParseErrorString_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::xmlParseErrorString()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::toVariant_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::toVariant()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::isSuccess_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::isSuccess()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::setReply_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::setReply()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::setXmlError_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::setXmlError()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::parse_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::parse()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

void TestAwsAbstractResponse::replyFinished_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractResponse::replyFinished()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}
