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

#include "admindeleteuserattributesrequest.h"
#include "admindeleteuserattributesrequest_p.h"
#include "admindeleteuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDeleteUserAttributesRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminDeleteUserAttributes requests.
 *
 * @see    CognitoIdentityProviderClient::adminDeleteUserAttributes
 */

/**
 * @brief  Constructs a new AdminDeleteUserAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest(const AdminDeleteUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminDeleteUserAttributesRequest object.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAttributesAction, this))
{

}

bool AdminDeleteUserAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminDeleteUserAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminDeleteUserAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminDeleteUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminDeleteUserAttributesRequestPrivate
 *
 * @brief  Private implementation for AdminDeleteUserAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDeleteUserAttributesRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminDeleteUserAttributesRequest instance.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserAttributesRequest * const q)
    : AdminDeleteUserAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminDeleteUserAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminDeleteUserAttributesRequest instance.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const AdminDeleteUserAttributesRequestPrivate &other, AdminDeleteUserAttributesRequest * const q)
    : AdminDeleteUserAttributesPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
