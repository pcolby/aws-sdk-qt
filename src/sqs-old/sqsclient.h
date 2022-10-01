// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCLIENT_H
#define SQSCLIENT_H

#include "core/awsabstractclient.h"

#include <QObject>
#include <QNetworkReply>

class QNetworkReply;

namespace QtAws {
namespace SqsOld {

class AwsAbstractClient;
class AwsAbstractCredentials;
class SqsClientPrivate;
class SqsAddPermissionRequest;
class SqsAddPermissionResponse;
class SqsChangeMessageVisibilityRequest;
class SqsChangeMessageVisibilityResponse;
class SqsChangeMessageVisibilityBatchRequest;
class SqsChangeMessageVisibilityBatchResponse;
class SqsCreateQueueRequest;
class SqsCreateQueueResponse;
class SqsDeleteMessageRequest;
class SqsDeleteMessageResponse;
class SqsDeleteQueueRequest;
class SqsDeleteQueueResponse;
class SqsGetQueueUrlRequest;
class SqsGetQueueUrlResponse;
class SqsListDeadLetterSourceQueuesRequest;
class SqsListDeadLetterSourceQueuesResponse;
class SqsListQueuesRequest;
class SqsListQueuesResponse;
class SqsPurgeQueueRequest;
class SqsPurgeQueueResponse;
class SqsRemovePermissionRequest;
class SqsRemovePermissionResponse;
class SqsSetQueueAttributesRequest;
class SqsSetQueueAttributesResponse;

class QTAWS_EXPORT SqsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SqsClient(const AwsRegion::Region region = AwsRegion::InvalidRegion,
              AwsAbstractCredentials * credentials = NULL,
              QNetworkAccessManager * const manager = NULL,
              QObject * const parent = 0);

    SqsClient(const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
              QNetworkAccessManager * const manager = NULL,
              QObject * const parent = 0);

public slots:
    SqsAddPermissionResponse * addPermission(const SqsAddPermissionRequest &request);

    SqsChangeMessageVisibilityResponse * changeMessageVisibility(
        const SqsChangeMessageVisibilityRequest &request);
    SqsChangeMessageVisibilityResponse * changeMessageVisibility(
        const QString &queueUrl, const QString &receiptHandle,
        const int visbilityTimeout);

    //SqsChangeMessageVisibilityBatchResponse * changeMessageVisibilityBatch(
    //    const SqsChangeMessageVisibilityBatchRequest &request);
    //SqsChangeMessageVisibilityBatchResponse * changeMessageVisibilityBatch(
    //    const QString &queueUrl, const QStringList &receiptHandles,
    //    const int visbilityTimeout);

    SqsCreateQueueResponse * createQueue(const SqsCreateQueueRequest &request);
    SqsCreateQueueResponse * createQueue(const QString &queueName,
                                         const QVariantMap &attributes = QVariantMap());

    SqsDeleteMessageResponse * deleteMessage(const SqsDeleteMessageRequest &request);
    SqsDeleteMessageResponse * deleteMessage(const QString &queueUrl,
                                             const QString &receiptHandle);

    //void deleteMessageBatch(const QString &queueUrl, const QStringList &receiptHandles);

    SqsDeleteQueueResponse * deleteQueue(const SqsDeleteQueueRequest &request);
    SqsDeleteQueueResponse * deleteQueue(const QString &queueUrl);

    SqsGetQueueUrlResponse * getQueueUrl(const SqsGetQueueUrlRequest &request);
    SqsGetQueueUrlResponse * getQueueUrl(
        const QString &queueName, const QString &queueOwnerAWSAccountId = QString());

    SqsListDeadLetterSourceQueuesResponse * listDeadLetterSourceQueues(
        const SqsListDeadLetterSourceQueuesRequest &request);
    SqsListDeadLetterSourceQueuesResponse * listDeadLetterSourceQueues(
        const QString &queueUrl);

    SqsListQueuesResponse * listQueues(const SqsListQueuesRequest &request);
    SqsListQueuesResponse * listQueues(const QString &queueNamePrefix = QString());

    SqsPurgeQueueResponse * purgeQueue(const SqsPurgeQueueRequest &request);
    SqsPurgeQueueResponse * purgeQueue(const QString &queueUrl);

    //void receiveMessage(const QString &queueName, ...);
    //void receiveMessage(const SqsReceiveMessageRequest &request);

    SqsRemovePermissionResponse * removePermission(
        const SqsRemovePermissionRequest &request);
    SqsRemovePermissionResponse * removePermission(
        const QString &queueUrl, const QString &label);

    //void sendMessage(const QString &queueUrl, const QByteArray &message, ...);
    //void sendMessage(const SqsSendMessageRequest &request);
    //void sendMessageBatch(const QString &queueUrl, const QByteArrayList &messages, ...);
    //void sendMessageBatch(const SqsSendMessageRequestList &requests);
    //void setQueueAttributes(const QString &queueUrl, const QStringMap &attributes = QStringMap());
    //void setQueueAttributes(const SqsSetQueueAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(SqsClient)
    Q_DISABLE_COPY(SqsClient)
    friend class TestSqsClient;
};

} // namespace SqsOld
} // namespace QtAws

#endif
