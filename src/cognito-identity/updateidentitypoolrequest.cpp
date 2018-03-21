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

#include "updateidentitypoolrequest.h"
#include "updateidentitypoolrequest_p.h"
#include "updateidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  UpdateIdentityPoolRequest
 *
 * @brief  Implements CognitoIdentity UpdateIdentityPool requests.
 *
 * @see    CognitoIdentityClient::updateIdentityPool
 */

/**
 * @brief  Constructs a new UpdateIdentityPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIdentityPoolRequest::UpdateIdentityPoolRequest(const UpdateIdentityPoolRequest &other)
    : CognitoIdentityRequest(new UpdateIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIdentityPoolRequest object.
 */
UpdateIdentityPoolRequest::UpdateIdentityPoolRequest()
    : CognitoIdentityRequest(new UpdateIdentityPoolRequestPrivate(CognitoIdentityRequest::UpdateIdentityPoolAction, this))
{

}

bool UpdateIdentityPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIdentityPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIdentityPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * UpdateIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIdentityPoolRequestPrivate
 *
 * @brief  Private implementation for UpdateIdentityPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIdentityPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public UpdateIdentityPoolRequest instance.
 */
UpdateIdentityPoolRequestPrivate::UpdateIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, UpdateIdentityPoolRequest * const q)
    : UpdateIdentityPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIdentityPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIdentityPoolRequest instance.
 */
UpdateIdentityPoolRequestPrivate::UpdateIdentityPoolRequestPrivate(
    const UpdateIdentityPoolRequestPrivate &other, UpdateIdentityPoolRequest * const q)
    : UpdateIdentityPoolPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
