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

#include "describeloadbasedautoscalingrequest.h"
#include "describeloadbasedautoscalingrequest_p.h"
#include "describeloadbasedautoscalingresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeLoadBasedAutoScalingRequest
 *
 * @brief  Implements OpsWorks DescribeLoadBasedAutoScaling requests.
 *
 * @see    OpsWorksClient::describeLoadBasedAutoScaling
 */

/**
 * @brief  Constructs a new DescribeLoadBasedAutoScalingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBasedAutoScalingResponse::DescribeLoadBasedAutoScalingResponse(

/**
 * @brief  Constructs a new DescribeLoadBasedAutoScalingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBasedAutoScalingRequest::DescribeLoadBasedAutoScalingRequest(const DescribeLoadBasedAutoScalingRequest &other)
    : OpsWorksRequest(new DescribeLoadBasedAutoScalingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoadBasedAutoScalingRequest object.
 */
DescribeLoadBasedAutoScalingRequest::DescribeLoadBasedAutoScalingRequest()
    : OpsWorksRequest(new DescribeLoadBasedAutoScalingRequestPrivate(OpsWorksRequest::DescribeLoadBasedAutoScalingAction, this))
{

}

bool DescribeLoadBasedAutoScalingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoadBasedAutoScalingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBasedAutoScalingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeLoadBasedAutoScalingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBasedAutoScalingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoadBasedAutoScalingRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBasedAutoScalingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBasedAutoScalingRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBasedAutoScalingRequest instance.
 */
DescribeLoadBasedAutoScalingRequestPrivate::DescribeLoadBasedAutoScalingRequestPrivate(
    const OpsWorksRequest::Action action, DescribeLoadBasedAutoScalingRequest * const q)
    : DescribeLoadBasedAutoScalingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBasedAutoScalingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBasedAutoScalingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBasedAutoScalingRequest instance.
 */
DescribeLoadBasedAutoScalingRequestPrivate::DescribeLoadBasedAutoScalingRequestPrivate(
    const DescribeLoadBasedAutoScalingRequestPrivate &other, DescribeLoadBasedAutoScalingRequest * const q)
    : DescribeLoadBasedAutoScalingPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
