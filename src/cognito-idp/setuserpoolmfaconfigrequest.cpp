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

#include "setuserpoolmfaconfigrequest.h"
#include "setuserpoolmfaconfigrequest_p.h"
#include "setuserpoolmfaconfigresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserPoolMfaConfigRequest
 *
 * @brief  Implements CognitoIdentityProvider SetUserPoolMfaConfig requests.
 *
 * @see    CognitoIdentityProviderClient::setUserPoolMfaConfig
 */

/**
 * @brief  Constructs a new SetUserPoolMfaConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetUserPoolMfaConfigRequest::SetUserPoolMfaConfigRequest(const SetUserPoolMfaConfigRequest &other)
    : CognitoIdentityProviderRequest(new SetUserPoolMfaConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetUserPoolMfaConfigRequest object.
 */
SetUserPoolMfaConfigRequest::SetUserPoolMfaConfigRequest()
    : CognitoIdentityProviderRequest(new SetUserPoolMfaConfigRequestPrivate(CognitoIdentityProviderRequest::SetUserPoolMfaConfigAction, this))
{

}

bool SetUserPoolMfaConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetUserPoolMfaConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetUserPoolMfaConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * SetUserPoolMfaConfigRequest::response(QNetworkReply * const reply) const
{
    return new SetUserPoolMfaConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetUserPoolMfaConfigRequestPrivate
 *
 * @brief  Private implementation for SetUserPoolMfaConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserPoolMfaConfigRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public SetUserPoolMfaConfigRequest instance.
 */
SetUserPoolMfaConfigRequestPrivate::SetUserPoolMfaConfigRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetUserPoolMfaConfigRequest * const q)
    : SetUserPoolMfaConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetUserPoolMfaConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetUserPoolMfaConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetUserPoolMfaConfigRequest instance.
 */
SetUserPoolMfaConfigRequestPrivate::SetUserPoolMfaConfigRequestPrivate(
    const SetUserPoolMfaConfigRequestPrivate &other, SetUserPoolMfaConfigRequest * const q)
    : SetUserPoolMfaConfigPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
