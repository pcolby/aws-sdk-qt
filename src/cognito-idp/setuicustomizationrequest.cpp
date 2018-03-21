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

#include "setuicustomizationrequest.h"
#include "setuicustomizationrequest_p.h"
#include "setuicustomizationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  SetUICustomizationRequest
 *
 * @brief  Implements CognitoIdentityProvider SetUICustomization requests.
 *
 * @see    CognitoIdentityProviderClient::setUICustomization
 */

/**
 * @brief  Constructs a new SetUICustomizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetUICustomizationResponse::SetUICustomizationResponse(

/**
 * @brief  Constructs a new SetUICustomizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetUICustomizationRequest::SetUICustomizationRequest(const SetUICustomizationRequest &other)
    : CognitoIdentityProviderRequest(new SetUICustomizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetUICustomizationRequest object.
 */
SetUICustomizationRequest::SetUICustomizationRequest()
    : CognitoIdentityProviderRequest(new SetUICustomizationRequestPrivate(CognitoIdentityProviderRequest::SetUICustomizationAction, this))
{

}

bool SetUICustomizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetUICustomizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetUICustomizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * SetUICustomizationRequest::response(QNetworkReply * const reply) const
{
    return new SetUICustomizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetUICustomizationRequestPrivate
 *
 * @brief  Private implementation for SetUICustomizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUICustomizationRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public SetUICustomizationRequest instance.
 */
SetUICustomizationRequestPrivate::SetUICustomizationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetUICustomizationRequest * const q)
    : SetUICustomizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetUICustomizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetUICustomizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetUICustomizationRequest instance.
 */
SetUICustomizationRequestPrivate::SetUICustomizationRequestPrivate(
    const SetUICustomizationRequestPrivate &other, SetUICustomizationRequest * const q)
    : SetUICustomizationPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
