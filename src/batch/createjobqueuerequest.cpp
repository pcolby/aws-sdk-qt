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

#include "createjobqueuerequest.h"
#include "createjobqueuerequest_p.h"
#include "createjobqueueresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/**
 * @class  CreateJobQueueRequest
 *
 * @brief  Implements Batch CreateJobQueue requests.
 *
 * @see    BatchClient::createJobQueue
 */

/**
 * @brief  Constructs a new CreateJobQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateJobQueueRequest::CreateJobQueueRequest(const CreateJobQueueRequest &other)
    : BatchRequest(new CreateJobQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateJobQueueRequest object.
 */
CreateJobQueueRequest::CreateJobQueueRequest()
    : BatchRequest(new CreateJobQueueRequestPrivate(BatchRequest::CreateJobQueueAction, this))
{

}

bool CreateJobQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateJobQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateJobQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * CreateJobQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateJobQueueRequestPrivate
 *
 * @brief  Private implementation for CreateJobQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobQueueRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public CreateJobQueueRequest instance.
 */
CreateJobQueueRequestPrivate::CreateJobQueueRequestPrivate(
    const BatchRequest::Action action, CreateJobQueueRequest * const q)
    : CreateJobQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateJobQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateJobQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateJobQueueRequest instance.
 */
CreateJobQueueRequestPrivate::CreateJobQueueRequestPrivate(
    const CreateJobQueueRequestPrivate &other, CreateJobQueueRequest * const q)
    : CreateJobQueuePrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
