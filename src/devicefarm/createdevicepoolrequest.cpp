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

#include "createdevicepoolrequest.h"
#include "createdevicepoolrequest_p.h"
#include "createdevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  CreateDevicePoolRequest
 *
 * @brief  Implements DeviceFarm CreateDevicePool requests.
 *
 * @see    DeviceFarmClient::createDevicePool
 */

/**
 * @brief  Constructs a new CreateDevicePoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest(const CreateDevicePoolRequest &other)
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDevicePoolRequest object.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest()
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(DeviceFarmRequest::CreateDevicePoolAction, this))
{

}

bool CreateDevicePoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDevicePoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDevicePoolResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateDevicePoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDevicePoolRequestPrivate
 *
 * @brief  Private implementation for CreateDevicePoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevicePoolRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public CreateDevicePoolRequest instance.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, CreateDevicePoolRequest * const q)
    : CreateDevicePoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevicePoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDevicePoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDevicePoolRequest instance.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const CreateDevicePoolRequestPrivate &other, CreateDevicePoolRequest * const q)
    : CreateDevicePoolPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
