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

#include "describealarmsformetricrequest.h"
#include "describealarmsformetricrequest_p.h"
#include "describealarmsformetricresponse.h"
#include "cloudwatchrequest_p.h"

namespace AWS {
namespace CloudWatch {

/**
 * @class  DescribeAlarmsForMetricRequest
 *
 * @brief  Implements CloudWatch DescribeAlarmsForMetric requests.
 *
 * @see    CloudWatchClient::describeAlarmsForMetric
 */

/**
 * @brief  Constructs a new DescribeAlarmsForMetricRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest(const DescribeAlarmsForMetricRequest &other)
    : CloudWatchRequest(new DescribeAlarmsForMetricRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAlarmsForMetricRequest object.
 */
DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest()
    : CloudWatchRequest(new DescribeAlarmsForMetricRequestPrivate(CloudWatchRequest::DescribeAlarmsForMetricAction, this))
{

}

bool DescribeAlarmsForMetricRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAlarmsForMetricResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAlarmsForMetricResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DescribeAlarmsForMetricRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmsForMetricResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAlarmsForMetricRequestPrivate
 *
 * @brief  Private implementation for DescribeAlarmsForMetricRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsForMetricRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DescribeAlarmsForMetricRequest instance.
 */
DescribeAlarmsForMetricRequestPrivate::DescribeAlarmsForMetricRequestPrivate(
    const CloudWatchRequest::Action action, DescribeAlarmsForMetricRequest * const q)
    : DescribeAlarmsForMetricPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsForMetricRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmsForMetricRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAlarmsForMetricRequest instance.
 */
DescribeAlarmsForMetricRequestPrivate::DescribeAlarmsForMetricRequestPrivate(
    const DescribeAlarmsForMetricRequestPrivate &other, DescribeAlarmsForMetricRequest * const q)
    : DescribeAlarmsForMetricPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace AWS
