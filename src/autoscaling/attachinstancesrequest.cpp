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

#include "attachinstancesrequest.h"
#include "attachinstancesrequest_p.h"
#include "attachinstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  AttachInstancesRequest
 *
 * @brief  Implements AutoScaling AttachInstances requests.
 *
 * @see    AutoScalingClient::attachInstances
 */

/**
 * @brief  Constructs a new AttachInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachInstancesRequest::AttachInstancesRequest(const AttachInstancesRequest &other)
    : AutoScalingRequest(new AttachInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachInstancesRequest object.
 */
AttachInstancesRequest::AttachInstancesRequest()
    : AutoScalingRequest(new AttachInstancesRequestPrivate(AutoScalingRequest::AttachInstancesAction, this))
{

}

bool AttachInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * AttachInstancesRequest::response(QNetworkReply * const reply) const
{
    return new AttachInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachInstancesRequestPrivate
 *
 * @brief  Private implementation for AttachInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public AttachInstancesRequest instance.
 */
AttachInstancesRequestPrivate::AttachInstancesRequestPrivate(
    const AutoScalingRequest::Action action, AttachInstancesRequest * const q)
    : AttachInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachInstancesRequest instance.
 */
AttachInstancesRequestPrivate::AttachInstancesRequestPrivate(
    const AttachInstancesRequestPrivate &other, AttachInstancesRequest * const q)
    : AttachInstancesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
