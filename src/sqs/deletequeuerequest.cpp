/*
    Copyright 2013-2018 Paul Colby

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

#include "deletequeuerequest.h"
#include "deletequeuerequest_p.h"
#include "deletequeueresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  DeleteQueueRequest
 *
 * @brief  Implements SQS DeleteQueue requests.
 *
 * @see    SQSClient::deleteQueue
 */

/**
 * @brief  Constructs a new DeleteQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteQueueRequest::DeleteQueueRequest(const DeleteQueueRequest &other)
    : SQSRequest(new DeleteQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteQueueRequest object.
 */
DeleteQueueRequest::DeleteQueueRequest()
    : SQSRequest(new DeleteQueueRequestPrivate(SQSRequest::DeleteQueueAction, this))
{

}

bool DeleteQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * DeleteQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteQueueRequestPrivate
 *
 * @brief  Private implementation for DeleteQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueueRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public DeleteQueueRequest instance.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const SQSRequest::Action action, DeleteQueueRequest * const q)
    : DeleteQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteQueueRequest instance.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const DeleteQueueRequestPrivate &other, DeleteQueueRequest * const q)
    : DeleteQueuePrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
