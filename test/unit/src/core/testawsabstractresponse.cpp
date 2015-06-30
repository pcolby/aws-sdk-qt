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
protected:
    virtual void parseFailure(QIODevice &response) { Q_UNUSED(response); }
    virtual void parseSuccess(QIODevice &response) { Q_UNUSED(response); }
};

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(const NetworkError error, const QString &errorString,
                     QObject * const parent = 0)
        : QNetworkReply(parent) { setError(error, errorString);}
    void setAttribute(const QNetworkRequest::Attribute code, const QVariant &value)
    {
        QNetworkReply::setAttribute(code, value);
    }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
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
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<QString>("expectedErrorString");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << QString();

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << QString::fromLatin1("mock connection refused");

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << QString::fromLatin1("mock error");

    // Network errors take precedence over XML errors.
    QTest::newRow("network+xml")
        << QNetworkReply::InternalServerError
        << QString::fromLatin1("mock internal server error")
        << QString::fromLatin1("mock XML error")
        << QString::fromLatin1("mock internal server error");
}

void TestAwsAbstractResponse::errorString()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(QString, expectedErrorString);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.errorString(), expectedErrorString);
}

void TestAwsAbstractResponse::hasError_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<bool>("hasError");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << false;

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << true;

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << true;

    QTest::newRow("network+xml")
        << QNetworkReply::InternalServerError
        << QString::fromLatin1("mock internal server error")
        << QString::fromLatin1("mock XML error")
        << true;
}

void TestAwsAbstractResponse::hasError()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(bool, hasError);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.hasError(), hasError);
}

void TestAwsAbstractResponse::isValid_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<QString>("networkErrorString");
    QTest::addColumn<QString>("xmlErrorString");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("noerror")
        << QNetworkReply::NoError << QString() << QString() << true;

    QTest::newRow("network")
        << QNetworkReply::ConnectionRefusedError
        << QString::fromLatin1("mock connection refused")
        << QString()
        << false;

    QTest::newRow("xml error")
        << QNetworkReply::NoError << QString()
        << QString::fromLatin1("mock error")
        << false;

    QTest::newRow("network+xml")
        << QNetworkReply::InternalServerError
        << QString::fromLatin1("mock internal server error")
        << QString::fromLatin1("mock XML error")
        << false;
}

void TestAwsAbstractResponse::isValid()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(QString, networkErrorString);
    QFETCH(QString, xmlErrorString);
    QFETCH(bool, isValid);

    MockResponse response;

    MockNetworkReply reply(networkError, networkErrorString);
    response.setReply(&reply);

    if (!xmlErrorString.isNull()) {
        QXmlStreamReader xml;
        xml.raiseError(xmlErrorString);
        response.setXmlError(xml);
    }

    QCOMPARE(response.isValid(), isValid);
}

void TestAwsAbstractResponse::networkError_data()
{
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");

    #define NEW_ROW(error) QTest::newRow(#error) << QNetworkReply::error;
    NEW_ROW(NoError);
    NEW_ROW(ConnectionRefusedError);
    NEW_ROW(RemoteHostClosedError);
    NEW_ROW(HostNotFoundError);
    NEW_ROW(TimeoutError);
    NEW_ROW(OperationCanceledError);
    NEW_ROW(SslHandshakeFailedError);
    NEW_ROW(TemporaryNetworkFailureError);
    NEW_ROW(NetworkSessionFailedError);
    NEW_ROW(BackgroundRequestNotAllowedError);
    NEW_ROW(UnknownNetworkError);
    NEW_ROW(ProxyConnectionRefusedError);
    NEW_ROW(ProxyConnectionClosedError);
    NEW_ROW(ProxyNotFoundError);
    NEW_ROW(ProxyTimeoutError);
    NEW_ROW(ProxyAuthenticationRequiredError);
    NEW_ROW(UnknownProxyError);
    NEW_ROW(ContentAccessDenied);
    NEW_ROW(ContentOperationNotPermittedError);
    NEW_ROW(ContentNotFoundError);
    NEW_ROW(AuthenticationRequiredError);
    NEW_ROW(ContentReSendError);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROW(ContentConflictError);
    NEW_ROW(ContentGoneError);
#endif
    NEW_ROW(UnknownContentError);
    NEW_ROW(ProtocolUnknownError);
    NEW_ROW(ProtocolInvalidOperationError);
    NEW_ROW(ProtocolFailure);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROW(InternalServerError);
    NEW_ROW(OperationNotImplementedError);
    NEW_ROW(ServiceUnavailableError);
    NEW_ROW(UnknownServerError);
#endif
    #undef NEW_ROW
}

void TestAwsAbstractResponse::networkError()
{
    QFETCH(QNetworkReply::NetworkError, networkError);

    // There should be no errors by default.
    MockResponse response;
    QCOMPARE(response.networkError(), QNetworkReply::NoError);

    MockNetworkReply reply(networkError, QString());
    response.setReply(&reply);
    QCOMPARE(response.networkError(), networkError);
}

void TestAwsAbstractResponse::xmlParseError_data()
{
    QTest::addColumn<QString>("xmlErrorString");
    QTest::newRow("noerror") << QString();
    QTest::newRow("error")   << QString::fromLatin1("mock XML error");
}

void TestAwsAbstractResponse::xmlParseError()
{
    QFETCH(QString, xmlErrorString);
    MockResponse response;
    QCOMPARE(response.xmlParseError(), QXmlStreamReader::NoError);

    QXmlStreamReader xml;
    if (!xmlErrorString.isNull()) {
        xml.raiseError(xmlErrorString);
    }
    response.setXmlError(xml);

    QCOMPARE(response.xmlParseError(),
        xmlErrorString.isNull() ? QXmlStreamReader::NoError : QXmlStreamReader::CustomError);
}

void TestAwsAbstractResponse::xmlParseErrorString_data()
{
    xmlParseError_data();
}

void TestAwsAbstractResponse::xmlParseErrorString()
{
    QFETCH(QString, xmlErrorString);
    MockResponse response;
    QCOMPARE(response.xmlParseErrorString(), QString());

    QXmlStreamReader xml;
    if (!xmlErrorString.isNull()) {
        xml.raiseError(xmlErrorString);
    }
    response.setXmlError(xml);

    QCOMPARE(response.xmlParseErrorString(), xmlErrorString);
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
    QTest::addColumn<QNetworkReply::NetworkError>("networkError");
    QTest::addColumn<int>("httpStatus");
    QTest::addColumn<bool>("isSuccess");

    QTest::newRow("NoError") << QNetworkReply::NoError <<   0 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError <<  99 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 100 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 101 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 199 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 200 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 201 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 299 << true; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 300 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 301 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 399 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 400 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 401 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 499 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 500 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 501 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 599 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 600 << false; \
    QTest::newRow("NoError") << QNetworkReply::NoError << 999 << false;

    #define NEW_ROWS(error) \
        QTest::newRow(#error) << QNetworkReply::error <<   0 << false; \
        QTest::newRow(#error) << QNetworkReply::error <<  99 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 100 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 101 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 199 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 200 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 201 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 299 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 300 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 301 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 399 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 400 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 401 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 499 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 500 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 501 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 599 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 600 << false; \
        QTest::newRow(#error) << QNetworkReply::error << 999 << false;
  //NEW_ROWS(NoError);
    NEW_ROWS(ConnectionRefusedError);
    NEW_ROWS(RemoteHostClosedError);
    NEW_ROWS(HostNotFoundError);
    NEW_ROWS(TimeoutError);
    NEW_ROWS(OperationCanceledError);
    NEW_ROWS(SslHandshakeFailedError);
    NEW_ROWS(TemporaryNetworkFailureError);
    NEW_ROWS(NetworkSessionFailedError);
    NEW_ROWS(BackgroundRequestNotAllowedError);
    NEW_ROWS(UnknownNetworkError);
    NEW_ROWS(ProxyConnectionRefusedError);
    NEW_ROWS(ProxyConnectionClosedError);
    NEW_ROWS(ProxyNotFoundError);
    NEW_ROWS(ProxyTimeoutError);
    NEW_ROWS(ProxyAuthenticationRequiredError);
    NEW_ROWS(UnknownProxyError);
    NEW_ROWS(ContentAccessDenied);
    NEW_ROWS(ContentOperationNotPermittedError);
    NEW_ROWS(ContentNotFoundError);
    NEW_ROWS(AuthenticationRequiredError);
    NEW_ROWS(ContentReSendError);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROWS(ContentConflictError);
    NEW_ROWS(ContentGoneError);
#endif
    NEW_ROWS(UnknownContentError);
    NEW_ROWS(ProtocolUnknownError);
    NEW_ROWS(ProtocolInvalidOperationError);
    NEW_ROWS(ProtocolFailure);
#if QT_VERSION >= QT_VERSION_CHECK(5, 3, 0)
    NEW_ROWS(InternalServerError);
    NEW_ROWS(OperationNotImplementedError);
    NEW_ROWS(ServiceUnavailableError);
    NEW_ROWS(UnknownServerError);
#endif
    #undef NEW_ROWS
}

void TestAwsAbstractResponse::isSuccess()
{
    QFETCH(QNetworkReply::NetworkError, networkError);
    QFETCH(int, httpStatus);
    QFETCH(bool, isSuccess);

    MockNetworkReply reply(networkError, QString());
    reply.setAttribute(QNetworkRequest::HttpStatusCodeAttribute, httpStatus);

    MockResponse response;
    QCOMPARE(response.isSuccess(&reply), isSuccess);
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
