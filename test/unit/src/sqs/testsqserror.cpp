/*
    Copyright 2013-2016 Paul Colby

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

#include "testsqserror.h"

#include "sqs/sqserror.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqserror_p.h"
#endif

#include <QDebug>
#include <QXmlStreamReader>

Q_DECLARE_METATYPE(SqsError::ErrorCode)
Q_DECLARE_METATYPE(SqsError::ErrorType)

namespace TestSqsError_Mocks {

} using namespace TestSqsError_Mocks;

void TestSqsError::construct_default()
{
    const SqsError error;
    QCOMPARE(error.code(), SqsError::OtherError);
    QCOMPARE(error.detail(), QVariantMap());
    QCOMPARE(error.message(), QString());
    QCOMPARE(error.rawCode(), QString());
    QCOMPARE(error.rawType(), QString());
    QCOMPARE(error.type(), SqsError::OtherType);
}

void TestSqsError::construct_parse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<SqsError::ErrorCode>("code");
    QTest::addColumn<QVariantMap>("detail");
    QTest::addColumn<QString>("message");
    QTest::addColumn<QString>("rawCode");
    QTest::addColumn<QString>("rawType");
    QTest::addColumn<SqsError::ErrorType>("type");

    QTest::newRow("AccessDenied")
        << QByteArray(
            "<Error>"
                "<Type>Sender</Type>"
                "<Code>AccessDenied</Code>"
                "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
                "<Detail/>"
            "</Error>")
        << SqsError::AccessDenied
        << QVariantMap()
        << QString::fromLatin1("Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.")
        << QString::fromLatin1("AccessDenied")
        << QString::fromLatin1("Sender")
        << SqsError::SenderType;

    QTest::newRow("foo-bar-baz")
        << QByteArray(
            "<Error>"
                "<Type>Foo</Type>"
                "<Code>Bar</Code>"
                "<Message>This is just some silly, made up error</Message>"
                "<Detail/>"
                "<superfluous>this element ought to be ignored</superfluous>"
            "</Error>")
        << SqsError::OtherError
        << QVariantMap()
        << QString::fromLatin1("This is just some silly, made up error")
        << QString::fromLatin1("Bar")
        << QString::fromLatin1("Foo")
        << SqsError::OtherType;

    QTest::newRow("empty")
        << QByteArray("<Error/>")
        << SqsError::OtherError
        << QVariantMap()
        << QString()
        << QString()
        << QString()
        << SqsError::OtherType;
}

void TestSqsError::construct_parse()
{
    QFETCH(QByteArray, xml);
    QFETCH(SqsError::ErrorCode, code);
    QFETCH(QVariantMap, detail);
    QFETCH(QString, message);
    QFETCH(QString, rawCode);
    QFETCH(QString, rawType);
    QFETCH(SqsError::ErrorType, type);

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    const SqsError error(reader);

    QCOMPARE(error.code(), code);
    QCOMPARE(error.detail(), detail);
    QCOMPARE(error.message(), message);
    QCOMPARE(error.rawCode(), rawCode);
    QCOMPARE(error.rawType(), rawType);
    QCOMPARE(error.type(), type);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsError::construct_d_ptr()
{
    SqsError temporaryError;
    SqsErrorPrivate * const errorPrivate =
        new SqsErrorPrivate(&temporaryError);
    SqsError error(errorPrivate);
    QCOMPARE(error.d_func(), errorPrivate);
}
#endif

void TestSqsError::construct_copy_data()
{
    construct_parse_data();
}

void TestSqsError::construct_copy()
{
    QFETCH(QByteArray, xml);
    QFETCH(SqsError::ErrorCode, code);
    QFETCH(QVariantMap, detail);
    QFETCH(QString, message);
    QFETCH(QString, rawCode);
    QFETCH(QString, rawType);
    QFETCH(SqsError::ErrorType, type);

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    const SqsError error1(reader);
    QCOMPARE(error1.code(), code);
    QCOMPARE(error1.detail(), detail);
    QCOMPARE(error1.message(), message);
    QCOMPARE(error1.rawCode(), rawCode);
    QCOMPARE(error1.rawType(), rawType);
    QCOMPARE(error1.type(), type);

    const SqsError error2(error1);
    QCOMPARE(error2.code(), code);
    QCOMPARE(error2.detail(), detail);
    QCOMPARE(error2.message(), message);
    QCOMPARE(error2.rawCode(), rawCode);
    QCOMPARE(error2.rawType(), rawType);
    QCOMPARE(error2.type(), type);
}

void TestSqsError::assign_data()
{
    construct_parse_data();
}

void TestSqsError::assign()
{
    QFETCH(QByteArray, xml);
    QFETCH(SqsError::ErrorCode, code);
    QFETCH(QVariantMap, detail);
    QFETCH(QString, message);
    QFETCH(QString, rawCode);
    QFETCH(QString, rawType);
    QFETCH(SqsError::ErrorType, type);

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    const SqsError error1(reader);
    QCOMPARE(error1.code(), code);
    QCOMPARE(error1.detail(), detail);
    QCOMPARE(error1.message(), message);
    QCOMPARE(error1.rawCode(), rawCode);
    QCOMPARE(error1.rawType(), rawType);
    QCOMPARE(error1.type(), type);

    SqsError error2;
    error2 = error1;
    QCOMPARE(error2.code(), code);
    QCOMPARE(error2.detail(), detail);
    QCOMPARE(error2.message(), message);
    QCOMPARE(error2.rawCode(), rawCode);
    QCOMPARE(error2.rawType(), rawType);
    QCOMPARE(error2.type(), type);
}

void TestSqsError::equality_data()
{
    QTest::addColumn<QByteArray>("xmlA");
    QTest::addColumn<QByteArray>("xmlB");
    QTest::addColumn<bool>("expected");

    const QByteArray accessDenied(
        "<Error>"
            "<Type>Sender</Type>"
            "<Code>AccessDenied</Code>"
            "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
            "<Detail/>"
        "</Error>");

    QTest::newRow("identical") << accessDenied << accessDenied << true;

    QTest::newRow("trivial differences")
        << accessDenied
        << QByteArray(
           "<Error>  ignored"
               "<Type>Sender</Type> foo"
               "bar <Code>AccessDenied</Code>"
               "<Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>"
               "<baz>ignore me</baz>"
               "<Detail/>"
           "</Error>")
        << true;

    QTest::newRow("different")
        << accessDenied
        << QByteArray(
           "<Error>"
               "<Type>Reciever</Type>"
               "<Code>AccessDenied</Code>"
               "<Message>This is not the same error message.</Message>"
               "<Detail/>"
           "</Error>")
        << false;
}

void TestSqsError::equality()
{
    QFETCH(QByteArray, xmlA);
    QFETCH(QByteArray, xmlB);
    QFETCH(bool, expected);

    QXmlStreamReader readerA(xmlA);
    QXmlStreamReader readerB(xmlB);

    QVERIFY(readerA.readNextStartElement());
    QVERIFY(readerB.readNextStartElement());

    SqsError errorA(readerA);
    SqsError errorB(readerB);

    const bool areEqual = (errorA == errorB);
    QCOMPARE(areEqual, expected);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsError::parse_data()
{
    construct_parse_data();
}

void TestSqsError::parse()
{
    QFETCH(QByteArray, xml);
    QFETCH(SqsError::ErrorCode, code);
    QFETCH(QVariantMap, detail);
    QFETCH(QString, message);
    QFETCH(QString, rawCode);
    QFETCH(QString, rawType);
    QFETCH(SqsError::ErrorType, type);

    QXmlStreamReader reader(xml);
    QVERIFY(reader.readNextStartElement());
    SqsError error;
    error.d_func()->parse(reader);

    QCOMPARE(error.code(), code);
    QCOMPARE(error.detail(), detail);
    QCOMPARE(error.message(), message);
    QCOMPARE(error.rawCode(), rawCode);
    QCOMPARE(error.rawType(), rawType);
    QCOMPARE(error.type(), type);
}

void TestSqsError::codeFromString_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<SqsError::ErrorCode>("code");

    // Valid code strings.
    #define NEW_ROW(code) QTest::newRow(#code) << QString::fromLatin1(#code) << SqsError::code
    NEW_ROW(AccessDenied);
    NEW_ROW(IncompleteSignature);
    NEW_ROW(InternalFailure);
    NEW_ROW(InvalidAction);
    NEW_ROW(InvalidClientTokenId);
    NEW_ROW(InvalidParameterCombination);
    NEW_ROW(InvalidParameterValue);
    NEW_ROW(InvalidQueryParameter);
    NEW_ROW(MalformedQueryString);
    NEW_ROW(MissingAction);
    NEW_ROW(MissingAuthenticationToken);
    NEW_ROW(MissingParameter);
    NEW_ROW(OptInRequired);
    NEW_ROW(RequestExpired);
    NEW_ROW(ServiceUnavailable);
    NEW_ROW(Throttling);
    NEW_ROW(ValidationError);
    #undef NEW_ROW

    // Invalid codes.
    #define NEW_ROW(code) QTest::newRow(#code) << QString::fromLatin1(#code) << SqsError::OtherError
    NEW_ROW(foo);
    NEW_ROW(bar);
    NEW_ROW(baz);
    #undef NEW_ROW
}

void TestSqsError::codeFromString()
{
    QFETCH(QString, string);
    QFETCH(SqsError::ErrorCode, code);
    QCOMPARE(SqsErrorPrivate::codeFromString(string), code);
}

void TestSqsError::typeFromString_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<SqsError::ErrorType>("type");

    // Valid type strings.
    #define NEW_ROW(type) QTest::newRow(#type) << QString::fromLatin1(#type) << SqsError::type##Type
    NEW_ROW(Receiver);
    NEW_ROW(Sender);
    #undef NEW_ROW

    // Invalid types.
    #define NEW_ROW(type) QTest::newRow(#type) << QString::fromLatin1(#type) << SqsError::OtherType
    NEW_ROW(foo);
    NEW_ROW(bar);
    NEW_ROW(baz);
    #undef NEW_ROW
}

void TestSqsError::typeFromString()
{
    QFETCH(QString, string);
    QFETCH(SqsError::ErrorType, type);
    QCOMPARE(SqsErrorPrivate::typeFromString(string), type);
}
#endif
