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

#include "filterlogeventsrequest.h"
#include "filterlogeventsrequest_p.h"
#include "filterlogeventsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  FilterLogEventsRequest
 *
 * @brief  Implements CloudWatchLogs FilterLogEvents requests.
 *
 * @see    CloudWatchLogsClient::filterLogEvents
 */

/**
 * @brief  Constructs a new FilterLogEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
FilterLogEventsRequest::FilterLogEventsRequest(const FilterLogEventsRequest &other)
    : CloudWatchLogsRequest(new FilterLogEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new FilterLogEventsRequest object.
 */
FilterLogEventsRequest::FilterLogEventsRequest()
    : CloudWatchLogsRequest(new FilterLogEventsRequestPrivate(CloudWatchLogsRequest::FilterLogEventsAction, this))
{

}

bool FilterLogEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an FilterLogEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An FilterLogEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * FilterLogEventsRequest::response(QNetworkReply * const reply) const
{
    return new FilterLogEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  FilterLogEventsRequestPrivate
 *
 * @brief  Private implementation for FilterLogEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FilterLogEventsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public FilterLogEventsRequest instance.
 */
FilterLogEventsRequestPrivate::FilterLogEventsRequestPrivate(
    const CloudWatchLogsRequest::Action action, FilterLogEventsRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new FilterLogEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the FilterLogEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public FilterLogEventsRequest instance.
 */
FilterLogEventsRequestPrivate::FilterLogEventsRequestPrivate(
    const FilterLogEventsRequestPrivate &other, FilterLogEventsRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
