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

#include "listdevicepoolsrequest.h"
#include "listdevicepoolsrequest_p.h"
#include "listdevicepoolsresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListDevicePoolsRequest
 *
 * @brief  Implements DeviceFarm ListDevicePools requests.
 *
 * @see    DeviceFarmClient::listDevicePools
 */

/**
 * @brief  Constructs a new ListDevicePoolsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest(const ListDevicePoolsRequest &other)
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDevicePoolsRequest object.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest()
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(DeviceFarmRequest::ListDevicePoolsAction, this))
{

}

bool ListDevicePoolsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDevicePoolsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDevicePoolsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListDevicePoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicePoolsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDevicePoolsRequestPrivate
 *
 * @brief  Private implementation for ListDevicePoolsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicePoolsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListDevicePoolsRequest instance.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const DeviceFarmRequest::Action action, ListDevicePoolsRequest * const q)
    : ListDevicePoolsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDevicePoolsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDevicePoolsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDevicePoolsRequest instance.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const ListDevicePoolsRequestPrivate &other, ListDevicePoolsRequest * const q)
    : ListDevicePoolsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
