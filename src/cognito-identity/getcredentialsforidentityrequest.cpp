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

#include "getcredentialsforidentityrequest.h"
#include "getcredentialsforidentityrequest_p.h"
#include "getcredentialsforidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  GetCredentialsForIdentityRequest
 *
 * @brief  Implements CognitoIdentity GetCredentialsForIdentity requests.
 *
 * @see    CognitoIdentityClient::getCredentialsForIdentity
 */

/**
 * @brief  Constructs a new GetCredentialsForIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCredentialsForIdentityRequest::GetCredentialsForIdentityRequest(const GetCredentialsForIdentityRequest &other)
    : CognitoIdentityRequest(new GetCredentialsForIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCredentialsForIdentityRequest object.
 */
GetCredentialsForIdentityRequest::GetCredentialsForIdentityRequest()
    : CognitoIdentityRequest(new GetCredentialsForIdentityRequestPrivate(CognitoIdentityRequest::GetCredentialsForIdentityAction, this))
{

}

bool GetCredentialsForIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCredentialsForIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCredentialsForIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * GetCredentialsForIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCredentialsForIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCredentialsForIdentityRequestPrivate
 *
 * @brief  Private implementation for GetCredentialsForIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCredentialsForIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public GetCredentialsForIdentityRequest instance.
 */
GetCredentialsForIdentityRequestPrivate::GetCredentialsForIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, GetCredentialsForIdentityRequest * const q)
    : GetCredentialsForIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCredentialsForIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCredentialsForIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCredentialsForIdentityRequest instance.
 */
GetCredentialsForIdentityRequestPrivate::GetCredentialsForIdentityRequestPrivate(
    const GetCredentialsForIdentityRequestPrivate &other, GetCredentialsForIdentityRequest * const q)
    : GetCredentialsForIdentityPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
