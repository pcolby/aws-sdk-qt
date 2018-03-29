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

#include "describeeffectivepatchesforpatchbaselinerequest.h"
#include "describeeffectivepatchesforpatchbaselinerequest_p.h"
#include "describeeffectivepatchesforpatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeEffectivePatchesForPatchBaselineRequest
 *
 * @brief  Implements SSM DescribeEffectivePatchesForPatchBaseline requests.
 *
 * @see    SSMClient::describeEffectivePatchesForPatchBaseline
 */

/**
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEffectivePatchesForPatchBaselineRequest::DescribeEffectivePatchesForPatchBaselineRequest(const DescribeEffectivePatchesForPatchBaselineRequest &other)
    : SSMRequest(new DescribeEffectivePatchesForPatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineRequest object.
 */
DescribeEffectivePatchesForPatchBaselineRequest::DescribeEffectivePatchesForPatchBaselineRequest()
    : SSMRequest(new DescribeEffectivePatchesForPatchBaselineRequestPrivate(SSMRequest::DescribeEffectivePatchesForPatchBaselineAction, this))
{

}

bool DescribeEffectivePatchesForPatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEffectivePatchesForPatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEffectivePatchesForPatchBaselineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeEffectivePatchesForPatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEffectivePatchesForPatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEffectivePatchesForPatchBaselineRequestPrivate
 *
 * @brief  Private implementation for DescribeEffectivePatchesForPatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeEffectivePatchesForPatchBaselineRequest instance.
 */
DescribeEffectivePatchesForPatchBaselineRequestPrivate::DescribeEffectivePatchesForPatchBaselineRequestPrivate(
    const SSMRequest::Action action, DescribeEffectivePatchesForPatchBaselineRequest * const q)
    : DescribeEffectivePatchesForPatchBaselinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEffectivePatchesForPatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEffectivePatchesForPatchBaselineRequest instance.
 */
DescribeEffectivePatchesForPatchBaselineRequestPrivate::DescribeEffectivePatchesForPatchBaselineRequestPrivate(
    const DescribeEffectivePatchesForPatchBaselineRequestPrivate &other, DescribeEffectivePatchesForPatchBaselineRequest * const q)
    : DescribeEffectivePatchesForPatchBaselinePrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
