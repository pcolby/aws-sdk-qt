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

#include "verifyuserattributerequest.h"
#include "verifyuserattributerequest_p.h"
#include "verifyuserattributeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  VerifyUserAttributeRequest
 *
 * @brief  Implements CognitoIdentityProvider VerifyUserAttribute requests.
 *
 * @see    CognitoIdentityProviderClient::verifyUserAttribute
 */

/**
 * @brief  Constructs a new VerifyUserAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyUserAttributeResponse::VerifyUserAttributeResponse(

/**
 * @brief  Constructs a new VerifyUserAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyUserAttributeRequest::VerifyUserAttributeRequest(const VerifyUserAttributeRequest &other)
    : CognitoIdentityProviderRequest(new VerifyUserAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifyUserAttributeRequest object.
 */
VerifyUserAttributeRequest::VerifyUserAttributeRequest()
    : CognitoIdentityProviderRequest(new VerifyUserAttributeRequestPrivate(CognitoIdentityProviderRequest::VerifyUserAttributeAction, this))
{

}

bool VerifyUserAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifyUserAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyUserAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * VerifyUserAttributeRequest::response(QNetworkReply * const reply) const
{
    return new VerifyUserAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifyUserAttributeRequestPrivate
 *
 * @brief  Private implementation for VerifyUserAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyUserAttributeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public VerifyUserAttributeRequest instance.
 */
VerifyUserAttributeRequestPrivate::VerifyUserAttributeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, VerifyUserAttributeRequest * const q)
    : VerifyUserAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifyUserAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyUserAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyUserAttributeRequest instance.
 */
VerifyUserAttributeRequestPrivate::VerifyUserAttributeRequestPrivate(
    const VerifyUserAttributeRequestPrivate &other, VerifyUserAttributeRequest * const q)
    : VerifyUserAttributePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
