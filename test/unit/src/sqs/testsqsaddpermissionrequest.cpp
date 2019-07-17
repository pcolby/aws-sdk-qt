/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testsqsaddpermissionrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsaddpermissionrequest.h"
#include "sqs/sqsaddpermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsaddpermissionrequest_p.h"
#endif

#include <QDebug>
#include <QUrlQuery>

Q_DECLARE_METATYPE(SqsAddPermissionRequest::PermissibleActions)
Q_DECLARE_METATYPE(SqsAddPermissionRequest::PermissionsMap)
Q_DECLARE_METATYPE(QUrlQuery)

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

    permissions.insert(QString::fromLatin1("bar"),
                       SqsAddPermissionRequest::SendMessageAction|
                       SqsAddPermissionRequest::ReceiveMessageAction|
                       SqsAddPermissionRequest::DeleteMessageAction|
                       SqsAddPermissionRequest::ChangeMessageVisibilityAction|
                       SqsAddPermissionRequest::GetQueueAttributesAction|
                       SqsAddPermissionRequest::GetQueueUrlAction);
    QTest::newRow("all")
        << QString::fromLatin1("foo-bar")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz");
}

void TestSqsAddPermissionRequest::construct_params()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);

    const SqsAddPermissionRequest request(label, permissions, queueUrl);

    QCOMPARE(request.action(), SqsRequest::AddPermissionAction);
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
    QCOMPARE(request.action(), SqsRequest::AddPermissionAction);
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

void TestSqsAddPermissionRequest::permission_data()
{
    permissions_account_data();
}

void TestSqsAddPermissionRequest::permission()
{
    QFETCH(QString, accountId);
    QFETCH(SqsAddPermissionRequest::PermissibleActions, permissions);

    #define SET_ACCOUNT_PERM(action) request.setPermission(accountId, \
        SqsAddPermissionRequest::action##Action, \
        permissions.testFlag(SqsAddPermissionRequest::action##Action));

    {   // Starting with no permissions.
        SqsAddPermissionRequest request;
        QCOMPARE(request.permissions(accountId), SqsAddPermissionRequest::PermissibleActions());
        SET_ACCOUNT_PERM(SendMessage);
        SET_ACCOUNT_PERM(ReceiveMessage);
        SET_ACCOUNT_PERM(DeleteMessage);
        SET_ACCOUNT_PERM(ChangeMessageVisibility);
        SET_ACCOUNT_PERM(GetQueueAttributes);
        SET_ACCOUNT_PERM(GetQueueUrl);
        QCOMPARE(request.permissions(accountId), permissions);
    }

    {   // Starting with all permissions.
        SqsAddPermissionRequest request;
        request.setPermissions(accountId,
            SqsAddPermissionRequest::PermissibleActions(
               SqsAddPermissionRequest::SendMessageAction|
               SqsAddPermissionRequest::ReceiveMessageAction|
               SqsAddPermissionRequest::DeleteMessageAction|
               SqsAddPermissionRequest::ChangeMessageVisibilityAction|
               SqsAddPermissionRequest::GetQueueAttributesAction|
               SqsAddPermissionRequest::GetQueueUrlAction));
        SET_ACCOUNT_PERM(SendMessage);
        SET_ACCOUNT_PERM(ReceiveMessage);
        SET_ACCOUNT_PERM(DeleteMessage);
        SET_ACCOUNT_PERM(ChangeMessageVisibility);
        SET_ACCOUNT_PERM(GetQueueAttributes);
        SET_ACCOUNT_PERM(GetQueueUrl);
        QCOMPARE(request.permissions(accountId), permissions);
    }

    #undef SET_ACCOUNT_PERM
}

void TestSqsAddPermissionRequest::permissions_account_data()
{
    QTest::addColumn<QString>("accountId");
    QTest::addColumn<SqsAddPermissionRequest::PermissibleActions>("permissions");

    #define NEW_ROW(action) QTest::newRow(#action) << QString::fromLatin1("foo") \
        << SqsAddPermissionRequest::PermissibleActions(SqsAddPermissionRequest::action##Action)
    NEW_ROW(SendMessage);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(DeleteMessage);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    #undef NEW_ROW

    QTest::newRow("all")
        << QString::fromLatin1("bar")
        << SqsAddPermissionRequest::PermissibleActions(
               SqsAddPermissionRequest::SendMessageAction|
               SqsAddPermissionRequest::ReceiveMessageAction|
               SqsAddPermissionRequest::DeleteMessageAction|
               SqsAddPermissionRequest::ChangeMessageVisibilityAction|
               SqsAddPermissionRequest::GetQueueAttributesAction|
               SqsAddPermissionRequest::GetQueueUrlAction);
}

void TestSqsAddPermissionRequest::permissions_account()
{
    QFETCH(QString, accountId);
    QFETCH(SqsAddPermissionRequest::PermissibleActions, permissions);

    SqsAddPermissionRequest request;
    QCOMPARE(request.permissions(accountId), SqsAddPermissionRequest::PermissibleActions());

    request.setPermissions(accountId, permissions);
    QCOMPARE(request.permissions(accountId), permissions);
}

void TestSqsAddPermissionRequest::permissions_data()
{
    construct_params_data();
}

void TestSqsAddPermissionRequest::permissions()
{
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);

    SqsAddPermissionRequest request;
    QCOMPARE(request.permissions(), SqsAddPermissionRequest::PermissionsMap());

    request.setPermissions(permissions);
    QCOMPARE(request.permissions(), permissions);
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
    QTest::addColumn<QString>("label");
    QTest::addColumn<SqsAddPermissionRequest::PermissionsMap>("permissions");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QVariantMap>("parameters");
    QTest::addColumn<QUrlQuery>("expected");

    SqsAddPermissionRequest::PermissionsMap permissions;

    QTest::newRow("null")
        << QString()
        << permissions
        << QString()
        << QVariantMap()
        << QUrlQuery(QLatin1String(
           "Action=AddPermission"
           "&Version=2012-11-05"
           "&Label&QueueUrl"));

    permissions.insert(QString::fromLatin1("foo"),
                       SqsAddPermissionRequest::SendMessageAction);
    QTest::newRow("SendMessage")
        << QString::fromLatin1("foo")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz")
        << QVariantMap()
        << QUrlQuery(QLatin1String(
            "Action=AddPermission"
            "&Version=2012-11-05"
            "&Label=foo"
            "&QueueUrl=http://example.com/bar/baz"
            "&AWSAccountId.member.1=foo"
            "&ActionName.member.1=SendMessage"));

    permissions.insert(QString::fromLatin1("bar"),
                       SqsAddPermissionRequest::SendMessageAction|
                       SqsAddPermissionRequest::ReceiveMessageAction|
                       SqsAddPermissionRequest::DeleteMessageAction|
                       SqsAddPermissionRequest::ChangeMessageVisibilityAction|
                       SqsAddPermissionRequest::GetQueueAttributesAction|
                       SqsAddPermissionRequest::GetQueueUrlAction);
    QTest::newRow("all")
        << QString::fromLatin1("foo-bar")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz")
        << QVariantMap()
        << QUrlQuery(QLatin1String(
            "Action=AddPermission"
            "&Version=2012-11-05"
            "&Label=foo-bar"
            "&QueueUrl=http://example.com/bar/baz"
            "&AWSAccountId.member.1=bar"
            "&ActionName.member.1=SendMessage"
            "&AWSAccountId.member.2=bar"
            "&ActionName.member.2=ReceiveMessage"
            "&AWSAccountId.member.3=bar"
            "&ActionName.member.3=DeleteMessage"
            "&AWSAccountId.member.4=bar"
            "&ActionName.member.4=ChangeMessageVisibility"
            "&AWSAccountId.member.5=bar"
            "&ActionName.member.5=GetQueueAttributes"
            "&AWSAccountId.member.6=bar"
            "&ActionName.member.6=GetQueueUrl"
            "&AWSAccountId.member.7=foo"
            "&ActionName.member.7=SendMessage"));

    QVariantMap parameters;
    parameters.insert(QLatin1String("ActionName.member.1"),   123);
    parameters.insert(QLatin1String("ActionName.member.3"),   456);
    parameters.insert(QLatin1String("AWSAccountId.member.5"), 789);
    parameters.insert(QLatin1String("ActionName.member.6"),   234);
    parameters.insert(QLatin1String("AWSAccountId.member.7"), 567);
    QTest::newRow("obstructions")
        << QString::fromLatin1("foo-bar")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz")
        << parameters
        << QUrlQuery(QLatin1String(
            "Action=AddPermission"
            "&Version=2012-11-05"
            "&AWSAccountId.member.5=789"
            "&AWSAccountId.member.7=567"
            "&ActionName.member.1=123"
            "&ActionName.member.3=456"
            "&ActionName.member.6=234"
            "&AWSAccountId.member.2=bar"
            "&ActionName.member.2=SendMessage"
            "&AWSAccountId.member.4=bar"
            "&ActionName.member.4=ReceiveMessage"
            "&AWSAccountId.member.8=bar"
            "&ActionName.member.8=DeleteMessage"
            "&AWSAccountId.member.9=bar"
            "&ActionName.member.9=ChangeMessageVisibility"
            "&AWSAccountId.member.10=bar"
            "&ActionName.member.10=GetQueueAttributes"
            "&AWSAccountId.member.11=bar"
            "&ActionName.member.11=GetQueueUrl"
            "&AWSAccountId.member.12=foo"
            "&ActionName.member.12=SendMessage"));
}

void TestSqsAddPermissionRequest::urlQuery()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);
    QFETCH(QVariantMap, parameters);
    QFETCH(QUrlQuery, expected);

    SqsAddPermissionRequest request(label, permissions, queueUrl);

    if (!parameters.isEmpty()) {
        request.setParameters(parameters);
    }

    const QUrlQuery urlQuery = request.d_func()->urlQuery();
  //qDebug() << urlQuery.toString(QUrl::FullyEncoded);
    QCOMPARE(urlQuery, expected);
}
#endif
