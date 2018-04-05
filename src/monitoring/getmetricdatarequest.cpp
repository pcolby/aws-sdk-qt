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

#include "getmetricdatarequest.h"
#include "getmetricdatarequest_p.h"
#include "getmetricdataresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  GetMetricDataRequest
 *
 * @brief  Implements CloudWatch GetMetricData requests.
 *
 * @see    CloudWatchClient::getMetricData
 */

/**
 * @brief  Constructs a new GetMetricDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMetricDataRequest::GetMetricDataRequest(const GetMetricDataRequest &other)
    : CloudWatchRequest(new GetMetricDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMetricDataRequest object.
 */
GetMetricDataRequest::GetMetricDataRequest()
    : CloudWatchRequest(new GetMetricDataRequestPrivate(CloudWatchRequest::GetMetricDataAction, this))
{

}

bool GetMetricDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMetricDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMetricDataResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMetricDataRequestPrivate
 *
 * @brief  Private implementation for GetMetricDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricDataRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public GetMetricDataRequest instance.
 */
GetMetricDataRequestPrivate::GetMetricDataRequestPrivate(
    const CloudWatchRequest::Action action, GetMetricDataRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMetricDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMetricDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMetricDataRequest instance.
 */
GetMetricDataRequestPrivate::GetMetricDataRequestPrivate(
    const GetMetricDataRequestPrivate &other, GetMetricDataRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
