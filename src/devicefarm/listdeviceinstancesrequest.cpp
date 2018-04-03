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

#include "listdeviceinstancesrequest.h"
#include "listdeviceinstancesrequest_p.h"
#include "listdeviceinstancesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListDeviceInstancesRequest
 *
 * @brief  Implements DeviceFarm ListDeviceInstances requests.
 *
 * @see    DeviceFarmClient::listDeviceInstances
 */

/**
 * @brief  Constructs a new ListDeviceInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest(const ListDeviceInstancesRequest &other)
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeviceInstancesRequest object.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest()
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(DeviceFarmRequest::ListDeviceInstancesAction, this))
{

}

bool ListDeviceInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeviceInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeviceInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeviceInstancesRequestPrivate
 *
 * @brief  Private implementation for ListDeviceInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceInstancesRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListDeviceInstancesRequest instance.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const DeviceFarmRequest::Action action, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeviceInstancesRequest instance.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const ListDeviceInstancesRequestPrivate &other, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
