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

#include "confirmdevicerequest.h"
#include "confirmdevicerequest_p.h"
#include "confirmdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceRequest
 * \brief The ConfirmDeviceRequest class provides an interface for CognitoIdentityProvider ConfirmDevice requests.
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
 * \sa CognitoIdentityProviderClient::confirmDevice
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmDeviceRequest::ConfirmDeviceRequest(const ConfirmDeviceRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmDeviceRequest object.
 */
ConfirmDeviceRequest::ConfirmDeviceRequest()
    : CognitoIdentityProviderRequest(new ConfirmDeviceRequestPrivate(CognitoIdentityProviderRequest::ConfirmDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceRequestPrivate
 * \brief The ConfirmDeviceRequestPrivate class provides private implementation for ConfirmDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmDeviceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ConfirmDeviceRequestPrivate::ConfirmDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmDeviceRequest
 * class' copy constructor.
 */
ConfirmDeviceRequestPrivate::ConfirmDeviceRequestPrivate(
    const ConfirmDeviceRequestPrivate &other, ConfirmDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
