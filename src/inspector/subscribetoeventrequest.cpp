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

#include "subscribetoeventrequest.h"
#include "subscribetoeventrequest_p.h"
#include "subscribetoeventresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  SubscribeToEventRequest
 *
 * @brief  Implements Inspector SubscribeToEvent requests.
 *
 * @see    InspectorClient::subscribeToEvent
 */

/**
 * @brief  Constructs a new SubscribeToEventRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubscribeToEventRequest::SubscribeToEventRequest(const SubscribeToEventRequest &other)
    : InspectorRequest(new SubscribeToEventRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubscribeToEventRequest object.
 */
SubscribeToEventRequest::SubscribeToEventRequest()
    : InspectorRequest(new SubscribeToEventRequestPrivate(InspectorRequest::SubscribeToEventAction, this))
{

}

bool SubscribeToEventRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubscribeToEventResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubscribeToEventResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * SubscribeToEventRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeToEventResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubscribeToEventRequestPrivate
 *
 * @brief  Private implementation for SubscribeToEventRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToEventRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public SubscribeToEventRequest instance.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const InspectorRequest::Action action, SubscribeToEventRequest * const q)
    : SubscribeToEventPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToEventRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubscribeToEventRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubscribeToEventRequest instance.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const SubscribeToEventRequestPrivate &other, SubscribeToEventRequest * const q)
    : SubscribeToEventPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
