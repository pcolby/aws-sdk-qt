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

#include "adminlistdevicesrequest.h"
#include "adminlistdevicesrequest_p.h"
#include "adminlistdevicesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminListDevicesRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminListDevices requests.
 *
 * @see    CognitoIdentityProviderClient::adminListDevices
 */

/**
 * @brief  Constructs a new AdminListDevicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminListDevicesRequest::AdminListDevicesRequest(const AdminListDevicesRequest &other)
    : CognitoIdentityProviderRequest(new AdminListDevicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminListDevicesRequest object.
 */
AdminListDevicesRequest::AdminListDevicesRequest()
    : CognitoIdentityProviderRequest(new AdminListDevicesRequestPrivate(CognitoIdentityProviderRequest::AdminListDevicesAction, this))
{

}

bool AdminListDevicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminListDevicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminListDevicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new AdminListDevicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminListDevicesRequestPrivate
 *
 * @brief  Private implementation for AdminListDevicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminListDevicesRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminListDevicesRequest instance.
 */
AdminListDevicesRequestPrivate::AdminListDevicesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListDevicesRequest * const q)
    : AdminListDevicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminListDevicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminListDevicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminListDevicesRequest instance.
 */
AdminListDevicesRequestPrivate::AdminListDevicesRequestPrivate(
    const AdminListDevicesRequestPrivate &other, AdminListDevicesRequest * const q)
    : AdminListDevicesPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
