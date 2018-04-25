/*
    Copyright 2013-2018 Paul Colby

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

#include "adminforgetdevicerequest.h"
#include "adminforgetdevicerequest_p.h"
#include "adminforgetdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminForgetDeviceRequest
 * \brief The AdminForgetDeviceRequest class provides an interface for CognitoIdentityProvider AdminForgetDevice requests.
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
 * \sa CognitoIdentityProviderClient::adminForgetDevice
 */

/*!
 * Constructs a copy of \a other.
 */
AdminForgetDeviceRequest::AdminForgetDeviceRequest(const AdminForgetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new AdminForgetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminForgetDeviceRequest object.
 */
AdminForgetDeviceRequest::AdminForgetDeviceRequest()
    : CognitoIdentityProviderRequest(new AdminForgetDeviceRequestPrivate(CognitoIdentityProviderRequest::AdminForgetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool AdminForgetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminForgetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminForgetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new AdminForgetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminForgetDeviceRequestPrivate
 * \brief The AdminForgetDeviceRequestPrivate class provides private implementation for AdminForgetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminForgetDeviceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminForgetDeviceRequestPrivate::AdminForgetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminForgetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminForgetDeviceRequest
 * class' copy constructor.
 */
AdminForgetDeviceRequestPrivate::AdminForgetDeviceRequestPrivate(
    const AdminForgetDeviceRequestPrivate &other, AdminForgetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
