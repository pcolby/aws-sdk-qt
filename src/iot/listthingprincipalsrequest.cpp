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

#include "listthingprincipalsrequest.h"
#include "listthingprincipalsrequest_p.h"
#include "listthingprincipalsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingPrincipalsRequest
 *
 * @brief  Implements IoT ListThingPrincipals requests.
 *
 * @see    IoTClient::listThingPrincipals
 */

/**
 * @brief  Constructs a new ListThingPrincipalsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingPrincipalsRequest::ListThingPrincipalsRequest(const ListThingPrincipalsRequest &other)
    : IoTRequest(new ListThingPrincipalsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingPrincipalsRequest object.
 */
ListThingPrincipalsRequest::ListThingPrincipalsRequest()
    : IoTRequest(new ListThingPrincipalsRequestPrivate(IoTRequest::ListThingPrincipalsAction, this))
{

}

bool ListThingPrincipalsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingPrincipalsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingPrincipalsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThingPrincipalsRequest::response(QNetworkReply * const reply) const
{
    return new ListThingPrincipalsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingPrincipalsRequestPrivate
 *
 * @brief  Private implementation for ListThingPrincipalsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingPrincipalsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingPrincipalsRequest instance.
 */
ListThingPrincipalsRequestPrivate::ListThingPrincipalsRequestPrivate(
    const IoTRequest::Action action, ListThingPrincipalsRequest * const q)
    : ListThingPrincipalsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingPrincipalsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingPrincipalsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingPrincipalsRequest instance.
 */
ListThingPrincipalsRequestPrivate::ListThingPrincipalsRequestPrivate(
    const ListThingPrincipalsRequestPrivate &other, ListThingPrincipalsRequest * const q)
    : ListThingPrincipalsPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
