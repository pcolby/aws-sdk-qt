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

#include "enablealarmactionsrequest.h"
#include "enablealarmactionsrequest_p.h"
#include "enablealarmactionsresponse.h"
#include "cloudwatchrequest_p.h"

namespace AWS {
namespace CloudWatch {

/**
 * @class  EnableAlarmActionsRequest
 *
 * @brief  Implements CloudWatch EnableAlarmActions requests.
 *
 * @see    CloudWatchClient::enableAlarmActions
 */

/**
 * @brief  Constructs a new EnableAlarmActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest(const EnableAlarmActionsRequest &other)
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableAlarmActionsRequest object.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest()
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(CloudWatchRequest::EnableAlarmActionsAction, this))
{

}

bool EnableAlarmActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableAlarmActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableAlarmActionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * EnableAlarmActionsRequest::response(QNetworkReply * const reply) const
{
    return new EnableAlarmActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableAlarmActionsRequestPrivate
 *
 * @brief  Private implementation for EnableAlarmActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAlarmActionsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public EnableAlarmActionsRequest instance.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const CloudWatchRequest::Action action, EnableAlarmActionsRequest * const q)
    : EnableAlarmActionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableAlarmActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableAlarmActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableAlarmActionsRequest instance.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const EnableAlarmActionsRequestPrivate &other, EnableAlarmActionsRequest * const q)
    : EnableAlarmActionsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace AWS
