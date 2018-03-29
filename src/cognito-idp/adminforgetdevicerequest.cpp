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

#include "adminforgetdevicerequest.h"
#include "adminforgetdevicerequest_p.h"
#include "adminforgetdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminForgetDeviceRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminForgetDevice requests.
 *
 * @see    CognitoIdentityProviderClient::adminForgetDevice
 */

/**
 * @brief  Constructs a new AdminForgetDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminForgetDeviceRequest::AdminForgetDeviceRequest(const AdminForgetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new AdminForgetDeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminForgetDeviceRequest object.
 */
AdminForgetDeviceRequest::AdminForgetDeviceRequest()
    : CognitoIdentityProviderRequest(new AdminForgetDeviceRequestPrivate(CognitoIdentityProviderRequest::AdminForgetDeviceAction, this))
{

}

bool AdminForgetDeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminForgetDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminForgetDeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminForgetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new AdminForgetDeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminForgetDeviceRequestPrivate
 *
 * @brief  Private implementation for AdminForgetDeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminForgetDeviceRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminForgetDeviceRequest instance.
 */
AdminForgetDeviceRequestPrivate::AdminForgetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminForgetDeviceRequest * const q)
    : AdminForgetDevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminForgetDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminForgetDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminForgetDeviceRequest instance.
 */
AdminForgetDeviceRequestPrivate::AdminForgetDeviceRequestPrivate(
    const AdminForgetDeviceRequestPrivate &other, AdminForgetDeviceRequest * const q)
    : AdminForgetDevicePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
