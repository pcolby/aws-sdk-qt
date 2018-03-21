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

#include "stopstacksetoperationrequest.h"
#include "stopstacksetoperationrequest_p.h"
#include "stopstacksetoperationresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  StopStackSetOperationRequest
 *
 * @brief  Implements CloudFormation StopStackSetOperation requests.
 *
 * @see    CloudFormationClient::stopStackSetOperation
 */

/**
 * @brief  Constructs a new StopStackSetOperationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopStackSetOperationRequest::StopStackSetOperationRequest(const StopStackSetOperationRequest &other)
    : CloudFormationRequest(new StopStackSetOperationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopStackSetOperationRequest object.
 */
StopStackSetOperationRequest::StopStackSetOperationRequest()
    : CloudFormationRequest(new StopStackSetOperationRequestPrivate(CloudFormationRequest::StopStackSetOperationAction, this))
{

}

bool StopStackSetOperationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopStackSetOperationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopStackSetOperationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * StopStackSetOperationRequest::response(QNetworkReply * const reply) const
{
    return new StopStackSetOperationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopStackSetOperationRequestPrivate
 *
 * @brief  Private implementation for StopStackSetOperationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStackSetOperationRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public StopStackSetOperationRequest instance.
 */
StopStackSetOperationRequestPrivate::StopStackSetOperationRequestPrivate(
    const CloudFormationRequest::Action action, StopStackSetOperationRequest * const q)
    : StopStackSetOperationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopStackSetOperationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopStackSetOperationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopStackSetOperationRequest instance.
 */
StopStackSetOperationRequestPrivate::StopStackSetOperationRequestPrivate(
    const StopStackSetOperationRequestPrivate &other, StopStackSetOperationRequest * const q)
    : StopStackSetOperationPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
