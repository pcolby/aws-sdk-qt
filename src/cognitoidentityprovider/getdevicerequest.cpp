// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetDeviceRequest
 * \brief The GetDeviceRequest class provides an interface for CognitoIdentityProvider GetDevice requests.
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
 * \sa CognitoIdentityProviderClient::getDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : CognitoIdentityProviderRequest(new GetDeviceRequestPrivate(CognitoIdentityProviderRequest::GetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetDeviceRequestPrivate
 * \brief The GetDeviceRequestPrivate class provides private implementation for GetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetDeviceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
