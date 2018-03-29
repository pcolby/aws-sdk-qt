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

#include "describealarmhistoryrequest.h"
#include "describealarmhistoryrequest_p.h"
#include "describealarmhistoryresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DescribeAlarmHistoryRequest
 *
 * @brief  Implements CloudWatch DescribeAlarmHistory requests.
 *
 * @see    CloudWatchClient::describeAlarmHistory
 */

/**
 * @brief  Constructs a new DescribeAlarmHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAlarmHistoryRequest::DescribeAlarmHistoryRequest(const DescribeAlarmHistoryRequest &other)
    : CloudWatchRequest(new DescribeAlarmHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAlarmHistoryRequest object.
 */
DescribeAlarmHistoryRequest::DescribeAlarmHistoryRequest()
    : CloudWatchRequest(new DescribeAlarmHistoryRequestPrivate(CloudWatchRequest::DescribeAlarmHistoryAction, this))
{

}

bool DescribeAlarmHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAlarmHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAlarmHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DescribeAlarmHistoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAlarmHistoryRequestPrivate
 *
 * @brief  Private implementation for DescribeAlarmHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmHistoryRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DescribeAlarmHistoryRequest instance.
 */
DescribeAlarmHistoryRequestPrivate::DescribeAlarmHistoryRequestPrivate(
    const CloudWatchRequest::Action action, DescribeAlarmHistoryRequest * const q)
    : DescribeAlarmHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAlarmHistoryRequest instance.
 */
DescribeAlarmHistoryRequestPrivate::DescribeAlarmHistoryRequestPrivate(
    const DescribeAlarmHistoryRequestPrivate &other, DescribeAlarmHistoryRequest * const q)
    : DescribeAlarmHistoryPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
