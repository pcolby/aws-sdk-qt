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

#include "setalarmstaterequest.h"
#include "setalarmstaterequest_p.h"
#include "setalarmstateresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  SetAlarmStateRequest
 *
 * @brief  Implements CloudWatch SetAlarmState requests.
 *
 * @see    CloudWatchClient::setAlarmState
 */

/**
 * @brief  Constructs a new SetAlarmStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetAlarmStateRequest::SetAlarmStateRequest(const SetAlarmStateRequest &other)
    : CloudWatchRequest(new SetAlarmStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetAlarmStateRequest object.
 */
SetAlarmStateRequest::SetAlarmStateRequest()
    : CloudWatchRequest(new SetAlarmStateRequestPrivate(CloudWatchRequest::SetAlarmStateAction, this))
{

}

bool SetAlarmStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetAlarmStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetAlarmStateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * SetAlarmStateRequest::response(QNetworkReply * const reply) const
{
    return new SetAlarmStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetAlarmStateRequestPrivate
 *
 * @brief  Private implementation for SetAlarmStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetAlarmStateRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public SetAlarmStateRequest instance.
 */
SetAlarmStateRequestPrivate::SetAlarmStateRequestPrivate(
    const CloudWatchRequest::Action action, SetAlarmStateRequest * const q)
    : SetAlarmStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetAlarmStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetAlarmStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetAlarmStateRequest instance.
 */
SetAlarmStateRequestPrivate::SetAlarmStateRequestPrivate(
    const SetAlarmStateRequestPrivate &other, SetAlarmStateRequest * const q)
    : SetAlarmStatePrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
