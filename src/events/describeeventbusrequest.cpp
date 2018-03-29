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

#include "describeeventbusrequest.h"
#include "describeeventbusrequest_p.h"
#include "describeeventbusresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  DescribeEventBusRequest
 *
 * @brief  Implements CloudWatchEvents DescribeEventBus requests.
 *
 * @see    CloudWatchEventsClient::describeEventBus
 */

/**
 * @brief  Constructs a new DescribeEventBusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventBusRequest::DescribeEventBusRequest(const DescribeEventBusRequest &other)
    : CloudWatchEventsRequest(new DescribeEventBusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventBusRequest object.
 */
DescribeEventBusRequest::DescribeEventBusRequest()
    : CloudWatchEventsRequest(new DescribeEventBusRequestPrivate(CloudWatchEventsRequest::DescribeEventBusAction, this))
{

}

bool DescribeEventBusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventBusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventBusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventBusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventBusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventBusRequestPrivate
 *
 * @brief  Private implementation for DescribeEventBusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventBusRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public DescribeEventBusRequest instance.
 */
DescribeEventBusRequestPrivate::DescribeEventBusRequestPrivate(
    const CloudWatchEventsRequest::Action action, DescribeEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventBusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventBusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventBusRequest instance.
 */
DescribeEventBusRequestPrivate::DescribeEventBusRequestPrivate(
    const DescribeEventBusRequestPrivate &other, DescribeEventBusRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
