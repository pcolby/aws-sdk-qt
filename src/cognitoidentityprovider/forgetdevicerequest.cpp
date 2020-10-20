/*
    Copyright 2013-2020 Paul Colby

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

#include "forgetdevicerequest.h"
#include "forgetdevicerequest_p.h"
#include "forgetdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceRequest
 * \brief The ForgetDeviceRequest class provides an interface for CognitoIdentityProvider ForgetDevice requests.
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
 * \sa CognitoIdentityProviderClient::forgetDevice
 */

/*!
 * Constructs a copy of \a other.
 */
ForgetDeviceRequest::ForgetDeviceRequest(const ForgetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new ForgetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ForgetDeviceRequest object.
 */
ForgetDeviceRequest::ForgetDeviceRequest()
    : CognitoIdentityProviderRequest(new ForgetDeviceRequestPrivate(CognitoIdentityProviderRequest::ForgetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ForgetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ForgetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ForgetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ForgetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceRequestPrivate
 * \brief The ForgetDeviceRequestPrivate class provides private implementation for ForgetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ForgetDeviceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ForgetDeviceRequestPrivate::ForgetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ForgetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ForgetDeviceRequest
 * class' copy constructor.
 */
ForgetDeviceRequestPrivate::ForgetDeviceRequestPrivate(
    const ForgetDeviceRequestPrivate &other, ForgetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
