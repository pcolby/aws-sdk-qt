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

#include "sqschangemessagevisibilityrequest.h"
#include "sqschangemessagevisibilityrequest_p.h"
#include "sqschangemessagevisibilityresponse.h"
#include "sqsrequest_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsChangeMessageVisibilityRequest
 *
 * @brief  Implements SQS ChangeMessageVisibility requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ChangeMessageVisibility.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityRequest.
 *
 * @todo
 */
/*SqsChangeMessageVisibilityRequest::SqsChangeMessageVisibilityRequest(
    ...
    : SqsRequest(new SqsChangeMessageVisibilityRequestPrivate(SqsRequest::ChangeMessageVisibilityAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsChangeMessageVisibilityRequest::SqsChangeMessageVisibilityRequest(const SqsChangeMessageVisibilityRequest &other)
    : SqsRequest(new SqsChangeMessageVisibilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityRequest object.
 */
SqsChangeMessageVisibilityRequest::SqsChangeMessageVisibilityRequest()
    : SqsRequest(new SqsChangeMessageVisibilityRequestPrivate(SqsRequest::ChangeMessageVisibilityAction, this))
{

}

bool SqsChangeMessageVisibilityRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsChangeMessageVisibilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsChangeMessageVisibilityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsChangeMessageVisibilityRequest::response(QNetworkReply * const reply) const
{
    return new SqsChangeMessageVisibilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsChangeMessageVisibilityRequestPrivate
 *
 * @brief  Private implementation for SqsChangeMessageVisibilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsChangeMessageVisibilityRequest instance.
 */
SqsChangeMessageVisibilityRequestPrivate::SqsChangeMessageVisibilityRequestPrivate(
    const SqsRequest::Action action, SqsChangeMessageVisibilityRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsChangeMessageVisibilityResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsChangeMessageVisibilityRequest instance.
 */
SqsChangeMessageVisibilityRequestPrivate::SqsChangeMessageVisibilityRequestPrivate(
    const SqsChangeMessageVisibilityRequestPrivate &other, SqsChangeMessageVisibilityRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
