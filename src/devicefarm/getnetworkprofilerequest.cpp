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

#include "getnetworkprofilerequest.h"
#include "getnetworkprofilerequest_p.h"
#include "getnetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetNetworkProfileRequest
 *
 * @brief  Implements DeviceFarm GetNetworkProfile requests.
 *
 * @see    DeviceFarmClient::getNetworkProfile
 */

/**
 * @brief  Constructs a new GetNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetNetworkProfileResponse::GetNetworkProfileResponse(

/**
 * @brief  Constructs a new GetNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest(const GetNetworkProfileRequest &other)
    : DeviceFarmRequest(new GetNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetNetworkProfileRequest object.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest()
    : DeviceFarmRequest(new GetNetworkProfileRequestPrivate(DeviceFarmRequest::GetNetworkProfileAction, this))
{

}

bool GetNetworkProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetNetworkProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * GetNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for GetNetworkProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetNetworkProfileRequest instance.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, GetNetworkProfileRequest * const q)
    : GetNetworkProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetNetworkProfileRequest instance.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const GetNetworkProfileRequestPrivate &other, GetNetworkProfileRequest * const q)
    : GetNetworkProfilePrivate(other, q)
{

}
