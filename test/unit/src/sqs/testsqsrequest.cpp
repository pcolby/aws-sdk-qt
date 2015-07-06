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

#include "testsqsrequest.h"

#include "sqs/sqsrequest.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsrequest_p.h"
#endif

#include <QDebug>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(SqsRequest::Action)

#define SQS_API_VERSION QString::fromLatin1("2012-11-05")

namespace TestSqsRequest_Mocks {

class MockSqsRequest : public SqsRequest {
public:
    MockSqsRequest(const Action action) : SqsRequest(action) { }
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    MockSqsRequest(SqsRequestPrivate *d) : SqsRequest(d) { }
#endif
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply);
        return NULL;
    }
};

} using namespace TestSqsRequest_Mocks;

void TestSqsRequest::construct_action_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    #define NEW_ROW(action) QTest::newRow(#action) << SqsRequest::action##SqsAction
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW
}

void TestSqsRequest::construct_action()
{
    QFETCH(SqsRequest::Action, action);

    MockSqsRequest request(action);
    QCOMPARE(request.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request.action(), action);
    QCOMPARE(request.parameters(), QVariantMap());
}

void TestSqsRequest::construct_copy_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QVariantMap>("parameters");

    #define NEW_ROW(action) QTest::newRow(#action) \
        << SqsRequest::action##SqsAction << QVariantMap();
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW

    QVariantMap parameters;
    parameters.insert(QLatin1String("foo"), 1);
    parameters.insert(QLatin1String("bar"), QLatin1String("2"));
    parameters.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("parameters") << SqsRequest::ListQueuesSqsAction << parameters;
}

void TestSqsRequest::construct_copy()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
    request1.setParameters(parameters);
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
    QCOMPARE(request1.parameters(), parameters);

    MockSqsRequest request2(request1);
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
    QCOMPARE(request2.parameters(), parameters);

    QCOMPARE(request1, request2);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsRequest::construct_d_ptr()
{
    MockSqsRequest temporaryRequest(SqsRequest::ListQueuesSqsAction);
    SqsRequestPrivate * const requestPrivate =
        new SqsRequestPrivate(temporaryRequest.action(), &temporaryRequest);
    MockSqsRequest request(requestPrivate);
    QCOMPARE(request.d_func(), requestPrivate);
}
#endif

void TestSqsRequest::assignment_data()
{
    construct_copy_data();
}

void TestSqsRequest::assignment()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
    request1.setParameters(parameters);
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
    QCOMPARE(request1.parameters(), parameters);

    MockSqsRequest request2(SqsRequest::ListQueuesSqsAction);
    request2 = request1;
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
    QCOMPARE(request2.parameters(), parameters);

    QCOMPARE(request1, request2);
}

void TestSqsRequest::action_data()
{
    construct_action_data();
}

void TestSqsRequest::action()
{
    QFETCH(SqsRequest::Action, action);

    // Setup a mock request that has an action other than the test data action.
    MockSqsRequest request((action == SqsRequest::ListQueuesSqsAction)
        ? SqsRequest::CreateQueueSqsAction : SqsRequest::ListQueuesSqsAction);
    QVERIFY(request.action() != action);

    request.setAction(action);
    QCOMPARE(request.action(), action);
}

void TestSqsRequest::actionString_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QString>("actionString");

    #define NEW_ROW(action) QTest::newRow(#action) \
        << SqsRequest::action##SqsAction << QString::fromLatin1(#action)
    NEW_ROW(AddPermission);
    NEW_ROW(ChangeMessageVisibility);
    NEW_ROW(ChangeMessageVisibilityBatch);
    NEW_ROW(CreateQueue);
    NEW_ROW(DeleteMessage);
    NEW_ROW(DeleteMessageBatch);
    NEW_ROW(DeleteQueue);
    NEW_ROW(GetQueueAttributes);
    NEW_ROW(GetQueueUrl);
    NEW_ROW(ListDeadLetterSourceQueues);
    NEW_ROW(ListQueues);
    NEW_ROW(PurgeQueue);
    NEW_ROW(ReceiveMessage);
    NEW_ROW(RemovePermission);
    NEW_ROW(SendMessage);
    NEW_ROW(SendMessageBatch);
    NEW_ROW(SetQueueAttributes);
    #undef NEW_ROW

    // Invalid actions should result in a null QString.
    QTest::newRow("invalid") << static_cast<SqsRequest::Action>(-1) << QString();
}

void TestSqsRequest::actionString()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QString, actionString);

    MockSqsRequest request(action);
    QCOMPARE(request.action(), action);
    QCOMPARE(request.actionString(), actionString);
}

void TestSqsRequest::apiVersion_data()
{
    QTest::addColumn<QString>("apiVersion");
    QTest::newRow("null") << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow(SQS_API_VERSION.toLocal8Bit()) << SQS_API_VERSION;
    QTest::newRow("foo") << QString::fromLatin1("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
    QTest::newRow("baz") << QString::fromLatin1("baz");
}

void TestSqsRequest::apiVersion()
{
    QFETCH(QString, apiVersion);
    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.apiVersion(), SQS_API_VERSION);
    request.setApiVersion(apiVersion);
    QCOMPARE(request.apiVersion(), apiVersion);
}

void TestSqsRequest::equality_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operationA");
    QTest::addColumn<QNetworkAccessManager::Operation>("operationB");
    QTest::addColumn<SqsRequest::Action>("actionA");
    QTest::addColumn<SqsRequest::Action>("actionB");
    QTest::addColumn<QString>("apiVersionA");
    QTest::addColumn<QString>("apiVersionB");
    QTest::addColumn<QVariantMap>("parametersA");
    QTest::addColumn<QVariantMap>("parametersB");
    QTest::addColumn<bool>("expected");

    QTest::newRow("equal-1")
        << QNetworkAccessManager::GetOperation
        << QNetworkAccessManager::GetOperation
        << SqsRequest::CreateQueueSqsAction
        << SqsRequest::CreateQueueSqsAction
        << SQS_API_VERSION
        << SQS_API_VERSION
        << QVariantMap()
        << QVariantMap()
        << true;

    QVariantMap mapA;
    mapA.insert(QLatin1String("foo"), 123);
    QTest::newRow("equal-2")
        << QNetworkAccessManager::DeleteOperation
        << QNetworkAccessManager::DeleteOperation
        << SqsRequest::ListQueuesSqsAction
        << SqsRequest::ListQueuesSqsAction
        << QString::fromLatin1("foo version")
        << QString::fromLatin1("foo version")
        << mapA
        << mapA
        << true;

    // Operation equality is tested by the parent class, so this tests the fallback.
    QTest::newRow("diff-operation")
        << QNetworkAccessManager::GetOperation
        << QNetworkAccessManager::PutOperation
        << SqsRequest::ListQueuesSqsAction
        << SqsRequest::ListQueuesSqsAction
        << SQS_API_VERSION
        << SQS_API_VERSION
        << mapA
        << mapA
        << false;

    QTest::newRow("diff-action")
        << QNetworkAccessManager::GetOperation
        << QNetworkAccessManager::GetOperation
        << SqsRequest::ListQueuesSqsAction
        << SqsRequest::CreateQueueSqsAction
        << SQS_API_VERSION
        << SQS_API_VERSION
        << mapA
        << mapA
        << false;

    QTest::newRow("diff-apiVersion")
        << QNetworkAccessManager::GetOperation
        << QNetworkAccessManager::GetOperation
        << SqsRequest::ListQueuesSqsAction
        << SqsRequest::ListQueuesSqsAction
        << SQS_API_VERSION
        << QString::fromLatin1("2000-01-01")
        << mapA
        << mapA
        << false;

    QVariantMap mapB = mapA;
    mapB.insert(QLatin1String("bar"), 456.0);
    QTest::newRow("diff-map")
        << QNetworkAccessManager::GetOperation
        << QNetworkAccessManager::GetOperation
        << SqsRequest::ListQueuesSqsAction
        << SqsRequest::ListQueuesSqsAction
        << SQS_API_VERSION
        << SQS_API_VERSION
        << mapA
        << mapB
        << false;
}

void TestSqsRequest::equality()
{
    QFETCH(QNetworkAccessManager::Operation, operationA);
    QFETCH(QNetworkAccessManager::Operation, operationB);
    QFETCH(SqsRequest::Action, actionA);
    QFETCH(SqsRequest::Action, actionB);
    QFETCH(QString, apiVersionA);
    QFETCH(QString, apiVersionB);
    QFETCH(QVariantMap, parametersA);
    QFETCH(QVariantMap, parametersB);
    QFETCH(bool, expected);

    MockSqsRequest requestA(actionA);
    requestA.setOperation(operationA);
    requestA.setApiVersion(apiVersionA);
    requestA.setParameters(parametersA);

    MockSqsRequest requestB(actionB);
    requestB.setOperation(operationB);
    requestB.setApiVersion(apiVersionB);
    requestB.setParameters(parametersB);

    const bool areEqual = (requestA == requestB);
    QCOMPARE(areEqual, expected);
}

void TestSqsRequest::isValidQueueName_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("hyphens")
        << QString::fromLatin1("my-queue-name") << true;

    QTest::newRow("underscored")
        << QString::fromLatin1("my_queue_name") << true;

    QTest::newRow("null")
        << QString() << false;

    QTest::newRow("empty")
        << QString::fromLatin1("") << false;

    QTest::newRow("max length")
        << QString(80, QLatin1Char('a')) << true;

    QTest::newRow("too long")
        << QString(81, QLatin1Char('a')) << false;

    QTest::newRow("invalid char 1")
        << QString::fromLatin1("foo bar") << false;

    QTest::newRow("invalid char 2")
        << QString::fromLatin1("foo$bar") << false;

    QTest::newRow("invalid chars")
        << QString::fromLatin1("a@^%#&^%#^b") << false;
}

void TestSqsRequest::isValidQueueName()
{
    QFETCH(QString, queueName);
    QFETCH(bool, isValid);
    QCOMPARE(SqsRequest::isValidQueueName(queueName), isValid);
}

void TestSqsRequest::clearParameter_data()
{
    QTest::addColumn<QString>("name");
    QTest::addColumn<QVariant>("value");

    QTest::newRow("null") << QString() << QVariant();
    QTest::newRow("empty") << QString::fromLatin1("") << QVariant(QString::fromLatin1(""));
    QTest::newRow("1") << QString::fromLatin1("") << QVariant(QString::fromLatin1("1"));
    QTest::newRow("'2'") << QString::fromLatin1("") << QVariant(QLatin1Char('2'));
    QTest::newRow("3.0") << QString::fromLatin1("") << QVariant(3.0);
}

void TestSqsRequest::clearParameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);      ///< parameter was set.
    QCOMPARE(request.clearParameter(name), 1);     ///< parameter was cleared.
    QCOMPARE(request.clearParameter(name), 0);     ///< parameter didn't exist.
    QCOMPARE(request.parameter(name), QVariant()); ///< parameter doesn't exist.
}

void TestSqsRequest::clearParameters_data()
{
    QTest::addColumn<QVariantMap>("parameters");

    QTest::newRow("empty") << QVariantMap();

    QVariantMap map;
    map.insert(QLatin1String("foo"), 1);
    map.insert(QLatin1String("bar"), QLatin1String("2"));
    map.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("foo-bar-baz") << map;
}

void TestSqsRequest::clearParameters()
{
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameters(), QVariantMap());

    request.setParameters(parameters);
    QCOMPARE(request.parameters(), parameters);

    request.clearParameters();
    QCOMPARE(request.parameters(), QVariantMap());
}

void TestSqsRequest::parameter_data()
{
    clearParameter_data();
}

void TestSqsRequest::parameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameter(name), QVariant());
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);
}

void TestSqsRequest::parameters_data()
{
    clearParameters_data();
}

void TestSqsRequest::parameters()
{
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameters(), QVariantMap());

    request.setParameters(parameters);
    QCOMPARE(request.parameters(), parameters);
}

void TestSqsRequest::setParameter_data()
{
    clearParameter_data();
}

void TestSqsRequest::setParameter()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameter(name), QVariant());
    request.setParameter(name, value);
    QCOMPARE(request.parameter(name), value);
}

void TestSqsRequest::setParameters_data()
{
    clearParameters_data();
}

void TestSqsRequest::setParameters()
{
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request(SqsRequest::ListQueuesSqsAction);
    QCOMPARE(request.parameters(), QVariantMap());

    request.setParameters(parameters);
    QCOMPARE(request.parameters(), parameters);
}

void TestSqsRequest::unsignedRequest_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QString>("apiVersion");
    QTest::addColumn<QVariantMap>("parameters");
    QTest::addColumn<QUrl>("endpoint");
    QTest::addColumn<QNetworkRequest>("expected");

    QTest::newRow("null")
        << SqsRequest::ListQueuesSqsAction
        << SQS_API_VERSION
        << QVariantMap()
        << QUrl()
        << QNetworkRequest(QUrl(QLatin1String("?Action=ListQueues&Version=2012-11-05")));

    QVariantMap map;
    map.insert(QLatin1String("foo"), 1);
    map.insert(QLatin1String("bar"), QLatin1String("2"));
    map.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("simple")
        << SqsRequest::ChangeMessageVisibilitySqsAction
        << QString::fromLatin1("not-a-valid-api-version")
        << map
        << QUrl(QLatin1String("https://example.com/some/path"))
        << QNetworkRequest(QUrl(QLatin1String(
           "https://example.com/some/path"
           "?Action=ChangeMessageVisibility"
           "&Version=not-a-valid-api-version"
           "&bar=2"
           "&baz=3"
           "&foo=1")));

    QVariantMap childMap;
    childMap.insert(QLatin1String("qux"),  123);
    childMap.insert(QLatin1String("quux"), QLatin1String("abc"));
    childMap.insert(QLatin1String("corge"), 456.789);
    map.insert(QLatin1String("corge;index:%1;value:%2"), childMap);
    QTest::newRow("complex")
        << SqsRequest::DeleteMessageSqsAction
        << SQS_API_VERSION
        << map
        << QUrl(QLatin1String("http://www.example.com/some/other/path"))
        << QNetworkRequest(QUrl(QLatin1String(
            "http://www.example.com/some/other/path"
            "?Action=DeleteMessage"
            "&Version=2012-11-05"
            "&bar=2"
            "&baz=3"
            "&corge;index:1;value:Name=corge"
            "&corge;index:1;value:Value=456.789"
            "&corge;index:2;value:Name=quux"
            "&corge;index:2;value:Value=abc"
            "&corge;index:3;value:Name=qux"
            "&corge;index:3;value:Value=123"
            "&foo=1")));
}

void TestSqsRequest::unsignedRequest()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QString, apiVersion);
    QFETCH(QVariantMap, parameters);
    QFETCH(QUrl, endpoint);
    QFETCH(QNetworkRequest, expected);

    MockSqsRequest request(action);
    request.setApiVersion(apiVersion);
    request.setParameters(parameters);

    const QNetworkRequest unsignedRequest = request.unsignedRequest(endpoint);
    QCOMPARE(unsignedRequest.url(), expected.url()); // Helps with debugging.
    QCOMPARE(unsignedRequest, expected);             // The real test.
}
