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

#include "getopenidtokenrequest.h"
#include "getopenidtokenrequest_p.h"
#include "getopenidtokenresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetOpenIdTokenRequest
 *
 * @brief  Implements CognitoIdentity GetOpenIdToken requests.
 *
 * @see    CognitoIdentityClient::getOpenIdToken
 */

/**
 * @brief  Constructs a new GetOpenIdTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOpenIdTokenRequest::GetOpenIdTokenRequest(const GetOpenIdTokenRequest &other)
    : CognitoIdentityRequest(new GetOpenIdTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOpenIdTokenRequest object.
 */
GetOpenIdTokenRequest::GetOpenIdTokenRequest()
    : CognitoIdentityRequest(new GetOpenIdTokenRequestPrivate(CognitoIdentityRequest::GetOpenIdTokenAction, this))
{

}

bool GetOpenIdTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOpenIdTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOpenIdTokenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * GetOpenIdTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetOpenIdTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOpenIdTokenRequestPrivate
 *
 * @brief  Private implementation for GetOpenIdTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public GetOpenIdTokenRequest instance.
 */
GetOpenIdTokenRequestPrivate::GetOpenIdTokenRequestPrivate(
    const CognitoIdentityRequest::Action action, GetOpenIdTokenRequest * const q)
    : GetOpenIdTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOpenIdTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOpenIdTokenRequest instance.
 */
GetOpenIdTokenRequestPrivate::GetOpenIdTokenRequestPrivate(
    const GetOpenIdTokenRequestPrivate &other, GetOpenIdTokenRequest * const q)
    : GetOpenIdTokenPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
