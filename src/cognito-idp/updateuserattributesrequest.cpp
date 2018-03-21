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

#include "updateuserattributesrequest.h"
#include "updateuserattributesrequest_p.h"
#include "updateuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateUserAttributesRequest
 *
 * @brief  Implements CognitoIdentityProvider UpdateUserAttributes requests.
 *
 * @see    CognitoIdentityProviderClient::updateUserAttributes
 */

/**
 * @brief  Constructs a new UpdateUserAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUserAttributesRequest::UpdateUserAttributesRequest(const UpdateUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new UpdateUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUserAttributesRequest object.
 */
UpdateUserAttributesRequest::UpdateUserAttributesRequest()
    : CognitoIdentityProviderRequest(new UpdateUserAttributesRequestPrivate(CognitoIdentityProviderRequest::UpdateUserAttributesAction, this))
{

}

bool UpdateUserAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUserAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUserAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * UpdateUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUserAttributesRequestPrivate
 *
 * @brief  Private implementation for UpdateUserAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserAttributesRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public UpdateUserAttributesRequest instance.
 */
UpdateUserAttributesRequestPrivate::UpdateUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateUserAttributesRequest * const q)
    : UpdateUserAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUserAttributesRequest instance.
 */
UpdateUserAttributesRequestPrivate::UpdateUserAttributesRequestPrivate(
    const UpdateUserAttributesRequestPrivate &other, UpdateUserAttributesRequest * const q)
    : UpdateUserAttributesPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
