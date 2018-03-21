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

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  PutEventsRequest
 *
 * @brief  Implements CloudWatchEvents PutEvents requests.
 *
 * @see    CloudWatchEventsClient::putEvents
 */

/**
 * @brief  Constructs a new PutEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : CloudWatchEventsRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : CloudWatchEventsRequest(new PutEventsRequestPrivate(CloudWatchEventsRequest::PutEventsAction, this))
{

}

bool PutEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutEventsRequestPrivate
 *
 * @brief  Private implementation for PutEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventsRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public PutEventsRequest instance.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const CloudWatchEventsRequest::Action action, PutEventsRequest * const q)
    : PutEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutEventsRequest instance.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : PutEventsPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace AWS
