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

#include "describealarmsrequest.h"
#include "describealarmsrequest_p.h"
#include "describealarmsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DescribeAlarmsRequest
 *
 * @brief  Implements CloudWatch DescribeAlarms requests.
 *
 * @see    CloudWatchClient::describeAlarms
 */

/**
 * @brief  Constructs a new DescribeAlarmsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAlarmsRequest::DescribeAlarmsRequest(const DescribeAlarmsRequest &other)
    : CloudWatchRequest(new DescribeAlarmsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAlarmsRequest object.
 */
DescribeAlarmsRequest::DescribeAlarmsRequest()
    : CloudWatchRequest(new DescribeAlarmsRequestPrivate(CloudWatchRequest::DescribeAlarmsAction, this))
{

}

bool DescribeAlarmsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAlarmsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAlarmsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DescribeAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAlarmsRequestPrivate
 *
 * @brief  Private implementation for DescribeAlarmsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DescribeAlarmsRequest instance.
 */
DescribeAlarmsRequestPrivate::DescribeAlarmsRequestPrivate(
    const CloudWatchRequest::Action action, DescribeAlarmsRequest * const q)
    : DescribeAlarmsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAlarmsRequest instance.
 */
DescribeAlarmsRequestPrivate::DescribeAlarmsRequestPrivate(
    const DescribeAlarmsRequestPrivate &other, DescribeAlarmsRequest * const q)
    : DescribeAlarmsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
