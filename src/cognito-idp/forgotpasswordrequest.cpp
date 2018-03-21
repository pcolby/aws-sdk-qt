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

#include "forgotpasswordrequest.h"
#include "forgotpasswordrequest_p.h"
#include "forgotpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ForgotPasswordRequest
 *
 * @brief  Implements CognitoIdentityProvider ForgotPassword requests.
 *
 * @see    CognitoIdentityProviderClient::forgotPassword
 */

/**
 * @brief  Constructs a new ForgotPasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ForgotPasswordRequest::ForgotPasswordRequest(const ForgotPasswordRequest &other)
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ForgotPasswordRequest object.
 */
ForgotPasswordRequest::ForgotPasswordRequest()
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(CognitoIdentityProviderRequest::ForgotPasswordAction, this))
{

}

bool ForgotPasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ForgotPasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ForgotPasswordResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ForgotPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ForgotPasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ForgotPasswordRequestPrivate
 *
 * @brief  Private implementation for ForgotPasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ForgotPasswordRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ForgotPasswordRequest instance.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ForgotPasswordRequest * const q)
    : ForgotPasswordPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ForgotPasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ForgotPasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ForgotPasswordRequest instance.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const ForgotPasswordRequestPrivate &other, ForgotPasswordRequest * const q)
    : ForgotPasswordPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
