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

#include "setusersettingsrequest.h"
#include "setusersettingsrequest_p.h"
#include "setusersettingsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserSettingsRequest
 *
 * @brief  Implements CognitoIdentityProvider SetUserSettings requests.
 *
 * @see    CognitoIdentityProviderClient::setUserSettings
 */

/**
 * @brief  Constructs a new SetUserSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetUserSettingsRequest::SetUserSettingsRequest(const SetUserSettingsRequest &other)
    : CognitoIdentityProviderRequest(new SetUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetUserSettingsRequest object.
 */
SetUserSettingsRequest::SetUserSettingsRequest()
    : CognitoIdentityProviderRequest(new SetUserSettingsRequestPrivate(CognitoIdentityProviderRequest::SetUserSettingsAction, this))
{

}

bool SetUserSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetUserSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetUserSettingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * SetUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new SetUserSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetUserSettingsRequestPrivate
 *
 * @brief  Private implementation for SetUserSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserSettingsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public SetUserSettingsRequest instance.
 */
SetUserSettingsRequestPrivate::SetUserSettingsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetUserSettingsRequest * const q)
    : SetUserSettingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetUserSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetUserSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetUserSettingsRequest instance.
 */
SetUserSettingsRequestPrivate::SetUserSettingsRequestPrivate(
    const SetUserSettingsRequestPrivate &other, SetUserSettingsRequest * const q)
    : SetUserSettingsPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
