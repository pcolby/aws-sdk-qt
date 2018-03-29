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

#include "getopenidtokenfordeveloperidentityrequest.h"
#include "getopenidtokenfordeveloperidentityrequest_p.h"
#include "getopenidtokenfordeveloperidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  GetOpenIdTokenForDeveloperIdentityRequest
 *
 * @brief  Implements CognitoIdentity GetOpenIdTokenForDeveloperIdentity requests.
 *
 * @see    CognitoIdentityClient::getOpenIdTokenForDeveloperIdentity
 */

/**
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOpenIdTokenForDeveloperIdentityRequest::GetOpenIdTokenForDeveloperIdentityRequest(const GetOpenIdTokenForDeveloperIdentityRequest &other)
    : CognitoIdentityRequest(new GetOpenIdTokenForDeveloperIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityRequest object.
 */
GetOpenIdTokenForDeveloperIdentityRequest::GetOpenIdTokenForDeveloperIdentityRequest()
    : CognitoIdentityRequest(new GetOpenIdTokenForDeveloperIdentityRequestPrivate(CognitoIdentityRequest::GetOpenIdTokenForDeveloperIdentityAction, this))
{

}

bool GetOpenIdTokenForDeveloperIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOpenIdTokenForDeveloperIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOpenIdTokenForDeveloperIdentityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOpenIdTokenForDeveloperIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetOpenIdTokenForDeveloperIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOpenIdTokenForDeveloperIdentityRequestPrivate
 *
 * @brief  Private implementation for GetOpenIdTokenForDeveloperIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public GetOpenIdTokenForDeveloperIdentityRequest instance.
 */
GetOpenIdTokenForDeveloperIdentityRequestPrivate::GetOpenIdTokenForDeveloperIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, GetOpenIdTokenForDeveloperIdentityRequest * const q)
    : GetOpenIdTokenForDeveloperIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIdTokenForDeveloperIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOpenIdTokenForDeveloperIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOpenIdTokenForDeveloperIdentityRequest instance.
 */
GetOpenIdTokenForDeveloperIdentityRequestPrivate::GetOpenIdTokenForDeveloperIdentityRequestPrivate(
    const GetOpenIdTokenForDeveloperIdentityRequestPrivate &other, GetOpenIdTokenForDeveloperIdentityRequest * const q)
    : GetOpenIdTokenForDeveloperIdentityPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
