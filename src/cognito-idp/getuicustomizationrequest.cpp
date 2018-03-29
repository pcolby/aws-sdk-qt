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

#include "getuicustomizationrequest.h"
#include "getuicustomizationrequest_p.h"
#include "getuicustomizationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  GetUICustomizationRequest
 *
 * @brief  Implements CognitoIdentityProvider GetUICustomization requests.
 *
 * @see    CognitoIdentityProviderClient::getUICustomization
 */

/**
 * @brief  Constructs a new GetUICustomizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUICustomizationRequest::GetUICustomizationRequest(const GetUICustomizationRequest &other)
    : CognitoIdentityProviderRequest(new GetUICustomizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUICustomizationRequest object.
 */
GetUICustomizationRequest::GetUICustomizationRequest()
    : CognitoIdentityProviderRequest(new GetUICustomizationRequestPrivate(CognitoIdentityProviderRequest::GetUICustomizationAction, this))
{

}

bool GetUICustomizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUICustomizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUICustomizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetUICustomizationRequest::response(QNetworkReply * const reply) const
{
    return new GetUICustomizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUICustomizationRequestPrivate
 *
 * @brief  Private implementation for GetUICustomizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUICustomizationRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetUICustomizationRequest instance.
 */
GetUICustomizationRequestPrivate::GetUICustomizationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUICustomizationRequest * const q)
    : GetUICustomizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUICustomizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUICustomizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUICustomizationRequest instance.
 */
GetUICustomizationRequestPrivate::GetUICustomizationRequestPrivate(
    const GetUICustomizationRequestPrivate &other, GetUICustomizationRequest * const q)
    : GetUICustomizationPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
