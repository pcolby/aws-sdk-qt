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

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SQS {

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
    AddPermissionResponse * addPermission(const AddPermissionRequest &request);
    ChangeMessageVisibilityResponse * changeMessageVisibility(const ChangeMessageVisibilityRequest &request);
    ChangeMessageVisibilityBatchResponse * changeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest &request);
    CreateQueueResponse * createQueue(const CreateQueueRequest &request);
    DeleteMessageResponse * deleteMessage(const DeleteMessageRequest &request);
    DeleteMessageBatchResponse * deleteMessageBatch(const DeleteMessageBatchRequest &request);
    DeleteQueueResponse * deleteQueue(const DeleteQueueRequest &request);
    GetQueueAttributesResponse * getQueueAttributes(const GetQueueAttributesRequest &request);
    GetQueueUrlResponse * getQueueUrl(const GetQueueUrlRequest &request);
    ListDeadLetterSourceQueuesResponse * listDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest &request);
    ListQueuesResponse * listQueues(const ListQueuesRequest &request);
    PurgeQueueResponse * purgeQueue(const PurgeQueueRequest &request);
    ReceiveMessageResponse * receiveMessage(const ReceiveMessageRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    SendMessageResponse * sendMessage(const SendMessageRequest &request);
    SendMessageBatchResponse * sendMessageBatch(const SendMessageBatchRequest &request);
    SetQueueAttributesResponse * setQueueAttributes(const SetQueueAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(SqsClient)
    Q_DISABLE_COPY(SqsClient)

};

} // namespace SQS
} // namespace AWS

#endif
