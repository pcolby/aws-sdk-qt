/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putmetricfilterrequest.h"
#include "putmetricfilterrequest_p.h"
#include "putmetricfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutMetricFilterRequest
 *
 * @brief  Implements CloudWatchLogs PutMetricFilter requests.
 *
 * @see    CloudWatchLogsClient::putMetricFilter
 */

/**
 * @brief  Constructs a new PutMetricFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMetricFilterResponse::PutMetricFilterResponse(

/**
 * @brief  Constructs a new PutMetricFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMetricFilterRequest::PutMetricFilterRequest(const PutMetricFilterRequest &other)
    : CloudWatchLogsRequest(new PutMetricFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMetricFilterRequest object.
 */
PutMetricFilterRequest::PutMetricFilterRequest()
    : CloudWatchLogsRequest(new PutMetricFilterRequestPrivate(CloudWatchLogsRequest::PutMetricFilterAction, this))
{

}

bool PutMetricFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMetricFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMetricFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * PutMetricFilterRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMetricFilterRequestPrivate
 *
 * @brief  Private implementation for PutMetricFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutMetricFilterRequest instance.
 */
PutMetricFilterRequestPrivate::PutMetricFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutMetricFilterRequest * const q)
    : PutMetricFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMetricFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMetricFilterRequest instance.
 */
PutMetricFilterRequestPrivate::PutMetricFilterRequestPrivate(
    const PutMetricFilterRequestPrivate &other, PutMetricFilterRequest * const q)
    : PutMetricFilterPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
