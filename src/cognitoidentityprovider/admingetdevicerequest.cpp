// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admingetdevicerequest.h"
#include "admingetdevicerequest_p.h"
#include "admingetdeviceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetDeviceRequest
 * \brief The AdminGetDeviceRequest class provides an interface for CognitoIdentityProvider AdminGetDevice requests.
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
 * \sa CognitoIdentityProviderClient::adminGetDevice
 */

/*!
 * Constructs a copy of \a other.
 */
AdminGetDeviceRequest::AdminGetDeviceRequest(const AdminGetDeviceRequest &other)
    : CognitoIdentityProviderRequest(new AdminGetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminGetDeviceRequest object.
 */
AdminGetDeviceRequest::AdminGetDeviceRequest()
    : CognitoIdentityProviderRequest(new AdminGetDeviceRequestPrivate(CognitoIdentityProviderRequest::AdminGetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool AdminGetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminGetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminGetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new AdminGetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetDeviceRequestPrivate
 * \brief The AdminGetDeviceRequestPrivate class provides private implementation for AdminGetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminGetDeviceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminGetDeviceRequestPrivate::AdminGetDeviceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminGetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminGetDeviceRequest
 * class' copy constructor.
 */
AdminGetDeviceRequestPrivate::AdminGetDeviceRequestPrivate(
    const AdminGetDeviceRequestPrivate &other, AdminGetDeviceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
