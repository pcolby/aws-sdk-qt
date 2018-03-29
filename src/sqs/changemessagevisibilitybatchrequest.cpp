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

#include "changemessagevisibilitybatchrequest.h"
#include "changemessagevisibilitybatchrequest_p.h"
#include "changemessagevisibilitybatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  ChangeMessageVisibilityBatchRequest
 *
 * @brief  Implements SQS ChangeMessageVisibilityBatch requests.
 *
 * @see    SQSClient::changeMessageVisibilityBatch
 */

/**
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangeMessageVisibilityBatchRequest::ChangeMessageVisibilityBatchRequest(const ChangeMessageVisibilityBatchRequest &other)
    : SQSRequest(new ChangeMessageVisibilityBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequest object.
 */
ChangeMessageVisibilityBatchRequest::ChangeMessageVisibilityBatchRequest()
    : SQSRequest(new ChangeMessageVisibilityBatchRequestPrivate(SQSRequest::ChangeMessageVisibilityBatchAction, this))
{

}

bool ChangeMessageVisibilityBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ChangeMessageVisibilityBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangeMessageVisibilityBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeMessageVisibilityBatchRequest::response(QNetworkReply * const reply) const
{
    return new ChangeMessageVisibilityBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ChangeMessageVisibilityBatchRequestPrivate
 *
 * @brief  Private implementation for ChangeMessageVisibilityBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ChangeMessageVisibilityBatchRequest instance.
 */
ChangeMessageVisibilityBatchRequestPrivate::ChangeMessageVisibilityBatchRequestPrivate(
    const SQSRequest::Action action, ChangeMessageVisibilityBatchRequest * const q)
    : ChangeMessageVisibilityBatchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ChangeMessageVisibilityBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangeMessageVisibilityBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangeMessageVisibilityBatchRequest instance.
 */
ChangeMessageVisibilityBatchRequestPrivate::ChangeMessageVisibilityBatchRequestPrivate(
    const ChangeMessageVisibilityBatchRequestPrivate &other, ChangeMessageVisibilityBatchRequest * const q)
    : ChangeMessageVisibilityBatchPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
