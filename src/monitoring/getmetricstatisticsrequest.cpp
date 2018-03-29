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

#include "getmetricstatisticsrequest.h"
#include "getmetricstatisticsrequest_p.h"
#include "getmetricstatisticsresponse.h"
#include "cloudwatchrequest_p.h"

namespace AWS {
namespace CloudWatch {

/**
 * @class  GetMetricStatisticsRequest
 *
 * @brief  Implements CloudWatch GetMetricStatistics requests.
 *
 * @see    CloudWatchClient::getMetricStatistics
 */

/**
 * @brief  Constructs a new GetMetricStatisticsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMetricStatisticsRequest::GetMetricStatisticsRequest(const GetMetricStatisticsRequest &other)
    : CloudWatchRequest(new GetMetricStatisticsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMetricStatisticsRequest object.
 */
GetMetricStatisticsRequest::GetMetricStatisticsRequest()
    : CloudWatchRequest(new GetMetricStatisticsRequestPrivate(CloudWatchRequest::GetMetricStatisticsAction, this))
{

}

bool GetMetricStatisticsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMetricStatisticsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMetricStatisticsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * GetMetricStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricStatisticsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMetricStatisticsRequestPrivate
 *
 * @brief  Private implementation for GetMetricStatisticsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricStatisticsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public GetMetricStatisticsRequest instance.
 */
GetMetricStatisticsRequestPrivate::GetMetricStatisticsRequestPrivate(
    const CloudWatchRequest::Action action, GetMetricStatisticsRequest * const q)
    : GetMetricStatisticsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricStatisticsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMetricStatisticsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMetricStatisticsRequest instance.
 */
GetMetricStatisticsRequestPrivate::GetMetricStatisticsRequestPrivate(
    const GetMetricStatisticsRequestPrivate &other, GetMetricStatisticsRequest * const q)
    : GetMetricStatisticsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace AWS
