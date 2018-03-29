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

#include "unlinkdeveloperidentityrequest.h"
#include "unlinkdeveloperidentityrequest_p.h"
#include "unlinkdeveloperidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  UnlinkDeveloperIdentityRequest
 *
 * @brief  Implements CognitoIdentity UnlinkDeveloperIdentity requests.
 *
 * @see    CognitoIdentityClient::unlinkDeveloperIdentity
 */

/**
 * @brief  Constructs a new UnlinkDeveloperIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnlinkDeveloperIdentityRequest::UnlinkDeveloperIdentityRequest(const UnlinkDeveloperIdentityRequest &other)
    : CognitoIdentityRequest(new UnlinkDeveloperIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnlinkDeveloperIdentityRequest object.
 */
UnlinkDeveloperIdentityRequest::UnlinkDeveloperIdentityRequest()
    : CognitoIdentityRequest(new UnlinkDeveloperIdentityRequestPrivate(CognitoIdentityRequest::UnlinkDeveloperIdentityAction, this))
{

}

bool UnlinkDeveloperIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnlinkDeveloperIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnlinkDeveloperIdentityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
QtAws::Core::AwsAbstractResponse * UnlinkDeveloperIdentityRequest::response(QNetworkReply * const reply) const
{
    return new UnlinkDeveloperIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnlinkDeveloperIdentityRequestPrivate
 *
 * @brief  Private implementation for UnlinkDeveloperIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkDeveloperIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public UnlinkDeveloperIdentityRequest instance.
 */
UnlinkDeveloperIdentityRequestPrivate::UnlinkDeveloperIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, UnlinkDeveloperIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnlinkDeveloperIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnlinkDeveloperIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnlinkDeveloperIdentityRequest instance.
 */
UnlinkDeveloperIdentityRequestPrivate::UnlinkDeveloperIdentityRequestPrivate(
    const UnlinkDeveloperIdentityRequestPrivate &other, UnlinkDeveloperIdentityRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
