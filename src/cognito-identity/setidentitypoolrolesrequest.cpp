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

#include "setidentitypoolrolesrequest.h"
#include "setidentitypoolrolesrequest_p.h"
#include "setidentitypoolrolesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  SetIdentityPoolRolesRequest
 *
 * @brief  Implements CognitoIdentity SetIdentityPoolRoles requests.
 *
 * @see    CognitoIdentityClient::setIdentityPoolRoles
 */

/**
 * @brief  Constructs a new SetIdentityPoolRolesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityPoolRolesResponse::SetIdentityPoolRolesResponse(

/**
 * @brief  Constructs a new SetIdentityPoolRolesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIdentityPoolRolesRequest::SetIdentityPoolRolesRequest(const SetIdentityPoolRolesRequest &other)
    : CognitoIdentityRequest(new SetIdentityPoolRolesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIdentityPoolRolesRequest object.
 */
SetIdentityPoolRolesRequest::SetIdentityPoolRolesRequest()
    : CognitoIdentityRequest(new SetIdentityPoolRolesRequestPrivate(CognitoIdentityRequest::SetIdentityPoolRolesAction, this))
{

}

bool SetIdentityPoolRolesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIdentityPoolRolesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIdentityPoolRolesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * SetIdentityPoolRolesRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityPoolRolesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIdentityPoolRolesRequestPrivate
 *
 * @brief  Private implementation for SetIdentityPoolRolesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolRolesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public SetIdentityPoolRolesRequest instance.
 */
SetIdentityPoolRolesRequestPrivate::SetIdentityPoolRolesRequestPrivate(
    const CognitoIdentityRequest::Action action, SetIdentityPoolRolesRequest * const q)
    : SetIdentityPoolRolesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolRolesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityPoolRolesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIdentityPoolRolesRequest instance.
 */
SetIdentityPoolRolesRequestPrivate::SetIdentityPoolRolesRequestPrivate(
    const SetIdentityPoolRolesRequestPrivate &other, SetIdentityPoolRolesRequest * const q)
    : SetIdentityPoolRolesPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
