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

#include "putlogeventsrequest.h"
#include "putlogeventsrequest_p.h"
#include "putlogeventsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutLogEventsRequest
 *
 * @brief  Implements CloudWatchLogs PutLogEvents requests.
 *
 * @see    CloudWatchLogsClient::putLogEvents
 */

/**
 * @brief  Constructs a new PutLogEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLogEventsResponse::PutLogEventsResponse(

/**
 * @brief  Constructs a new PutLogEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLogEventsRequest::PutLogEventsRequest(const PutLogEventsRequest &other)
    : CloudWatchLogsRequest(new PutLogEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutLogEventsRequest object.
 */
PutLogEventsRequest::PutLogEventsRequest()
    : CloudWatchLogsRequest(new PutLogEventsRequestPrivate(CloudWatchLogsRequest::PutLogEventsAction, this))
{

}

bool PutLogEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutLogEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLogEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * PutLogEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutLogEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutLogEventsRequestPrivate
 *
 * @brief  Private implementation for PutLogEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLogEventsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutLogEventsRequest instance.
 */
PutLogEventsRequestPrivate::PutLogEventsRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutLogEventsRequest * const q)
    : PutLogEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutLogEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLogEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLogEventsRequest instance.
 */
PutLogEventsRequestPrivate::PutLogEventsRequestPrivate(
    const PutLogEventsRequestPrivate &other, PutLogEventsRequest * const q)
    : PutLogEventsPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
