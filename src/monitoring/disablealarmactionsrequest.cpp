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

#include "disablealarmactionsrequest.h"
#include "disablealarmactionsrequest_p.h"
#include "disablealarmactionsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DisableAlarmActionsRequest
 *
 * @brief  Implements CloudWatch DisableAlarmActions requests.
 *
 * @see    CloudWatchClient::disableAlarmActions
 */

/**
 * @brief  Constructs a new DisableAlarmActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableAlarmActionsRequest::DisableAlarmActionsRequest(const DisableAlarmActionsRequest &other)
    : CloudWatchRequest(new DisableAlarmActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableAlarmActionsRequest object.
 */
DisableAlarmActionsRequest::DisableAlarmActionsRequest()
    : CloudWatchRequest(new DisableAlarmActionsRequestPrivate(CloudWatchRequest::DisableAlarmActionsAction, this))
{

}

bool DisableAlarmActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableAlarmActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableAlarmActionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DisableAlarmActionsRequest::response(QNetworkReply * const reply) const
{
    return new DisableAlarmActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableAlarmActionsRequestPrivate
 *
 * @brief  Private implementation for DisableAlarmActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAlarmActionsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DisableAlarmActionsRequest instance.
 */
DisableAlarmActionsRequestPrivate::DisableAlarmActionsRequestPrivate(
    const CloudWatchRequest::Action action, DisableAlarmActionsRequest * const q)
    : DisableAlarmActionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableAlarmActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableAlarmActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableAlarmActionsRequest instance.
 */
DisableAlarmActionsRequestPrivate::DisableAlarmActionsRequestPrivate(
    const DisableAlarmActionsRequestPrivate &other, DisableAlarmActionsRequest * const q)
    : DisableAlarmActionsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
