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

#include "adminupdateuserattributesrequest.h"
#include "adminupdateuserattributesrequest_p.h"
#include "adminupdateuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateUserAttributesRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminUpdateUserAttributes requests.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateUserAttributes
 */

/**
 * @brief  Constructs a new AdminUpdateUserAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUpdateUserAttributesResponse::AdminUpdateUserAttributesResponse(

/**
 * @brief  Constructs a new AdminUpdateUserAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminUpdateUserAttributesRequest::AdminUpdateUserAttributesRequest(const AdminUpdateUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminUpdateUserAttributesRequest object.
 */
AdminUpdateUserAttributesRequest::AdminUpdateUserAttributesRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateUserAttributesRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateUserAttributesAction, this))
{

}

bool AdminUpdateUserAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminUpdateUserAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminUpdateUserAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminUpdateUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateUserAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminUpdateUserAttributesRequestPrivate
 *
 * @brief  Private implementation for AdminUpdateUserAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateUserAttributesRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminUpdateUserAttributesRequest instance.
 */
AdminUpdateUserAttributesRequestPrivate::AdminUpdateUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateUserAttributesRequest * const q)
    : AdminUpdateUserAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateUserAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateUserAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminUpdateUserAttributesRequest instance.
 */
AdminUpdateUserAttributesRequestPrivate::AdminUpdateUserAttributesRequestPrivate(
    const AdminUpdateUserAttributesRequestPrivate &other, AdminUpdateUserAttributesRequest * const q)
    : AdminUpdateUserAttributesPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
