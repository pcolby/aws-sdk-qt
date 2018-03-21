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

#include "listthingsrequest.h"
#include "listthingsrequest_p.h"
#include "listthingsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListThingsRequest
 *
 * @brief  Implements IoT ListThings requests.
 *
 * @see    IoTClient::listThings
 */

/**
 * @brief  Constructs a new ListThingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingsResponse::ListThingsResponse(

/**
 * @brief  Constructs a new ListThingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingsRequest::ListThingsRequest(const ListThingsRequest &other)
    : IoTRequest(new ListThingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingsRequest object.
 */
ListThingsRequest::ListThingsRequest()
    : IoTRequest(new ListThingsRequestPrivate(IoTRequest::ListThingsAction, this))
{

}

bool ListThingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListThingsRequest::response(QNetworkReply * const reply) const
{
    return new ListThingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingsRequestPrivate
 *
 * @brief  Private implementation for ListThingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingsRequest instance.
 */
ListThingsRequestPrivate::ListThingsRequestPrivate(
    const IoTRequest::Action action, ListThingsRequest * const q)
    : ListThingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingsRequest instance.
 */
ListThingsRequestPrivate::ListThingsRequestPrivate(
    const ListThingsRequestPrivate &other, ListThingsRequest * const q)
    : ListThingsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
