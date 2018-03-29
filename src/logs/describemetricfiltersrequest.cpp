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

#include "describemetricfiltersrequest.h"
#include "describemetricfiltersrequest_p.h"
#include "describemetricfiltersresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeMetricFiltersRequest
 *
 * @brief  Implements CloudWatchLogs DescribeMetricFilters requests.
 *
 * @see    CloudWatchLogsClient::describeMetricFilters
 */

/**
 * @brief  Constructs a new DescribeMetricFiltersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMetricFiltersRequest::DescribeMetricFiltersRequest(const DescribeMetricFiltersRequest &other)
    : CloudWatchLogsRequest(new DescribeMetricFiltersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMetricFiltersRequest object.
 */
DescribeMetricFiltersRequest::DescribeMetricFiltersRequest()
    : CloudWatchLogsRequest(new DescribeMetricFiltersRequestPrivate(CloudWatchLogsRequest::DescribeMetricFiltersAction, this))
{

}

bool DescribeMetricFiltersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMetricFiltersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMetricFiltersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMetricFiltersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMetricFiltersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMetricFiltersRequestPrivate
 *
 * @brief  Private implementation for DescribeMetricFiltersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMetricFiltersRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DescribeMetricFiltersRequest instance.
 */
DescribeMetricFiltersRequestPrivate::DescribeMetricFiltersRequestPrivate(
    const CloudWatchLogsRequest::Action action, DescribeMetricFiltersRequest * const q)
    : DescribeMetricFiltersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMetricFiltersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMetricFiltersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMetricFiltersRequest instance.
 */
DescribeMetricFiltersRequestPrivate::DescribeMetricFiltersRequestPrivate(
    const DescribeMetricFiltersRequestPrivate &other, DescribeMetricFiltersRequest * const q)
    : DescribeMetricFiltersPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
