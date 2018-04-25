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

#include "testsqsremovepermissionrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsremovepermissionrequest.h"
#include "sqs/sqsremovepermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsremovepermissionrequest_p.h"
#endif

#include <QDebug>

namespace TestSqsRemovePermissionRequest_Mocks {

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

} using namespace TestSqsRemovePermissionRequest_Mocks;

void TestSqsRemovePermissionRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("label");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << QString()
        << false;

    QTest::newRow("example")
        << QString::fromLatin1("http://example.com/queue")
        << QString::fromLatin1("let-foo-do-bar")
        << true;
}

void TestSqsRemovePermissionRequest::construct_params()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, label);

    const SqsRemovePermissionRequest request(queueUrl, label);

    QCOMPARE(request.action(), SqsRequest::RemovePermissionAction);
    QCOMPARE(request.queueUrl(), queueUrl);
    QCOMPARE(request.label(), label);
}

void TestSqsRemovePermissionRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsRemovePermissionRequest::construct_copy()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, label);

    const SqsRemovePermissionRequest request1(queueUrl, label);
    QCOMPARE(request1.queueUrl(), queueUrl);
    QCOMPARE(request1.label(), label);

    const SqsRemovePermissionRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);
    QCOMPARE(request2.label(), label);

    QCOMPARE(request1, request2);
}

void TestSqsRemovePermissionRequest::construct_default()
{
    SqsRemovePermissionRequest request;
    QCOMPARE(request.action(), SqsRequest::RemovePermissionAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
    QCOMPARE(request.label(), QString());
}

void TestSqsRemovePermissionRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsRemovePermissionRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, label);
    QFETCH(bool, isValid);

    const SqsRemovePermissionRequest request(queueUrl, label);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsRemovePermissionRequest::label_data()
{
    isValid_data();
}

void TestSqsRemovePermissionRequest::label()
{
    QFETCH(QString, label);
    SqsRemovePermissionRequest request;
    QCOMPARE(request.label(), QString());
    request.setLabel(label);
    QCOMPARE(request.label(), label);
}

void TestSqsRemovePermissionRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsRemovePermissionRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsRemovePermissionRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsRemovePermissionRequest::response()
{
    const SqsRemovePermissionRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsRemovePermissionResponse"));
    const SqsRemovePermissionResponse * const sqsResponse =
        qobject_cast<const SqsRemovePermissionResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
