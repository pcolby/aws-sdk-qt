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

#include "putmetricdatarequest.h"
#include "putmetricdatarequest_p.h"
#include "putmetricdataresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  PutMetricDataRequest
 *
 * @brief  Implements CloudWatch PutMetricData requests.
 *
 * @see    CloudWatchClient::putMetricData
 */

/**
 * @brief  Constructs a new PutMetricDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMetricDataRequest::PutMetricDataRequest(const PutMetricDataRequest &other)
    : CloudWatchRequest(new PutMetricDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMetricDataRequest object.
 */
PutMetricDataRequest::PutMetricDataRequest()
    : CloudWatchRequest(new PutMetricDataRequestPrivate(CloudWatchRequest::PutMetricDataAction, this))
{

}

bool PutMetricDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMetricDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMetricDataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * PutMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMetricDataRequestPrivate
 *
 * @brief  Private implementation for PutMetricDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricDataRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public PutMetricDataRequest instance.
 */
PutMetricDataRequestPrivate::PutMetricDataRequestPrivate(
    const CloudWatchRequest::Action action, PutMetricDataRequest * const q)
    : PutMetricDataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMetricDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMetricDataRequest instance.
 */
PutMetricDataRequestPrivate::PutMetricDataRequestPrivate(
    const PutMetricDataRequestPrivate &other, PutMetricDataRequest * const q)
    : PutMetricDataPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
