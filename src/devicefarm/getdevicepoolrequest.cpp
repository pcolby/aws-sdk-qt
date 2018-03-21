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

#include "getdevicepoolrequest.h"
#include "getdevicepoolrequest_p.h"
#include "getdevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetDevicePoolRequest
 *
 * @brief  Implements DeviceFarm GetDevicePool requests.
 *
 * @see    DeviceFarmClient::getDevicePool
 */

/**
 * @brief  Constructs a new GetDevicePoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevicePoolResponse::GetDevicePoolResponse(

/**
 * @brief  Constructs a new GetDevicePoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDevicePoolRequest::GetDevicePoolRequest(const GetDevicePoolRequest &other)
    : DeviceFarmRequest(new GetDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDevicePoolRequest object.
 */
GetDevicePoolRequest::GetDevicePoolRequest()
    : DeviceFarmRequest(new GetDevicePoolRequestPrivate(DeviceFarmRequest::GetDevicePoolAction, this))
{

}

bool GetDevicePoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDevicePoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDevicePoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * GetDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDevicePoolRequestPrivate
 *
 * @brief  Private implementation for GetDevicePoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDevicePoolRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetDevicePoolRequest instance.
 */
GetDevicePoolRequestPrivate::GetDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, GetDevicePoolRequest * const q)
    : GetDevicePoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDevicePoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDevicePoolRequest instance.
 */
GetDevicePoolRequestPrivate::GetDevicePoolRequestPrivate(
    const GetDevicePoolRequestPrivate &other, GetDevicePoolRequest * const q)
    : GetDevicePoolPrivate(other, q)
{

}
