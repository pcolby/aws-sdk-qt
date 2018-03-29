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

#include "getofferingstatusrequest.h"
#include "getofferingstatusrequest_p.h"
#include "getofferingstatusresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetOfferingStatusRequest
 *
 * @brief  Implements DeviceFarm GetOfferingStatus requests.
 *
 * @see    DeviceFarmClient::getOfferingStatus
 */

/**
 * @brief  Constructs a new GetOfferingStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOfferingStatusRequest::GetOfferingStatusRequest(const GetOfferingStatusRequest &other)
    : DeviceFarmRequest(new GetOfferingStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOfferingStatusRequest object.
 */
GetOfferingStatusRequest::GetOfferingStatusRequest()
    : DeviceFarmRequest(new GetOfferingStatusRequestPrivate(DeviceFarmRequest::GetOfferingStatusAction, this))
{

}

bool GetOfferingStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOfferingStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOfferingStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * GetOfferingStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetOfferingStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOfferingStatusRequestPrivate
 *
 * @brief  Private implementation for GetOfferingStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOfferingStatusRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetOfferingStatusRequest instance.
 */
GetOfferingStatusRequestPrivate::GetOfferingStatusRequestPrivate(
    const DeviceFarmRequest::Action action, GetOfferingStatusRequest * const q)
    : GetOfferingStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOfferingStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOfferingStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOfferingStatusRequest instance.
 */
GetOfferingStatusRequestPrivate::GetOfferingStatusRequestPrivate(
    const GetOfferingStatusRequestPrivate &other, GetOfferingStatusRequest * const q)
    : GetOfferingStatusPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
