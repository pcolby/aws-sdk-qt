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

#include "testsqsaddpermissionrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsaddpermissionrequest.h"
#include "sqs/sqsaddpermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsaddpermissionrequest_p.h"
#endif

#include <QDebug>

Q_DECLARE_METATYPE(SqsAddPermissionRequest::PermissionsMap)

namespace TestSqsAddPermissionRequest_Mocks {

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(QObject * const parent = 0)
        : QNetworkReply(parent) { }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

} using namespace TestSqsAddPermissionRequest_Mocks;

void TestSqsAddPermissionRequest::construct_params_data()
{
    QTest::addColumn<QString>("label");
    QTest::addColumn<SqsAddPermissionRequest::PermissionsMap>("permissions");
    QTest::addColumn<QString>("queueUrl");

    SqsAddPermissionRequest::PermissionsMap permissions;

    QTest::newRow("null")
        << QString()
        << permissions
        << QString();

    permissions.insert(QString::fromLatin1("foo"),
                       SqsAddPermissionRequest::SendMessageAction);
    QTest::newRow("foo")
        << QString::fromLatin1("foo")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz");
}

void TestSqsAddPermissionRequest::construct_params()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);

    const SqsAddPermissionRequest request(label, permissions, queueUrl);

    QCOMPARE(request.label(), label);
    QCOMPARE(request.permissions(), permissions);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsAddPermissionRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsAddPermissionRequest::construct_copy()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);

    const SqsAddPermissionRequest request1(label, permissions, queueUrl);
    QCOMPARE(request1.label(), label);
    QCOMPARE(request1.permissions(), permissions);
    QCOMPARE(request1.queueUrl(), queueUrl);

    const SqsAddPermissionRequest request2(request1);
    QCOMPARE(request2.label(), label);
    QCOMPARE(request2.permissions(), permissions);
    QCOMPARE(request2.queueUrl(), queueUrl);

    QCOMPARE(request1, request2);
}

void TestSqsAddPermissionRequest::construct_default()
{
    SqsAddPermissionRequest request;
    QCOMPARE(request.label(), QString());
    QCOMPARE(request.permissions(), SqsAddPermissionRequest::PermissionsMap());
    QCOMPARE(request.queueUrl(), QString());
}

void TestSqsAddPermissionRequest::isValid_data()
{
    QTest::addColumn<QString>("label");
    QTest::addColumn<SqsAddPermissionRequest::PermissionsMap>("permissions");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<bool>("isValid");

    SqsAddPermissionRequest::PermissionsMap permissions;

    QTest::newRow("null")
        << QString()
        << permissions
        << QString()
        << false;

    permissions.insert(QString::fromLatin1("foo"),
                       SqsAddPermissionRequest::SendMessageAction);
    QTest::newRow("valid")
        << QString::fromLatin1("foo")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz")
        << true;

    QTest::newRow("no label")
        << QString::fromLatin1("")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz")
        << false;

    QTest::newRow("no perms")
        << QString::fromLatin1("foo")
        << SqsAddPermissionRequest::PermissionsMap()
        << QString::fromLatin1("http://example.com/bar/baz")
        << false;

    QTest::newRow("no queueUrl")
        << QString::fromLatin1("foo")
        << permissions
        << QString::fromLatin1("")
        << false;
}

void TestSqsAddPermissionRequest::isValid()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);
    QFETCH(bool, isValid);

    const SqsAddPermissionRequest request(label, permissions, queueUrl);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsAddPermissionRequest::label_data()
{
    isValid_data();
}

void TestSqsAddPermissionRequest::label()
{
    QFETCH(QString, label);
    SqsAddPermissionRequest request;
    QCOMPARE(request.label(), QString());
    request.setLabel(label);
    QCOMPARE(request.label(), label);
}

void TestSqsAddPermissionRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsAddPermissionRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsAddPermissionRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsAddPermissionRequest::permissions_data()
{

}

void TestSqsAddPermissionRequest::permissions()
{
    /// @todo
}

void TestSqsAddPermissionRequest::response()
{
    const SqsAddPermissionRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsAddPermissionResponse"));
    const SqsAddPermissionResponse * const sqsResponse =
        qobject_cast<const SqsAddPermissionResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsAddPermissionRequest::urlQuery_data()
{

}

void TestSqsAddPermissionRequest::urlQuery()
{
    /// @todo
}
#endif
