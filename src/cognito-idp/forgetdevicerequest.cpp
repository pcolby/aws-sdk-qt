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

#include "forgetdevicerequest.h"
#include "forgetdevicerequest_p.h"
#include "forgetdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ForgetDeviceRequest
 *
 * @brief  Implements CognitoIdentityProvider ForgetDevice requests.
 *
 * @see    CognitoIdentityProviderClient::forgetDevice
 */

/**
 * @brief  Constructs a new ForgetDeviceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ForgetDeviceResponse::ForgetDeviceResponse(

/**
 * @brief  Constructs a new ForgetDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ForgetDeviceRequest::ForgetDeviceRequest(const ForgetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new ForgetDeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ForgetDeviceRequest object.
 */
ForgetDeviceRequest::ForgetDeviceRequest()
    : CognitoIdentityProviderRequest(new ForgetDeviceRequestPrivate(CognitoIdentityProviderRequest::ForgetDeviceAction, this))
{

}

bool ForgetDeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ForgetDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ForgetDeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ForgetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ForgetDeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ForgetDeviceRequestPrivate
 *
 * @brief  Private implementation for ForgetDeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ForgetDeviceRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ForgetDeviceRequest instance.
 */
ForgetDeviceRequestPrivate::ForgetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ForgetDeviceRequest * const q)
    : ForgetDevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ForgetDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ForgetDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ForgetDeviceRequest instance.
 */
ForgetDeviceRequestPrivate::ForgetDeviceRequestPrivate(
    const ForgetDeviceRequestPrivate &other, ForgetDeviceRequest * const q)
    : ForgetDevicePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
