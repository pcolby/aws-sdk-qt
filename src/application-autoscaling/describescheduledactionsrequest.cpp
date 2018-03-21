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

#include "describescheduledactionsrequest.h"
#include "describescheduledactionsrequest_p.h"
#include "describescheduledactionsresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScheduledActionsRequest
 *
 * @brief  Implements ApplicationAutoScaling DescribeScheduledActions requests.
 *
 * @see    ApplicationAutoScalingClient::describeScheduledActions
 */

/**
 * @brief  Constructs a new DescribeScheduledActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScheduledActionsResponse::DescribeScheduledActionsResponse(

/**
 * @brief  Constructs a new DescribeScheduledActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest(const DescribeScheduledActionsRequest &other)
    : ApplicationAutoScalingRequest(new DescribeScheduledActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeScheduledActionsRequest object.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest()
    : ApplicationAutoScalingRequest(new DescribeScheduledActionsRequestPrivate(ApplicationAutoScalingRequest::DescribeScheduledActionsAction, this))
{

}

bool DescribeScheduledActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeScheduledActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScheduledActionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
AwsAbstractResponse * DescribeScheduledActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduledActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeScheduledActionsRequestPrivate
 *
 * @brief  Private implementation for DescribeScheduledActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledActionsRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScheduledActionsRequest instance.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DescribeScheduledActionsRequest * const q)
    : DescribeScheduledActionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduledActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScheduledActionsRequest instance.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const DescribeScheduledActionsRequestPrivate &other, DescribeScheduledActionsRequest * const q)
    : DescribeScheduledActionsPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace AWS
