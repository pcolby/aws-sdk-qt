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

#include "describepoliciesrequest.h"
#include "describepoliciesrequest_p.h"
#include "describepoliciesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribePoliciesRequest
 *
 * @brief  Implements AutoScaling DescribePolicies requests.
 *
 * @see    AutoScalingClient::describePolicies
 */

/**
 * @brief  Constructs a new DescribePoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePoliciesRequest::DescribePoliciesRequest(const DescribePoliciesRequest &other)
    : AutoScalingRequest(new DescribePoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePoliciesRequest object.
 */
DescribePoliciesRequest::DescribePoliciesRequest()
    : AutoScalingRequest(new DescribePoliciesRequestPrivate(AutoScalingRequest::DescribePoliciesAction, this))
{

}

bool DescribePoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePoliciesRequestPrivate
 *
 * @brief  Private implementation for DescribePoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePoliciesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribePoliciesRequest instance.
 */
DescribePoliciesRequestPrivate::DescribePoliciesRequestPrivate(
    const AutoScalingRequest::Action action, DescribePoliciesRequest * const q)
    : DescribePoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePoliciesRequest instance.
 */
DescribePoliciesRequestPrivate::DescribePoliciesRequestPrivate(
    const DescribePoliciesRequestPrivate &other, DescribePoliciesRequest * const q)
    : DescribePoliciesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
