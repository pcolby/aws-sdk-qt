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

#include "admininitiateauthrequest.h"
#include "admininitiateauthrequest_p.h"
#include "admininitiateauthresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminInitiateAuthRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminInitiateAuth requests.
 *
 * @see    CognitoIdentityProviderClient::adminInitiateAuth
 */

/**
 * @brief  Constructs a new AdminInitiateAuthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminInitiateAuthResponse::AdminInitiateAuthResponse(

/**
 * @brief  Constructs a new AdminInitiateAuthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest(const AdminInitiateAuthRequest &other)
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminInitiateAuthRequest object.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest()
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(CognitoIdentityProviderRequest::AdminInitiateAuthAction, this))
{

}

bool AdminInitiateAuthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminInitiateAuthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminInitiateAuthResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminInitiateAuthRequest::response(QNetworkReply * const reply) const
{
    return new AdminInitiateAuthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminInitiateAuthRequestPrivate
 *
 * @brief  Private implementation for AdminInitiateAuthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminInitiateAuthRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminInitiateAuthRequest instance.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminInitiateAuthRequest * const q)
    : AdminInitiateAuthPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminInitiateAuthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminInitiateAuthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminInitiateAuthRequest instance.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const AdminInitiateAuthRequestPrivate &other, AdminInitiateAuthRequest * const q)
    : AdminInitiateAuthPrivate(other, q)
{

}
