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

#include "createcomputeenvironmentrequest.h"
#include "createcomputeenvironmentrequest_p.h"
#include "createcomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  CreateComputeEnvironmentRequest
 *
 * @brief  Implements Batch CreateComputeEnvironment requests.
 *
 * @see    BatchClient::createComputeEnvironment
 */

/**
 * @brief  Constructs a new CreateComputeEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest(const CreateComputeEnvironmentRequest &other)
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateComputeEnvironmentRequest object.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest()
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(BatchRequest::CreateComputeEnvironmentAction, this))
{

}

bool CreateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateComputeEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateComputeEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * CreateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComputeEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateComputeEnvironmentRequestPrivate
 *
 * @brief  Private implementation for CreateComputeEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputeEnvironmentRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public CreateComputeEnvironmentRequest instance.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, CreateComputeEnvironmentRequest * const q)
    : CreateComputeEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateComputeEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateComputeEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateComputeEnvironmentRequest instance.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const CreateComputeEnvironmentRequestPrivate &other, CreateComputeEnvironmentRequest * const q)
    : CreateComputeEnvironmentPrivate(other, q)
{

}

} // namespace Batch
} // namespace AWS
