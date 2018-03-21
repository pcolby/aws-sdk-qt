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

#include "listdevicesrequest.h"
#include "listdevicesrequest_p.h"
#include "listdevicesresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListDevicesRequest
 *
 * @brief  Implements DeviceFarm ListDevices requests.
 *
 * @see    DeviceFarmClient::listDevices
 */

/**
 * @brief  Constructs a new ListDevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDevicesResponse::ListDevicesResponse(

/**
 * @brief  Constructs a new ListDevicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDevicesRequest::ListDevicesRequest(const ListDevicesRequest &other)
    : DeviceFarmRequest(new ListDevicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDevicesRequest object.
 */
ListDevicesRequest::ListDevicesRequest()
    : DeviceFarmRequest(new ListDevicesRequestPrivate(DeviceFarmRequest::ListDevicesAction, this))
{

}

bool ListDevicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDevicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDevicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDevicesRequestPrivate
 *
 * @brief  Private implementation for ListDevicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicesRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListDevicesRequest instance.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const DeviceFarmRequest::Action action, ListDevicesRequest * const q)
    : ListDevicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDevicesRequest instance.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const ListDevicesRequestPrivate &other, ListDevicesRequest * const q)
    : ListDevicesPrivate(other, q)
{

}
