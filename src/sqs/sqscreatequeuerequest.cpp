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
#include "sqscreatequeueresponse.h"

#define ATTRIBUTE_ENTRY_N                    QLatin1String("Attribute.%1.%2")
#define DELAY_SECONDS                        QLatin1String("DelaySeconds")
#define MAXIMUM_MESSAGE_SIZE                 QLatin1String("MaximumMessageSize")
#define MESSAGE_RETENTION_PERIOD             QLatin1String("MessageRetentionPeriod")
#define QUEUE_NAME                           QLatin1String("QueueName")
#define POLICY                               QLatin1String("Policy")
#define RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS QLatin1String("ReceiveMessageWaitTimeSeconds")
#define VISIBILITY_TIMEOUT                   QLatin1String("VisibilityTimeout")

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
    return !queueName().isEmpty();
}

QVariant SqsCreateQueueRequest::attribute(const QString &name, const QVariant &defaultValue) const
{
    return attributes().value(name, defaultValue);
}

QVariantMap SqsCreateQueueRequest::attributes() const
{
    return parameter(ATTRIBUTE_ENTRY_N).toMap();
}

int SqsCreateQueueRequest::delaySeconds() const
{
    return parameter(DELAY_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::maximumMessageSize() const
{
    return attribute(DELAY_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::messageRetentionPeriod() const
{
    return attribute(MESSAGE_RETENTION_PERIOD, -1).toInt();
}

QString SqsCreateQueueRequest::policy() const
{
    return attribute(POLICY).toString();
}

QString SqsCreateQueueRequest::queueName() const
{
    return attribute(QUEUE_NAME).toString();
}

int SqsCreateQueueRequest::receiveMessageWaitTimeSeconds() const
{
    return attribute(RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS, -1).toInt();
}

int SqsCreateQueueRequest::visibilityTimeout() const
{
    return attribute(VISIBILITY_TIMEOUT, -1).toInt();
}

void SqsCreateQueueRequest::setAttribute(const QString &name, const QVariant &value)
{
    QVariantMap attributes = this->attributes();
    if (value.isNull()) {
        attributes.remove(name);
    } else {
        attributes.insert(name, value);
    }
    setAttributes(attributes);
}

void SqsCreateQueueRequest::setAttributes(const QVariantMap &attributes)
{
    setParameter(ATTRIBUTE_ENTRY_N, attributes);
}

void SqsCreateQueueRequest::setDelaySeconds(int delay)
{
    setAttribute(DELAY_SECONDS, (delay < 0) ? QVariant() : QVariant(delay));
}

void SqsCreateQueueRequest::setMaximumMessageSize(int size)
{
    setAttribute(MAXIMUM_MESSAGE_SIZE, (size < 0) ? QVariant() : QVariant(size));
}

void SqsCreateQueueRequest::setMessageRetentionPeriod(int period)
{
    setAttribute(MESSAGE_RETENTION_PERIOD, (period < 0) ? QVariant() : QVariant(period));
}

void SqsCreateQueueRequest::setPolicy(const QString &policy)
{
    setAttribute(POLICY, (policy.isNull()) ? QVariant() : QVariant(policy));
}

void SqsCreateQueueRequest::setQueueName(const QString &queueName)
{
    setParameter(QUEUE_NAME, queueName);
}

void SqsCreateQueueRequest::setReceiveMessageWaitTimeSeconds(int time)
{
    setAttribute(RECEIVE_MESSAGE_WAIT_TIMEOUT_SECONDS, (time < 0) ? QVariant() : QVariant(time));
}

void SqsCreateQueueRequest::setVisibilityTimeout(int timeout)
{
    setAttribute(VISIBILITY_TIMEOUT, (timeout < 0) ? QVariant() : QVariant(timeout));
}

AwsAbstractResponse * SqsCreateQueueRequest::parseSuccessResponse(QNetworkReply * const reply)
{
    SqsCreateQueueResponse * response = new SqsCreateQueueResponse; /// @todo parent?
    response->parse(reply);
    /// @todo Handle error here? eg emit error? or connect to response signal?
    return response;
}

QTAWS_END_NAMESPACE
