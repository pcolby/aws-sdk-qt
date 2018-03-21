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

#include "detachinstancesrequest.h"
#include "detachinstancesrequest_p.h"
#include "detachinstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DetachInstancesRequest
 *
 * @brief  Implements AutoScaling DetachInstances requests.
 *
 * @see    AutoScalingClient::detachInstances
 */

/**
 * @brief  Constructs a new DetachInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachInstancesRequest::DetachInstancesRequest(const DetachInstancesRequest &other)
    : AutoScalingRequest(new DetachInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachInstancesRequest object.
 */
DetachInstancesRequest::DetachInstancesRequest()
    : AutoScalingRequest(new DetachInstancesRequestPrivate(AutoScalingRequest::DetachInstancesAction, this))
{

}

bool DetachInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DetachInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DetachInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachInstancesRequestPrivate
 *
 * @brief  Private implementation for DetachInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DetachInstancesRequest instance.
 */
DetachInstancesRequestPrivate::DetachInstancesRequestPrivate(
    const AutoScalingRequest::Action action, DetachInstancesRequest * const q)
    : DetachInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachInstancesRequest instance.
 */
DetachInstancesRequestPrivate::DetachInstancesRequestPrivate(
    const DetachInstancesRequestPrivate &other, DetachInstancesRequest * const q)
    : DetachInstancesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
