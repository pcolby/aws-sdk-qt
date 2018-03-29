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

#include "associatesoftwaretokenrequest.h"
#include "associatesoftwaretokenrequest_p.h"
#include "associatesoftwaretokenresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AssociateSoftwareTokenRequest
 *
 * @brief  Implements CognitoIdentityProvider AssociateSoftwareToken requests.
 *
 * @see    CognitoIdentityProviderClient::associateSoftwareToken
 */

/**
 * @brief  Constructs a new AssociateSoftwareTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest(const AssociateSoftwareTokenRequest &other)
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateSoftwareTokenRequest object.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest()
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(CognitoIdentityProviderRequest::AssociateSoftwareTokenAction, this))
{

}

bool AssociateSoftwareTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateSoftwareTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateSoftwareTokenResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateSoftwareTokenRequest::response(QNetworkReply * const reply) const
{
    return new AssociateSoftwareTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateSoftwareTokenRequestPrivate
 *
 * @brief  Private implementation for AssociateSoftwareTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateSoftwareTokenRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AssociateSoftwareTokenRequest instance.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateSoftwareTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateSoftwareTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateSoftwareTokenRequest instance.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const AssociateSoftwareTokenRequestPrivate &other, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
