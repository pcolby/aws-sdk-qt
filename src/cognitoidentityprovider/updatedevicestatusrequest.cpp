/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatedevicestatusrequest.h"
#include "updatedevicestatusrequest_p.h"
#include "updatedevicestatusresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateDeviceStatusRequest
 * \brief The UpdateDeviceStatusRequest class provides an interface for CognitoIdentityProvider UpdateDeviceStatus requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::updateDeviceStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceStatusRequest::UpdateDeviceStatusRequest(const UpdateDeviceStatusRequest &other)
    : CognitoIdentityProviderRequest(new UpdateDeviceStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceStatusRequest object.
 */
UpdateDeviceStatusRequest::UpdateDeviceStatusRequest()
    : CognitoIdentityProviderRequest(new UpdateDeviceStatusRequestPrivate(CognitoIdentityProviderRequest::UpdateDeviceStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceStatusResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateDeviceStatusRequestPrivate
 * \brief The UpdateDeviceStatusRequestPrivate class provides private implementation for UpdateDeviceStatusRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateDeviceStatusRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateDeviceStatusRequestPrivate::UpdateDeviceStatusRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceStatusRequest
 * class' copy constructor.
 */
UpdateDeviceStatusRequestPrivate::UpdateDeviceStatusRequestPrivate(
    const UpdateDeviceStatusRequestPrivate &other, UpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
