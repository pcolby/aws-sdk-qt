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

#include "listthinggroupsforthingrequest.h"
#include "listthinggroupsforthingrequest_p.h"
#include "listthinggroupsforthingresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListThingGroupsForThingRequest
 *
 * @brief  Implements IoT ListThingGroupsForThing requests.
 *
 * @see    IoTClient::listThingGroupsForThing
 */

/**
 * @brief  Constructs a new ListThingGroupsForThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingGroupsForThingResponse::ListThingGroupsForThingResponse(

/**
 * @brief  Constructs a new ListThingGroupsForThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingGroupsForThingRequest::ListThingGroupsForThingRequest(const ListThingGroupsForThingRequest &other)
    : IoTRequest(new ListThingGroupsForThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingGroupsForThingRequest object.
 */
ListThingGroupsForThingRequest::ListThingGroupsForThingRequest()
    : IoTRequest(new ListThingGroupsForThingRequestPrivate(IoTRequest::ListThingGroupsForThingAction, this))
{

}

bool ListThingGroupsForThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingGroupsForThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingGroupsForThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListThingGroupsForThingRequest::response(QNetworkReply * const reply) const
{
    return new ListThingGroupsForThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingGroupsForThingRequestPrivate
 *
 * @brief  Private implementation for ListThingGroupsForThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsForThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingGroupsForThingRequest instance.
 */
ListThingGroupsForThingRequestPrivate::ListThingGroupsForThingRequestPrivate(
    const IoTRequest::Action action, ListThingGroupsForThingRequest * const q)
    : ListThingGroupsForThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsForThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingGroupsForThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingGroupsForThingRequest instance.
 */
ListThingGroupsForThingRequestPrivate::ListThingGroupsForThingRequestPrivate(
    const ListThingGroupsForThingRequestPrivate &other, ListThingGroupsForThingRequest * const q)
    : ListThingGroupsForThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
