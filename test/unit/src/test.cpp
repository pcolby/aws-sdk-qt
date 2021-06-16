/*
    Copyright 2013-2021 Paul Colby

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

#include "core/testawsabstractclient.h"
#include "core/testawsabstractcredentials.h"
#include "core/testawsabstractrequest.h"
#include "core/testawsabstractresponse.h"
#include "core/testawsabstractsignature.h"
#include "core/testawsanonymouscredentials.h"
#include "core/testawsbasiccredentials.h"
#include "core/testawsendpoint.h"
#include "core/testawsregion.h"
#include "core/testawssignaturev0.h"
#include "core/testawssignaturev1.h"
#include "core/testawssignaturev2.h"
#include "core/testawssignaturev3.h"
#include "core/testawssignaturev4.h"
#include "sqs/testsqsaddpermissionrequest.h"
#include "sqs/testsqsaddpermissionresponse.h"
#include "sqs/testsqschangemessagevisibilitybatchrequest.h"
#include "sqs/testsqschangemessagevisibilitybatchresponse.h"
#include "sqs/testsqschangemessagevisibilityrequest.h"
#include "sqs/testsqschangemessagevisibilityresponse.h"
#include "sqs/testsqsclient.h"
#include "sqs/testsqscreatequeuerequest.h"
#include "sqs/testsqscreatequeueresponse.h"
#include "sqs/testsqsdeletemessagebatchrequest.h"
#include "sqs/testsqsdeletemessagebatchresponse.h"
#include "sqs/testsqsdeletemessagerequest.h"
#include "sqs/testsqsdeletemessageresponse.h"
#include "sqs/testsqsdeletequeuerequest.h"
#include "sqs/testsqsdeletequeueresponse.h"
#include "sqs/testsqserror.h"
#include "sqs/testsqsgetqueueattributesrequest.h"
#include "sqs/testsqsgetqueueattributesresponse.h"
#include "sqs/testsqsgetqueueurlrequest.h"
#include "sqs/testsqsgetqueueurlresponse.h"
#include "sqs/testsqslistdeadlettersourcequeuesrequest.h"
#include "sqs/testsqslistdeadlettersourcequeuesresponse.h"
#include "sqs/testsqslistqueuesrequest.h"
#include "sqs/testsqslistqueuesresponse.h"
#include "sqs/testsqspurgequeuerequest.h"
#include "sqs/testsqspurgequeueresponse.h"
#include "sqs/testsqsreceivemessagerequest.h"
#include "sqs/testsqsreceivemessageresponse.h"
#include "sqs/testsqsremovepermissionrequest.h"
#include "sqs/testsqsremovepermissionresponse.h"
#include "sqs/testsqsrequest.h"
#include "sqs/testsqsresponse.h"
#include "sqs/testsqssendmessagebatchrequest.h"
#include "sqs/testsqssendmessagebatchresponse.h"
#include "sqs/testsqssendmessagerequest.h"
#include "sqs/testsqssendmessageresponse.h"
#include "sqs/testsqssetqueueattributesrequest.h"
#include "sqs/testsqssetqueueattributesresponse.h"

#include <QTest>

#include <stdio.h>

typedef QObject * (*ObjectConstructor)();

class ObjectFactory : public QMap<QByteArray, ObjectConstructor> {
public:
    template<class T> void registerClass()
    {
        insert(T::staticMetaObject.className(), &objectConstructor<T>);
    }

    template<class T> T * createObject(const QByteArray &className) const
    {
        ObjectConstructor constructor = value(className);
        return (constructor == NULL) ? NULL : (*constructor)();
    }

private:
    template<class T> static QObject * objectConstructor()
    {
        return new T();
    }
};

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    app.setAttribute(Qt::AA_Use96Dpi, true);

    // Setup our tests factory object.
    ObjectFactory testFactory;
    testFactory.registerClass<TestAwsAbstractClient>();
    testFactory.registerClass<TestAwsAbstractCredentials>();
    testFactory.registerClass<TestAwsAbstractRequest>();
    testFactory.registerClass<TestAwsAbstractResponse>();
    testFactory.registerClass<TestAwsAbstractSignature>();
    testFactory.registerClass<TestAwsAnonymousCredentials>();
    testFactory.registerClass<TestAwsBasicCredentials>();
    testFactory.registerClass<TestAwsEndpoint>();
    testFactory.registerClass<TestAwsRegion>();
    testFactory.registerClass<TestAwsSignatureV0>();
    testFactory.registerClass<TestAwsSignatureV1>();
    testFactory.registerClass<TestAwsSignatureV2>();
    testFactory.registerClass<TestAwsSignatureV3>();
    testFactory.registerClass<TestAwsSignatureV4>();
    testFactory.registerClass<TestSqsAddPermissionRequest>();
    testFactory.registerClass<TestSqsAddPermissionResponse>();
    testFactory.registerClass<TestSqsChangeMessageVisibilityBatchRequest>();
    testFactory.registerClass<TestSqsChangeMessageVisibilityBatchResponse>();
    testFactory.registerClass<TestSqsChangeMessageVisibilityRequest>();
    testFactory.registerClass<TestSqsChangeMessageVisibilityResponse>();
    testFactory.registerClass<TestSqsClient>();
    testFactory.registerClass<TestSqsCreateQueueRequest>();
    testFactory.registerClass<TestSqsCreateQueueResponse>();
    testFactory.registerClass<TestSqsDeleteMessageBatchRequest>();
    testFactory.registerClass<TestSqsDeleteMessageBatchResponse>();
    testFactory.registerClass<TestSqsDeleteMessageRequest>();
    testFactory.registerClass<TestSqsDeleteMessageResponse>();
    testFactory.registerClass<TestSqsDeleteQueueRequest>();
    testFactory.registerClass<TestSqsDeleteQueueResponse>();
    testFactory.registerClass<TestSqsError>();
    testFactory.registerClass<TestSqsGetQueueAttributesRequest>();
    testFactory.registerClass<TestSqsGetQueueAttributesResponse>();
    testFactory.registerClass<TestSqsGetQueueUrlRequest>();
    testFactory.registerClass<TestSqsGetQueueUrlResponse>();
    testFactory.registerClass<TestSqsListDeadLetterSourceQueuesRequest>();
    testFactory.registerClass<TestSqsListDeadLetterSourceQueuesResponse>();
    testFactory.registerClass<TestSqsListQueuesRequest>();
    testFactory.registerClass<TestSqsListQueuesResponse>();
    testFactory.registerClass<TestSqsPurgeQueueRequest>();
    testFactory.registerClass<TestSqsPurgeQueueResponse>();
    testFactory.registerClass<TestSqsReceiveMessageRequest>();
    testFactory.registerClass<TestSqsReceiveMessageResponse>();
    testFactory.registerClass<TestSqsRemovePermissionRequest>();
    testFactory.registerClass<TestSqsRemovePermissionResponse>();
    testFactory.registerClass<TestSqsRequest>();
    testFactory.registerClass<TestSqsResponse>();
    testFactory.registerClass<TestSqsSendMessageBatchRequest>();
    testFactory.registerClass<TestSqsSendMessageBatchResponse>();
    testFactory.registerClass<TestSqsSendMessageRequest>();
    testFactory.registerClass<TestSqsSendMessageResponse>();
    testFactory.registerClass<TestSqsSetQueueAttributesRequest>();
    testFactory.registerClass<TestSqsSetQueueAttributesResponse>();

    // If the user has specified a Test* class name, execute that test class only.
    for (int index = 1; index < argc; ++index) {
        if (qstrcmp(argv[index], "-classes") == 0) {
            foreach (const QByteArray &className, testFactory.uniqueKeys()) {
                fprintf(stdout, "%s\n", className.data());
            }
            return EXIT_SUCCESS;
        } else if (qstrncmp(argv[index], "Test", 4) == 0) {
            QStringList args = app.arguments();
            args.removeOne(QString::fromLocal8Bit(argv[index]));
            QObject * testObject = testFactory.createObject<QObject>(argv[index]);
            if (!testObject) {
                fprintf(stderr, "test class %s is unknown\n", argv[index]);
                return EXIT_FAILURE;
            }
            return (QTest::qExec(testObject, args) == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
        }
    }

    // Otherwise, execute all registered test classes.
    QList<QByteArray> failedClassNames;
    foreach (const QByteArray &className, testFactory.uniqueKeys()) {
        QObject * testObject = testFactory.createObject<QObject>(className);
        if ((!testObject) || (QTest::qExec(testObject, argc, argv) != 0)) {
            failedClassNames.append(className);
        }
    }

    // Report our success / failure.
    fprintf(stdout, "%d of %d test classes completed successfully\n",
            (testFactory.size() - failedClassNames.size()), testFactory.size());
    foreach (const QByteArray &className, failedClassNames) {
        fprintf(stdout, "Failed class: %s\n", className.data());
    }
    return (failedClassNames.empty()) ? EXIT_SUCCESS : EXIT_FAILURE;
}
