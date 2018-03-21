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

#include "listthinggroupsrequest.h"
#include "listthinggroupsrequest_p.h"
#include "listthinggroupsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListThingGroupsRequest
 *
 * @brief  Implements IoT ListThingGroups requests.
 *
 * @see    IoTClient::listThingGroups
 */

/**
 * @brief  Constructs a new ListThingGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingGroupsResponse::ListThingGroupsResponse(

/**
 * @brief  Constructs a new ListThingGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingGroupsRequest::ListThingGroupsRequest(const ListThingGroupsRequest &other)
    : IoTRequest(new ListThingGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingGroupsRequest object.
 */
ListThingGroupsRequest::ListThingGroupsRequest()
    : IoTRequest(new ListThingGroupsRequestPrivate(IoTRequest::ListThingGroupsAction, this))
{

}

bool ListThingGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListThingGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListThingGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingGroupsRequestPrivate
 *
 * @brief  Private implementation for ListThingGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingGroupsRequest instance.
 */
ListThingGroupsRequestPrivate::ListThingGroupsRequestPrivate(
    const IoTRequest::Action action, ListThingGroupsRequest * const q)
    : ListThingGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingGroupsRequest instance.
 */
ListThingGroupsRequestPrivate::ListThingGroupsRequestPrivate(
    const ListThingGroupsRequestPrivate &other, ListThingGroupsRequest * const q)
    : ListThingGroupsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
