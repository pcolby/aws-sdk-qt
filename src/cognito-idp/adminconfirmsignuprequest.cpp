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

#include "adminconfirmsignuprequest.h"
#include "adminconfirmsignuprequest_p.h"
#include "adminconfirmsignupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminConfirmSignUpRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminConfirmSignUp requests.
 *
 * @see    CognitoIdentityProviderClient::adminConfirmSignUp
 */

/**
 * @brief  Constructs a new AdminConfirmSignUpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest(const AdminConfirmSignUpRequest &other)
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminConfirmSignUpRequest object.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest()
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(CognitoIdentityProviderRequest::AdminConfirmSignUpAction, this))
{

}

bool AdminConfirmSignUpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminConfirmSignUpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminConfirmSignUpResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminConfirmSignUpRequest::response(QNetworkReply * const reply) const
{
    return new AdminConfirmSignUpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminConfirmSignUpRequestPrivate
 *
 * @brief  Private implementation for AdminConfirmSignUpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminConfirmSignUpRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminConfirmSignUpRequest instance.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminConfirmSignUpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminConfirmSignUpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminConfirmSignUpRequest instance.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const AdminConfirmSignUpRequestPrivate &other, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
