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

#include "setusermfapreferencerequest.h"
#include "setusermfapreferencerequest_p.h"
#include "setusermfapreferenceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  SetUserMFAPreferenceRequest
 *
 * @brief  Implements CognitoIdentityProvider SetUserMFAPreference requests.
 *
 * @see    CognitoIdentityProviderClient::setUserMFAPreference
 */

/**
 * @brief  Constructs a new SetUserMFAPreferenceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetUserMFAPreferenceRequest::SetUserMFAPreferenceRequest(const SetUserMFAPreferenceRequest &other)
    : CognitoIdentityProviderRequest(new SetUserMFAPreferenceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetUserMFAPreferenceRequest object.
 */
SetUserMFAPreferenceRequest::SetUserMFAPreferenceRequest()
    : CognitoIdentityProviderRequest(new SetUserMFAPreferenceRequestPrivate(CognitoIdentityProviderRequest::SetUserMFAPreferenceAction, this))
{

}

bool SetUserMFAPreferenceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetUserMFAPreferenceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetUserMFAPreferenceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * SetUserMFAPreferenceRequest::response(QNetworkReply * const reply) const
{
    return new SetUserMFAPreferenceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetUserMFAPreferenceRequestPrivate
 *
 * @brief  Private implementation for SetUserMFAPreferenceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetUserMFAPreferenceRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public SetUserMFAPreferenceRequest instance.
 */
SetUserMFAPreferenceRequestPrivate::SetUserMFAPreferenceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SetUserMFAPreferenceRequest * const q)
    : SetUserMFAPreferencePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetUserMFAPreferenceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetUserMFAPreferenceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetUserMFAPreferenceRequest instance.
 */
SetUserMFAPreferenceRequestPrivate::SetUserMFAPreferenceRequestPrivate(
    const SetUserMFAPreferenceRequestPrivate &other, SetUserMFAPreferenceRequest * const q)
    : SetUserMFAPreferencePrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
