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

#include "listthingtypesrequest.h"
#include "listthingtypesrequest_p.h"
#include "listthingtypesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingTypesRequest
 *
 * @brief  Implements IoT ListThingTypes requests.
 *
 * @see    IoTClient::listThingTypes
 */

/**
 * @brief  Constructs a new ListThingTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingTypesRequest::ListThingTypesRequest(const ListThingTypesRequest &other)
    : IoTRequest(new ListThingTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingTypesRequest object.
 */
ListThingTypesRequest::ListThingTypesRequest()
    : IoTRequest(new ListThingTypesRequestPrivate(IoTRequest::ListThingTypesAction, this))
{

}

bool ListThingTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThingTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListThingTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingTypesRequestPrivate
 *
 * @brief  Private implementation for ListThingTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingTypesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingTypesRequest instance.
 */
ListThingTypesRequestPrivate::ListThingTypesRequestPrivate(
    const IoTRequest::Action action, ListThingTypesRequest * const q)
    : ListThingTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingTypesRequest instance.
 */
ListThingTypesRequestPrivate::ListThingTypesRequestPrivate(
    const ListThingTypesRequestPrivate &other, ListThingTypesRequest * const q)
    : ListThingTypesPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
