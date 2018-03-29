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

#include "updatecomputeenvironmentrequest.h"
#include "updatecomputeenvironmentrequest_p.h"
#include "updatecomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  UpdateComputeEnvironmentRequest
 *
 * @brief  Implements Batch UpdateComputeEnvironment requests.
 *
 * @see    BatchClient::updateComputeEnvironment
 */

/**
 * @brief  Constructs a new UpdateComputeEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest(const UpdateComputeEnvironmentRequest &other)
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateComputeEnvironmentRequest object.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest()
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(BatchRequest::UpdateComputeEnvironmentAction, this))
{

}

bool UpdateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateComputeEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateComputeEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * UpdateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComputeEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateComputeEnvironmentRequestPrivate
 *
 * @brief  Private implementation for UpdateComputeEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateComputeEnvironmentRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public UpdateComputeEnvironmentRequest instance.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, UpdateComputeEnvironmentRequest * const q)
    : UpdateComputeEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateComputeEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateComputeEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateComputeEnvironmentRequest instance.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const UpdateComputeEnvironmentRequestPrivate &other, UpdateComputeEnvironmentRequest * const q)
    : UpdateComputeEnvironmentPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
