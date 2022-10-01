// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
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
