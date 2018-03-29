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

#include "unlinkidentityrequest.h"
#include "unlinkidentityrequest_p.h"
#include "unlinkidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  UnlinkIdentityRequest
 *
 * @brief  Implements CognitoIdentity UnlinkIdentity requests.
 *
 * @see    CognitoIdentityClient::unlinkIdentity
 */

/**
 * @brief  Constructs a new UnlinkIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnlinkIdentityRequest::UnlinkIdentityRequest(const UnlinkIdentityRequest &other)
    : CognitoIdentityRequest(new UnlinkIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnlinkIdentityRequest object.
 */
UnlinkIdentityRequest::UnlinkIdentityRequest()
    : CognitoIdentityRequest(new UnlinkIdentityRequestPrivate(CognitoIdentityRequest::UnlinkIdentityAction, this))
{

}

bool UnlinkIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnlinkIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnlinkIdentityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
QtAws::Core::AwsAbstractResponse * UnlinkIdentityRequest::response(QNetworkReply * const reply) const
{
    return new UnlinkIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnlinkIdentityRequestPrivate
 *
 * @brief  Private implementation for UnlinkIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public UnlinkIdentityRequest instance.
 */
UnlinkIdentityRequestPrivate::UnlinkIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, UnlinkIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnlinkIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnlinkIdentityRequest instance.
 */
UnlinkIdentityRequestPrivate::UnlinkIdentityRequestPrivate(
    const UnlinkIdentityRequestPrivate &other, UnlinkIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
