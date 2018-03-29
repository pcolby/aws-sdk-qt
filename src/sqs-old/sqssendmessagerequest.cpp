/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqssendmessagerequest.h"
#include "sqssendmessagerequest_p.h"
#include "sqssendmessageresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsSendMessageRequest
 *
 * @brief  Implements SQS SendMessage requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsSendMessageRequest.
 *
 * @todo
 */
/*SqsSendMessageRequest::SqsSendMessageRequest(
    ...
    : SqsRequest(new SqsSendMessageRequestPrivate(SqsRequest::SendMessageAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsSendMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsSendMessageRequest::SqsSendMessageRequest(const SqsSendMessageRequest &other)
    : SqsRequest(new SqsSendMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsSendMessageRequest object.
 */
SqsSendMessageRequest::SqsSendMessageRequest()
    : SqsRequest(new SqsSendMessageRequestPrivate(SqsRequest::SendMessageAction, this))
{

}

bool SqsSendMessageRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsSendMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsSendMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsSendMessageRequest::response(QNetworkReply * const reply) const
{
    return new SqsSendMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsSendMessageRequestPrivate
 *
 * @brief  Private implementation for SqsSendMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsSendMessageRequest instance.
 */
SqsSendMessageRequestPrivate::SqsSendMessageRequestPrivate(
    const SqsRequest::Action action, SqsSendMessageRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsSendMessageResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsSendMessageRequest instance.
 */
SqsSendMessageRequestPrivate::SqsSendMessageRequestPrivate(
    const SqsSendMessageRequestPrivate &other, SqsSendMessageRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
