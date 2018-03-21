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

#include "describenotificationconfigurationsrequest.h"
#include "describenotificationconfigurationsrequest_p.h"
#include "describenotificationconfigurationsresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeNotificationConfigurationsRequest
 *
 * @brief  Implements AutoScaling DescribeNotificationConfigurations requests.
 *
 * @see    AutoScalingClient::describeNotificationConfigurations
 */

/**
 * @brief  Constructs a new DescribeNotificationConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotificationConfigurationsResponse::DescribeNotificationConfigurationsResponse(

/**
 * @brief  Constructs a new DescribeNotificationConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest(const DescribeNotificationConfigurationsRequest &other)
    : AutoScalingRequest(new DescribeNotificationConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNotificationConfigurationsRequest object.
 */
DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest()
    : AutoScalingRequest(new DescribeNotificationConfigurationsRequestPrivate(AutoScalingRequest::DescribeNotificationConfigurationsAction, this))
{

}

bool DescribeNotificationConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNotificationConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNotificationConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeNotificationConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNotificationConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeNotificationConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationConfigurationsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeNotificationConfigurationsRequest instance.
 */
DescribeNotificationConfigurationsRequestPrivate::DescribeNotificationConfigurationsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeNotificationConfigurationsRequest * const q)
    : DescribeNotificationConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNotificationConfigurationsRequest instance.
 */
DescribeNotificationConfigurationsRequestPrivate::DescribeNotificationConfigurationsRequestPrivate(
    const DescribeNotificationConfigurationsRequestPrivate &other, DescribeNotificationConfigurationsRequest * const q)
    : DescribeNotificationConfigurationsPrivate(other, q)
{

}
