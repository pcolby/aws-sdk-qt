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

#include "sqsclient.h"
#include "sqsclient_p.h"

#include "sqscreatequeuerequest.h"
#include "sqsrequest.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsClient
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param parent       This object's parent.
 */
SqsClient::SqsClient(
        QObject * const parent)
    : AwsAbstractClient(parent), d_ptr(new SqsClientPrivate(this))
{
    //Q_D(SqsClient);
}

SqsClient::~SqsClient()
{
    delete d_ptr;
}

void SqsClient::onRequestFinished(AwsAbstractRequest * const request)
{
    SqsRequest * const sqsRequest = qobject_cast<SqsRequest *>(request);
    Q_ASSERT(sqsRequest);
    if (sqsRequest) {
        /// @todo Parse the response.

        /// @todo Allow the *Request to parse the response?

        /// @todo Handle errors in some standardised way.

        #define CaseActionEmitSignal(action, signal) \
            case SqsRequest::action##SqsAction: \
                emit signal(qobject_cast<Sqs##action##Request *>(request)); \
                break
        switch (sqsRequest->action()) {
          //CaseActionEmitSignal(AddPermission, permissionAdded);
          //CaseActionEmitSignal(ChangeMessageVisibility, messageVisibilityChanged);
          //CaseActionEmitSignal(ChangeMessageVisibilityBatch, messageVisibilityChanged);
            CaseActionEmitSignal(CreateQueue, queueCreated);
          //CaseActionEmitSignal(DeleteMessage, messageDeleted);
          //CaseActionEmitSignal(DeleteMessageBatch, messagesDeleted);
          //CaseActionEmitSignal(DeleteQueue, queueDeleted);
          //CaseActionEmitSignal(GetQueueAttributes, queueAttributesRetrieved);
          //CaseActionEmitSignal(GetQueueUrl, queueUrlRetrieved);
          //CaseActionEmitSignal(ListDeadLetterSourceQueues, deadLetterSourceQueuesListed);
          //CaseActionEmitSignal(ListQueues, queuesListed);
          //CaseActionEmitSignal(PurgeQueue, queuePurged);
          //CaseActionEmitSignal(ReceiveMessage, messageReceived);
          //CaseActionEmitSignal(RemovePermission, permissionRemoved);
          //CaseActionEmitSignal(SendMessage, messageSent);
          //CaseActionEmitSignal(SendMessageBatch, messagesSent);
          //CaseActionEmitSignal(SetQueueAttributesSqsAction, queueAttributesSet);
            default:
                Q_ASSERT_X(false, Q_FUNC_INFO, "unknown action");
        }
        #undef CaseActionEmitSignal
    }
    AwsAbstractClient::onRequestFinished(request);
}

/**
 * @brief SqsClient::createQueue
 *
 * Convenience function only; Alternative:
 *
 * SqsDeleteQueueRequest * const request = new SqsDeleteQueueRequest(...);
 * sqsClient->send(request);
 *
 * @param queueName
 */
void SqsClient::createQueue(const QString &queueName, const QVariantMap &attributes)
{
    SqsCreateQueueRequest * const request = new SqsCreateQueueRequest(queueName, this);
    request->setAttributes(attributes);
    send(request);
}

/**
 * @internal
 *
 * @class  SqsClientPrivate
 *
 * @brief  Private implementation for SqsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SqsClient instance.
 */
SqsClientPrivate::SqsClientPrivate(SqsClient * const q)
    : AwsAbstractClientPrivate(q), q_ptr(q)
{

}

QTAWS_END_NAMESPACE
