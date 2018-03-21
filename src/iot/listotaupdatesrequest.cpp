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

#include "listotaupdatesrequest.h"
#include "listotaupdatesrequest_p.h"
#include "listotaupdatesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListOTAUpdatesRequest
 *
 * @brief  Implements IoT ListOTAUpdates requests.
 *
 * @see    IoTClient::listOTAUpdates
 */

/**
 * @brief  Constructs a new ListOTAUpdatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOTAUpdatesResponse::ListOTAUpdatesResponse(

/**
 * @brief  Constructs a new ListOTAUpdatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOTAUpdatesRequest::ListOTAUpdatesRequest(const ListOTAUpdatesRequest &other)
    : IoTRequest(new ListOTAUpdatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOTAUpdatesRequest object.
 */
ListOTAUpdatesRequest::ListOTAUpdatesRequest()
    : IoTRequest(new ListOTAUpdatesRequestPrivate(IoTRequest::ListOTAUpdatesAction, this))
{

}

bool ListOTAUpdatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOTAUpdatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOTAUpdatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListOTAUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new ListOTAUpdatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOTAUpdatesRequestPrivate
 *
 * @brief  Private implementation for ListOTAUpdatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOTAUpdatesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListOTAUpdatesRequest instance.
 */
ListOTAUpdatesRequestPrivate::ListOTAUpdatesRequestPrivate(
    const IoTRequest::Action action, ListOTAUpdatesRequest * const q)
    : ListOTAUpdatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOTAUpdatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOTAUpdatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOTAUpdatesRequest instance.
 */
ListOTAUpdatesRequestPrivate::ListOTAUpdatesRequestPrivate(
    const ListOTAUpdatesRequestPrivate &other, ListOTAUpdatesRequest * const q)
    : ListOTAUpdatesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
