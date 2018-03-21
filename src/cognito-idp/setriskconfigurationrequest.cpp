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

#include "setriskconfigurationrequest.h"
#include "setriskconfigurationrequest_p.h"
#include "setriskconfigurationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  SetRiskConfigurationRequest
 *
 * @brief  Implements CognitoIdentityProvider SetRiskConfiguration requests.
 *
 * @see    CognitoIdentityProviderClient::setRiskConfiguration
 */

/**
 * @brief  Constructs a new SetRiskConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetRiskConfigurationResponse::SetRiskConfigurationResponse(

/**
 * @brief  Constructs a new SetRiskConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetRiskConfigurationRequest::SetRiskConfigurationRequest(const SetRiskConfigurationRequest &other)
    : CognitoIdentityProviderRequest(new SetRiskConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetRiskConfigurationRequest object.
 */
SetRiskConfigurationRequest::SetRiskConfigurationRequest()
    : CognitoIdentityProviderRequest(new SetRiskConfigurationRequestPrivate(CognitoIdentityProviderRequest::SetRiskConfigurationAction, this))
{

}

bool SetRiskConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetRiskConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetRiskConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * SetRiskConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new SetRiskConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetRiskConfigurationRequestPrivate
 *
 * @brief  Private implementation for SetRiskConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetRiskConfigurationRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public SetRiskConfigurationRequest instance.
 */
SetRiskConfigurationRequestPrivate::SetRiskConfigurationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetRiskConfigurationRequest * const q)
    : SetRiskConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetRiskConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetRiskConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetRiskConfigurationRequest instance.
 */
SetRiskConfigurationRequestPrivate::SetRiskConfigurationRequestPrivate(
    const SetRiskConfigurationRequestPrivate &other, SetRiskConfigurationRequest * const q)
    : SetRiskConfigurationPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
