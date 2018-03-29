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

#include "describelaunchconfigurationsrequest.h"
#include "describelaunchconfigurationsrequest_p.h"
#include "describelaunchconfigurationsresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeLaunchConfigurationsRequest
 *
 * @brief  Implements AutoScaling DescribeLaunchConfigurations requests.
 *
 * @see    AutoScalingClient::describeLaunchConfigurations
 */

/**
 * @brief  Constructs a new DescribeLaunchConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLaunchConfigurationsRequest::DescribeLaunchConfigurationsRequest(const DescribeLaunchConfigurationsRequest &other)
    : AutoScalingRequest(new DescribeLaunchConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLaunchConfigurationsRequest object.
 */
DescribeLaunchConfigurationsRequest::DescribeLaunchConfigurationsRequest()
    : AutoScalingRequest(new DescribeLaunchConfigurationsRequestPrivate(AutoScalingRequest::DescribeLaunchConfigurationsAction, this))
{

}

bool DescribeLaunchConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLaunchConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLaunchConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeLaunchConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLaunchConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLaunchConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeLaunchConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchConfigurationsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeLaunchConfigurationsRequest instance.
 */
DescribeLaunchConfigurationsRequestPrivate::DescribeLaunchConfigurationsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLaunchConfigurationsRequest * const q)
    : DescribeLaunchConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLaunchConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLaunchConfigurationsRequest instance.
 */
DescribeLaunchConfigurationsRequestPrivate::DescribeLaunchConfigurationsRequestPrivate(
    const DescribeLaunchConfigurationsRequestPrivate &other, DescribeLaunchConfigurationsRequest * const q)
    : DescribeLaunchConfigurationsPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
