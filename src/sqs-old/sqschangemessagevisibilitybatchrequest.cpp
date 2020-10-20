/*
    Copyright 2013-2020 Paul Colby

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

#include "sqschangemessagevisibilitybatchrequest.h"
#include "sqschangemessagevisibilitybatchrequest_p.h"
#include "sqschangemessagevisibilitybatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsChangeMessageVisibilityBatchRequest
 *
 * @brief  Implements SQS ChangeMessageVisibilityBatch requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ChangeMessageVisibilityBatch.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchRequest.
 *
 * @todo
 */
/*SqsChangeMessageVisibilityBatchRequest::SqsChangeMessageVisibilityBatchRequest(
    ...
    : SqsRequest(new SqsChangeMessageVisibilityBatchRequestPrivate(SqsRequest::ChangeMessageVisibilityBatchAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsChangeMessageVisibilityBatchRequest::SqsChangeMessageVisibilityBatchRequest(const SqsChangeMessageVisibilityBatchRequest &other)
    : SqsRequest(new SqsChangeMessageVisibilityBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchRequest object.
 */
SqsChangeMessageVisibilityBatchRequest::SqsChangeMessageVisibilityBatchRequest()
    : SqsRequest(new SqsChangeMessageVisibilityBatchRequestPrivate(SqsRequest::ChangeMessageVisibilityBatchAction, this))
{

}

bool SqsChangeMessageVisibilityBatchRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsChangeMessageVisibilityBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsChangeMessageVisibilityBatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsChangeMessageVisibilityBatchRequest::response(QNetworkReply * const reply) const
{
    return new SqsChangeMessageVisibilityBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsChangeMessageVisibilityBatchRequestPrivate
 *
 * @brief  Private implementation for SqsChangeMessageVisibilityBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsChangeMessageVisibilityBatchRequest instance.
 */
SqsChangeMessageVisibilityBatchRequestPrivate::SqsChangeMessageVisibilityBatchRequestPrivate(
    const SqsRequest::Action action, SqsChangeMessageVisibilityBatchRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsChangeMessageVisibilityBatchResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsChangeMessageVisibilityBatchRequest instance.
 */
SqsChangeMessageVisibilityBatchRequestPrivate::SqsChangeMessageVisibilityBatchRequestPrivate(
    const SqsChangeMessageVisibilityBatchRequestPrivate &other, SqsChangeMessageVisibilityBatchRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
