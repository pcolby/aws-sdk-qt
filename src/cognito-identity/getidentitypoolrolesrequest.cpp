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

#include "getidentitypoolrolesrequest.h"
#include "getidentitypoolrolesrequest_p.h"
#include "getidentitypoolrolesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  GetIdentityPoolRolesRequest
 *
 * @brief  Implements CognitoIdentity GetIdentityPoolRoles requests.
 *
 * @see    CognitoIdentityClient::getIdentityPoolRoles
 */

/**
 * @brief  Constructs a new GetIdentityPoolRolesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityPoolRolesRequest::GetIdentityPoolRolesRequest(const GetIdentityPoolRolesRequest &other)
    : CognitoIdentityRequest(new GetIdentityPoolRolesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityPoolRolesRequest object.
 */
GetIdentityPoolRolesRequest::GetIdentityPoolRolesRequest()
    : CognitoIdentityRequest(new GetIdentityPoolRolesRequestPrivate(CognitoIdentityRequest::GetIdentityPoolRolesAction, this))
{

}

bool GetIdentityPoolRolesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityPoolRolesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityPoolRolesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityPoolRolesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityPoolRolesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityPoolRolesRequestPrivate
 *
 * @brief  Private implementation for GetIdentityPoolRolesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolRolesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public GetIdentityPoolRolesRequest instance.
 */
GetIdentityPoolRolesRequestPrivate::GetIdentityPoolRolesRequestPrivate(
    const CognitoIdentityRequest::Action action, GetIdentityPoolRolesRequest * const q)
    : GetIdentityPoolRolesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolRolesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityPoolRolesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityPoolRolesRequest instance.
 */
GetIdentityPoolRolesRequestPrivate::GetIdentityPoolRolesRequestPrivate(
    const GetIdentityPoolRolesRequestPrivate &other, GetIdentityPoolRolesRequest * const q)
    : GetIdentityPoolRolesPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
