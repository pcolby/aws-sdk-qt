// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSCLIENT_H
#define QTAWS_SQSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssqsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Sqs {

class SqsClientPrivate;
class AddPermissionRequest;
class AddPermissionResponse;
class ChangeMessageVisibilityRequest;
class ChangeMessageVisibilityResponse;
class ChangeMessageVisibilityBatchRequest;
class ChangeMessageVisibilityBatchResponse;
class CreateQueueRequest;
class CreateQueueResponse;
class DeleteMessageRequest;
class DeleteMessageResponse;
class DeleteMessageBatchRequest;
class DeleteMessageBatchResponse;
class DeleteQueueRequest;
class DeleteQueueResponse;
class GetQueueAttributesRequest;
class GetQueueAttributesResponse;
class GetQueueUrlRequest;
class GetQueueUrlResponse;
class ListDeadLetterSourceQueuesRequest;
class ListDeadLetterSourceQueuesResponse;
class ListQueueTagsRequest;
class ListQueueTagsResponse;
class ListQueuesRequest;
class ListQueuesResponse;
class PurgeQueueRequest;
class PurgeQueueResponse;
class ReceiveMessageRequest;
class ReceiveMessageResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class SendMessageRequest;
class SendMessageResponse;
class SendMessageBatchRequest;
class SendMessageBatchResponse;
class SetQueueAttributesRequest;
class SetQueueAttributesResponse;
class TagQueueRequest;
class TagQueueResponse;
class UntagQueueRequest;
class UntagQueueResponse;

class QTAWSSQS_EXPORT SqsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SqsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SqsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    ListQueueTagsResponse * listQueueTags(const ListQueueTagsRequest &request);
    ListQueuesResponse * listQueues(const ListQueuesRequest &request);
    PurgeQueueResponse * purgeQueue(const PurgeQueueRequest &request);
    ReceiveMessageResponse * receiveMessage(const ReceiveMessageRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    SendMessageResponse * sendMessage(const SendMessageRequest &request);
    SendMessageBatchResponse * sendMessageBatch(const SendMessageBatchRequest &request);
    SetQueueAttributesResponse * setQueueAttributes(const SetQueueAttributesRequest &request);
    TagQueueResponse * tagQueue(const TagQueueRequest &request);
    UntagQueueResponse * untagQueue(const UntagQueueRequest &request);

private:
    Q_DECLARE_PRIVATE(SqsClient)
    Q_DISABLE_COPY(SqsClient)

};

} // namespace Sqs
} // namespace QtAws

#endif
