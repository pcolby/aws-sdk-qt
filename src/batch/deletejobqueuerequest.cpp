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

#include "deletejobqueuerequest.h"
#include "deletejobqueuerequest_p.h"
#include "deletejobqueueresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  DeleteJobQueueRequest
 *
 * @brief  Implements Batch DeleteJobQueue requests.
 *
 * @see    BatchClient::deleteJobQueue
 */

/**
 * @brief  Constructs a new DeleteJobQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteJobQueueRequest::DeleteJobQueueRequest(const DeleteJobQueueRequest &other)
    : BatchRequest(new DeleteJobQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteJobQueueRequest object.
 */
DeleteJobQueueRequest::DeleteJobQueueRequest()
    : BatchRequest(new DeleteJobQueueRequestPrivate(BatchRequest::DeleteJobQueueAction, this))
{

}

bool DeleteJobQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteJobQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteJobQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * DeleteJobQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteJobQueueRequestPrivate
 *
 * @brief  Private implementation for DeleteJobQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobQueueRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DeleteJobQueueRequest instance.
 */
DeleteJobQueueRequestPrivate::DeleteJobQueueRequestPrivate(
    const BatchRequest::Action action, DeleteJobQueueRequest * const q)
    : DeleteJobQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteJobQueueRequest instance.
 */
DeleteJobQueueRequestPrivate::DeleteJobQueueRequestPrivate(
    const DeleteJobQueueRequestPrivate &other, DeleteJobQueueRequest * const q)
    : DeleteJobQueuePrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
