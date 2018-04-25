/*
    Copyright 2013-2018 Paul Colby

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

#include "testsqscreatequeuerequest.h"

#include "sqs/sqscreatequeuerequest.h"
#include "sqs/sqscreatequeueresponse.h"

#include <QDebug>

Q_DECLARE_METATYPE(SqsRequest::Action)

namespace TestSqsCreateQueueRequest_Mocks {

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

} using namespace TestSqsCreateQueueRequest_Mocks;

void TestSqsCreateQueueRequest::numeric_data()
{
    QTest::addColumn<int>("set");
    QTest::addColumn<int>("expect");

    QTest::newRow("-1024") << -1024 << -1;
    QTest::newRow("-3") << -3 << -1;
    QTest::newRow("-2") << -2 << -1;
    QTest::newRow("-1") << -1 << -1;
    QTest::newRow("0") << 0 << 0;
    QTest::newRow("1") << 1 << 1;
    QTest::newRow("2") << 2 << 2;
    QTest::newRow("3") << 3 << 3;
    QTest::newRow("1024") << 0 << 0;
    QTest::newRow("max") << std::numeric_limits<int>::max() << std::numeric_limits<int>::max();
    QTest::newRow("min") << std::numeric_limits<int>::min() << -1;
}

void TestSqsCreateQueueRequest::construct_queueName_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")  << QString()                  << false;
    QTest::newRow("empty") << QString::fromLatin1("")    << false;
    QTest::newRow("foo")   << QString::fromLatin1("foo") << true;
    QTest::newRow("bar")   << QString::fromLatin1("bar") << true;
    QTest::newRow("baz")   << QString::fromLatin1("baz") << true;
    QTest::newRow("long")     << QString(80, QLatin1Char('z')) << true;
    QTest::newRow("too long") << QString(81, QLatin1Char('z')) << false;
    QTest::newRow("invalid")  << QString::fromLatin1("$$$")    << false;
}

void TestSqsCreateQueueRequest::construct_queueName()
{
    QFETCH(QString, queueName);
    QFETCH(bool, isValid);

    SqsCreateQueueRequest request(queueName);
    QCOMPARE(request.action(), SqsRequest::CreateQueueAction);
    QCOMPARE(request.attributes(), QVariantMap());
    QCOMPARE(request.delaySeconds(), -1);
    QCOMPARE(request.isValid(), isValid);
    QCOMPARE(request.maximumMessageSize(), -1);
    QCOMPARE(request.messageRetentionPeriod(), -1);
    QCOMPARE(request.policy(), QString());
    QCOMPARE(request.queueName(), queueName);
    QCOMPARE(request.receiveMessageWaitTimeSeconds(), -1);
    QCOMPARE(request.visibilityTimeout(), -1);
}

void TestSqsCreateQueueRequest::construct_copy_data()
{
    QTest::addColumn<int>("delaySeconds");
    QTest::addColumn<bool>("isValid");
    QTest::addColumn<int>("maximumMessageSize");
    QTest::addColumn<int>("messageRetentionPeriod");
    QTest::addColumn<QString>("policy");
    QTest::addColumn<QString>("queueName");
    QTest::addColumn<int>("receiveMessageWaitTimeSeconds");
    QTest::addColumn<int>("visibilityTimeout");

    QTest::newRow("null")
        << -1 << false << -1 << -1 << QString() << QString() << -1 << -1;

    QTest::newRow("zero")
            << 0 << false << 0 << 0 << QString::fromLatin1("")
            << QString::fromLatin1("") << 0 << 0;

    QTest::newRow("foo-bar")
            << 123 << true << 456 << 789 << QString::fromLatin1("foo")
            << QString::fromLatin1("bar") << 1024 << 2048;
}

void TestSqsCreateQueueRequest::construct_copy()
{
    QFETCH(int, delaySeconds);
    QFETCH(int, maximumMessageSize);
    QFETCH(int, messageRetentionPeriod);
    QFETCH(QString, policy);
    QFETCH(QString, queueName);
    QFETCH(int, receiveMessageWaitTimeSeconds);
    QFETCH(int, visibilityTimeout);

    SqsCreateQueueRequest request1;
    request1.setDelaySeconds(delaySeconds);
    request1.setMaximumMessageSize(maximumMessageSize);
    request1.setMessageRetentionPeriod(messageRetentionPeriod);
    request1.setPolicy(policy);
    request1.setQueueName(queueName);
    request1.setReceiveMessageWaitTimeSeconds(receiveMessageWaitTimeSeconds);
    request1.setVisibilityTimeout(visibilityTimeout);

    const SqsCreateQueueRequest request2(request1);
    QCOMPARE(request1.action(), request2.action());
    QCOMPARE(request1.delaySeconds(), request2.delaySeconds());
    QCOMPARE(request1.isValid(), request2.isValid());
    QCOMPARE(request1.maximumMessageSize(), request2.maximumMessageSize());
    QCOMPARE(request1.messageRetentionPeriod(), request2.messageRetentionPeriod());
    QCOMPARE(request1.policy(), request2.policy());
    QCOMPARE(request1.queueName(), request2.queueName());
    QCOMPARE(request1.receiveMessageWaitTimeSeconds(), request2.receiveMessageWaitTimeSeconds());
    QCOMPARE(request1.visibilityTimeout(), request2.visibilityTimeout());
}

void TestSqsCreateQueueRequest::construct_default()
{
    SqsCreateQueueRequest request;
    QCOMPARE(request.action(), SqsRequest::CreateQueueAction);
    QCOMPARE(request.attributes(), QVariantMap());
    QCOMPARE(request.delaySeconds(), -1);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.maximumMessageSize(), -1);
    QCOMPARE(request.messageRetentionPeriod(), -1);
    QCOMPARE(request.policy(), QString());
    QCOMPARE(request.queueName(), QString());
    QCOMPARE(request.receiveMessageWaitTimeSeconds(), -1);
    QCOMPARE(request.visibilityTimeout(), -1);
}

void TestSqsCreateQueueRequest::isValid_data()
{
    construct_queueName_data();
}

void TestSqsCreateQueueRequest::isValid()
{
    QFETCH(QString, queueName);
    QFETCH(bool, isValid);
    SqsCreateQueueRequest request(queueName);
    QCOMPARE(request.isValid(), isValid);
    QCOMPARE(request.queueName(), queueName);
}

void TestSqsCreateQueueRequest::attribute_data()
{
    QTest::addColumn<QString>("name");
    QTest::addColumn<QVariant>("value");

    QTest::newRow("null") << QString() << QVariant();
    QTest::newRow("foo") << QString::fromLatin1("foo") << QVariant(1);
    QTest::newRow("bar") << QString::fromLatin1("bar") << QVariant(QLatin1String("2"));
    QTest::newRow("baz") << QString::fromLatin1("baz") << QVariant(3.0);
}

void TestSqsCreateQueueRequest::attribute()
{
    QFETCH(QString, name);
    QFETCH(QVariant, value);

    SqsCreateQueueRequest request;
    QCOMPARE(request.attribute(name), QVariant());

    request.setAttribute(name, value);
    QCOMPARE(request.attribute(name), value);
}

void TestSqsCreateQueueRequest::attributes_data()
{
    QTest::addColumn<QVariantMap>("attributes");

    QVariantMap attributes;
    QTest::newRow("null") << attributes;

    attributes.insert(QLatin1String("foo"), 1);
    QTest::newRow("foo") << attributes;

    attributes.insert(QLatin1String("bar"), QString::fromLatin1("2"));
    QTest::newRow("bar") << attributes;

    attributes.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("baz") << attributes;
}

void TestSqsCreateQueueRequest::attributes()
{
    QFETCH(QVariantMap, attributes);
    SqsCreateQueueRequest request;
    QCOMPARE(request.attributes(), QVariantMap());
    request.setAttributes(attributes);
    QCOMPARE(request.attributes(), attributes);
}

void TestSqsCreateQueueRequest::delaySeconds_data()
{
    numeric_data();
}

void TestSqsCreateQueueRequest::delaySeconds()
{
    QFETCH(int, set);
    QFETCH(int, expect);

    SqsCreateQueueRequest request;
    QCOMPARE(request.delaySeconds(), -1);

    request.setDelaySeconds(set);
    QCOMPARE(request.delaySeconds(), expect);
}

void TestSqsCreateQueueRequest::maximumMessageSize_data()
{
    numeric_data();
}

void TestSqsCreateQueueRequest::maximumMessageSize()
{
    QFETCH(int, set);
    QFETCH(int, expect);

    SqsCreateQueueRequest request;
    QCOMPARE(request.maximumMessageSize(), -1);

    request.setMaximumMessageSize(set);
    QCOMPARE(request.maximumMessageSize(), expect);
}

void TestSqsCreateQueueRequest::messageRetentionPeriod_data()
{
    numeric_data();
}

void TestSqsCreateQueueRequest::messageRetentionPeriod()
{
    QFETCH(int, set);
    QFETCH(int, expect);

    SqsCreateQueueRequest request;
    QCOMPARE(request.messageRetentionPeriod(), -1);

    request.setMessageRetentionPeriod(set);
    QCOMPARE(request.messageRetentionPeriod(), expect);
}

void TestSqsCreateQueueRequest::policy_data()
{
    QTest::addColumn<QString>("policy");
    QTest::newRow("null") << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow("foo") << QString::fromLatin1("{ ... }");
}

void TestSqsCreateQueueRequest::policy()
{
    QFETCH(QString, policy);
    SqsCreateQueueRequest request;
    QCOMPARE(request.policy(), QString());
    request.setPolicy(policy);
    QCOMPARE(request.policy(), policy);
}

void TestSqsCreateQueueRequest::queueName_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::newRow("null") << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow("foo") << QString::fromLatin1("my-awsome-queue-name");
}

void TestSqsCreateQueueRequest::queueName()
{
    QFETCH(QString, queueName);
    SqsCreateQueueRequest request;
    QCOMPARE(request.queueName(), QString());
    request.setQueueName(queueName);
    QCOMPARE(request.queueName(), queueName);
}

void TestSqsCreateQueueRequest::receiveMessageWaitTimeSeconds_data()
{
    numeric_data();
}

void TestSqsCreateQueueRequest::receiveMessageWaitTimeSeconds()
{
    QFETCH(int, set);
    QFETCH(int, expect);

    SqsCreateQueueRequest request;
    QCOMPARE(request.receiveMessageWaitTimeSeconds(), -1);

    request.setReceiveMessageWaitTimeSeconds(set);
    QCOMPARE(request.receiveMessageWaitTimeSeconds(), expect);
}

void TestSqsCreateQueueRequest::visibilityTimeout_data()
{
    numeric_data();
}

void TestSqsCreateQueueRequest::visibilityTimeout()
{
    QFETCH(int, set);
    QFETCH(int, expect);

    SqsCreateQueueRequest request;
    QCOMPARE(request.visibilityTimeout(), -1);

    request.setVisibilityTimeout(set);
    QCOMPARE(request.visibilityTimeout(), expect);
}

void TestSqsCreateQueueRequest::response()
{
    const SqsCreateQueueRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsCreateQueueResponse"));
    const SqsCreateQueueResponse * const sqsResponse =
        qobject_cast<const SqsCreateQueueResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
