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

#include "updatejobqueuerequest.h"
#include "updatejobqueuerequest_p.h"
#include "updatejobqueueresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/**
 * @class  UpdateJobQueueRequest
 *
 * @brief  Implements Batch UpdateJobQueue requests.
 *
 * @see    BatchClient::updateJobQueue
 */

/**
 * @brief  Constructs a new UpdateJobQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateJobQueueRequest::UpdateJobQueueRequest(const UpdateJobQueueRequest &other)
    : BatchRequest(new UpdateJobQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateJobQueueRequest object.
 */
UpdateJobQueueRequest::UpdateJobQueueRequest()
    : BatchRequest(new UpdateJobQueueRequestPrivate(BatchRequest::UpdateJobQueueAction, this))
{

}

bool UpdateJobQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateJobQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateJobQueueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobQueueRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateJobQueueRequestPrivate
 *
 * @brief  Private implementation for UpdateJobQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobQueueRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public UpdateJobQueueRequest instance.
 */
UpdateJobQueueRequestPrivate::UpdateJobQueueRequestPrivate(
    const BatchRequest::Action action, UpdateJobQueueRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateJobQueueRequest instance.
 */
UpdateJobQueueRequestPrivate::UpdateJobQueueRequestPrivate(
    const UpdateJobQueueRequestPrivate &other, UpdateJobQueueRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
