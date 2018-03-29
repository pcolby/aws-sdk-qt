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

#include "putmetricalarmrequest.h"
#include "putmetricalarmrequest_p.h"
#include "putmetricalarmresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  PutMetricAlarmRequest
 *
 * @brief  Implements CloudWatch PutMetricAlarm requests.
 *
 * @see    CloudWatchClient::putMetricAlarm
 */

/**
 * @brief  Constructs a new PutMetricAlarmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMetricAlarmRequest::PutMetricAlarmRequest(const PutMetricAlarmRequest &other)
    : CloudWatchRequest(new PutMetricAlarmRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMetricAlarmRequest object.
 */
PutMetricAlarmRequest::PutMetricAlarmRequest()
    : CloudWatchRequest(new PutMetricAlarmRequestPrivate(CloudWatchRequest::PutMetricAlarmAction, this))
{

}

bool PutMetricAlarmRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMetricAlarmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMetricAlarmResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * PutMetricAlarmRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricAlarmResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMetricAlarmRequestPrivate
 *
 * @brief  Private implementation for PutMetricAlarmRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricAlarmRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public PutMetricAlarmRequest instance.
 */
PutMetricAlarmRequestPrivate::PutMetricAlarmRequestPrivate(
    const CloudWatchRequest::Action action, PutMetricAlarmRequest * const q)
    : PutMetricAlarmPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricAlarmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMetricAlarmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMetricAlarmRequest instance.
 */
PutMetricAlarmRequestPrivate::PutMetricAlarmRequestPrivate(
    const PutMetricAlarmRequestPrivate &other, PutMetricAlarmRequest * const q)
    : PutMetricAlarmPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
