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

#include "sqscreatequeuerequest.h"

#define DELAY_SECONDS QLatin1String("DelaySeconds")
#define DELAY_SECONDS_MIN 0
#define DELAY_SECONDS_MAX 900

#define MAXIMUM_MESSAGE_SIZE QLatin1String("MaximumMessageSize")
#define MAXIMUM_MESSAGE_SIZE_MIN 1024
#define MAXIMUM_MESSAGE_SIZE_MAX 262144

#define MESSAGE_RETENTION_PERIOD QLatin1String("MessageRetentionPeriod")

#define QUEUE_NAME QLatin1String("QueueName")

#define POLICY QLatin1String("Policy")

#define RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS QLatin1String("ReceiveMessageWaitTimeSeconds")

#define VISIBILITY_TIMEOUT QLatin1String("VisibilityTimeout")

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsCreateQueueRequest
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsCreateQueueRequest object.
 *
 * @param parent       This object's parent.
 */
SqsCreateQueueRequest::SqsCreateQueueRequest(const QString &queueName,
                                             QObject * const parent)
    : SqsRequest(SqsRequest::CreateQueueSqsAction, parent)
{
    setQueueName(queueName);
}

/**
 * @brief  Constructs a new SqsCreateQueueRequest object.
 *
 * @param parent       This object's parent.
 */
SqsCreateQueueRequest::SqsCreateQueueRequest(QObject * const parent)
    : SqsRequest(SqsRequest::CreateQueueSqsAction, parent)
{

}

bool SqsCreateQueueRequest::isValid() const
{
    /// @todo Validate the queue name?
    return !queueName().isEmpty();
}

int SqsCreateQueueRequest::delaySeconds() const
{
    return parameter(DELAY_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::maximumMessageSize() const
{
    return parameter(DELAY_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::messageRetentionPeriod() const
{
    return parameter(MESSAGE_RETENTION_PERIOD, -1).toInt();
}

QString SqsCreateQueueRequest::policy() const
{
    return parameter(POLICY).toString();
}

QString SqsCreateQueueRequest::queueName() const
{
    return parameter(QUEUE_NAME).toString();
}

int SqsCreateQueueRequest::receiveMessageWaitTimeSeconds() const
{
    return parameter(RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::visibilityTimeout() const
{
    return parameter(VISIBILITY_TIMEOUT, -1).toInt();
}

void SqsCreateQueueRequest::setDelaySeconds(int delay)
{
    if (delay < 0) {
        clearParameter(DELAY_SECONDS);
    } else {
        Q_ASSERT(delay <= DELAY_SECONDS_MAX);
        return setParameter(DELAY_SECONDS, qMin(qMax(delay, DELAY_SECONDS_MIN), DELAY_SECONDS_MAX));
    }
}

void SqsCreateQueueRequest::setMaximumMessageSize(int size)
{

}

void SqsCreateQueueRequest::setMessageRetentionPeriod(int period)
{

}

void SqsCreateQueueRequest::setPolicy(const QString &policy)
{

}

void SqsCreateQueueRequest::setQueueName(const QString &queueName)
{

}

void SqsCreateQueueRequest::setReceiveMessageWaitTimeSeconds(int time)
{

}

void SqsCreateQueueRequest::setVisibilityTimeout(int timeout)
{

}

QTAWS_END_NAMESPACE
