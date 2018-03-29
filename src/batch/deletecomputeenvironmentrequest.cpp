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

#include "deletecomputeenvironmentrequest.h"
#include "deletecomputeenvironmentrequest_p.h"
#include "deletecomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/**
 * @class  DeleteComputeEnvironmentRequest
 *
 * @brief  Implements Batch DeleteComputeEnvironment requests.
 *
 * @see    BatchClient::deleteComputeEnvironment
 */

/**
 * @brief  Constructs a new DeleteComputeEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteComputeEnvironmentRequest::DeleteComputeEnvironmentRequest(const DeleteComputeEnvironmentRequest &other)
    : BatchRequest(new DeleteComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteComputeEnvironmentRequest object.
 */
DeleteComputeEnvironmentRequest::DeleteComputeEnvironmentRequest()
    : BatchRequest(new DeleteComputeEnvironmentRequestPrivate(BatchRequest::DeleteComputeEnvironmentAction, this))
{

}

bool DeleteComputeEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteComputeEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteComputeEnvironmentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteComputeEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteComputeEnvironmentRequestPrivate
 *
 * @brief  Private implementation for DeleteComputeEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteComputeEnvironmentRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DeleteComputeEnvironmentRequest instance.
 */
DeleteComputeEnvironmentRequestPrivate::DeleteComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, DeleteComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteComputeEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteComputeEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteComputeEnvironmentRequest instance.
 */
DeleteComputeEnvironmentRequestPrivate::DeleteComputeEnvironmentRequestPrivate(
    const DeleteComputeEnvironmentRequestPrivate &other, DeleteComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
