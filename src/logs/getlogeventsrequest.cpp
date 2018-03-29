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

#include "getlogeventsrequest.h"
#include "getlogeventsrequest_p.h"
#include "getlogeventsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  GetLogEventsRequest
 *
 * @brief  Implements CloudWatchLogs GetLogEvents requests.
 *
 * @see    CloudWatchLogsClient::getLogEvents
 */

/**
 * @brief  Constructs a new GetLogEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLogEventsRequest::GetLogEventsRequest(const GetLogEventsRequest &other)
    : CloudWatchLogsRequest(new GetLogEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLogEventsRequest object.
 */
GetLogEventsRequest::GetLogEventsRequest()
    : CloudWatchLogsRequest(new GetLogEventsRequestPrivate(CloudWatchLogsRequest::GetLogEventsAction, this))
{

}

bool GetLogEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLogEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLogEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * GetLogEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetLogEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLogEventsRequestPrivate
 *
 * @brief  Private implementation for GetLogEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLogEventsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public GetLogEventsRequest instance.
 */
GetLogEventsRequestPrivate::GetLogEventsRequestPrivate(
    const CloudWatchLogsRequest::Action action, GetLogEventsRequest * const q)
    : GetLogEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLogEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLogEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLogEventsRequest instance.
 */
GetLogEventsRequestPrivate::GetLogEventsRequestPrivate(
    const GetLogEventsRequestPrivate &other, GetLogEventsRequest * const q)
    : GetLogEventsPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
