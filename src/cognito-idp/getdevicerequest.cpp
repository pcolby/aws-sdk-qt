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

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetDeviceRequest
 *
 * @brief  Implements CognitoIdentityProvider GetDevice requests.
 *
 * @see    CognitoIdentityProviderClient::getDevice
 */

/**
 * @brief  Constructs a new GetDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceResponse::GetDeviceResponse(

/**
 * @brief  Constructs a new GetDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : CognitoIdentityProviderRequest(new GetDeviceRequestPrivate(CognitoIdentityProviderRequest::GetDeviceAction, this))
{

}

bool GetDeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeviceRequestPrivate
 *
 * @brief  Private implementation for GetDeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetDeviceRequest instance.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetDeviceRequest * const q)
    : GetDevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceRequest instance.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : GetDevicePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
