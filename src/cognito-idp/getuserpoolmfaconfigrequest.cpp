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

#include "getuserpoolmfaconfigrequest.h"
#include "getuserpoolmfaconfigrequest_p.h"
#include "getuserpoolmfaconfigresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetUserPoolMfaConfigRequest
 *
 * @brief  Implements CognitoIdentityProvider GetUserPoolMfaConfig requests.
 *
 * @see    CognitoIdentityProviderClient::getUserPoolMfaConfig
 */

/**
 * @brief  Constructs a new GetUserPoolMfaConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserPoolMfaConfigResponse::GetUserPoolMfaConfigResponse(

/**
 * @brief  Constructs a new GetUserPoolMfaConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserPoolMfaConfigRequest::GetUserPoolMfaConfigRequest(const GetUserPoolMfaConfigRequest &other)
    : CognitoIdentityProviderRequest(new GetUserPoolMfaConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserPoolMfaConfigRequest object.
 */
GetUserPoolMfaConfigRequest::GetUserPoolMfaConfigRequest()
    : CognitoIdentityProviderRequest(new GetUserPoolMfaConfigRequestPrivate(CognitoIdentityProviderRequest::GetUserPoolMfaConfigAction, this))
{

}

bool GetUserPoolMfaConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserPoolMfaConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserPoolMfaConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetUserPoolMfaConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetUserPoolMfaConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserPoolMfaConfigRequestPrivate
 *
 * @brief  Private implementation for GetUserPoolMfaConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPoolMfaConfigRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetUserPoolMfaConfigRequest instance.
 */
GetUserPoolMfaConfigRequestPrivate::GetUserPoolMfaConfigRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUserPoolMfaConfigRequest * const q)
    : GetUserPoolMfaConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserPoolMfaConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserPoolMfaConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserPoolMfaConfigRequest instance.
 */
GetUserPoolMfaConfigRequestPrivate::GetUserPoolMfaConfigRequestPrivate(
    const GetUserPoolMfaConfigRequestPrivate &other, GetUserPoolMfaConfigRequest * const q)
    : GetUserPoolMfaConfigPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
