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

#ifndef QTAWS_SQSCLIENT_H
#define QTAWS_SQSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class SqsClientPrivate;

class QTAWS_EXPORT SqsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SqsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SqsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SqsAddPermissionResponse * addPermission(const SqsAddPermissionRequest &request);
    SqsChangeMessageVisibilityResponse * changeMessageVisibility(const SqsChangeMessageVisibilityRequest &request);
    SqsChangeMessageVisibilityBatchResponse * changeMessageVisibilityBatch(const SqsChangeMessageVisibilityBatchRequest &request);
    SqsCreateQueueResponse * createQueue(const SqsCreateQueueRequest &request);
    SqsDeleteMessageResponse * deleteMessage(const SqsDeleteMessageRequest &request);
    SqsDeleteMessageBatchResponse * deleteMessageBatch(const SqsDeleteMessageBatchRequest &request);
    SqsDeleteQueueResponse * deleteQueue(const SqsDeleteQueueRequest &request);
    SqsGetQueueAttributesResponse * getQueueAttributes(const SqsGetQueueAttributesRequest &request);
    SqsGetQueueUrlResponse * getQueueUrl(const SqsGetQueueUrlRequest &request);
    SqsListDeadLetterSourceQueuesResponse * listDeadLetterSourceQueues(const SqsListDeadLetterSourceQueuesRequest &request);
    SqsListQueuesResponse * listQueues(const SqsListQueuesRequest &request);
    SqsPurgeQueueResponse * purgeQueue(const SqsPurgeQueueRequest &request);
    SqsReceiveMessageResponse * receiveMessage(const SqsReceiveMessageRequest &request);
    SqsRemovePermissionResponse * removePermission(const SqsRemovePermissionRequest &request);
    SqsSendMessageResponse * sendMessage(const SqsSendMessageRequest &request);
    SqsSendMessageBatchResponse * sendMessageBatch(const SqsSendMessageBatchRequest &request);
    SqsSetQueueAttributesResponse * setQueueAttributes(const SqsSetQueueAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(SqsClient)
    Q_DISABLE_COPY(SqsClient)

};

QTAWS_END_NAMESPACE

#endif
