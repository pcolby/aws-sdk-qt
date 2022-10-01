// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminupdatedevicestatusrequest.h"
#include "adminupdatedevicestatusrequest_p.h"
#include "adminupdatedevicestatusresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateDeviceStatusRequest
 * \brief The AdminUpdateDeviceStatusRequest class provides an interface for CognitoIdentityProvider AdminUpdateDeviceStatus requests.
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
 * \sa CognitoIdentityProviderClient::adminUpdateDeviceStatus
 */

/*!
 * Constructs a copy of \a other.
 */
AdminUpdateDeviceStatusRequest::AdminUpdateDeviceStatusRequest(const AdminUpdateDeviceStatusRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateDeviceStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminUpdateDeviceStatusRequest object.
 */
AdminUpdateDeviceStatusRequest::AdminUpdateDeviceStatusRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateDeviceStatusRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateDeviceStatusAction, this))
{

}

/*!
 * \reimp
 */
bool AdminUpdateDeviceStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminUpdateDeviceStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUpdateDeviceStatusRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateDeviceStatusResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateDeviceStatusRequestPrivate
 * \brief The AdminUpdateDeviceStatusRequestPrivate class provides private implementation for AdminUpdateDeviceStatusRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateDeviceStatusRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminUpdateDeviceStatusRequestPrivate::AdminUpdateDeviceStatusRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateDeviceStatusRequest
 * class' copy constructor.
 */
AdminUpdateDeviceStatusRequestPrivate::AdminUpdateDeviceStatusRequestPrivate(
    const AdminUpdateDeviceStatusRequestPrivate &other, AdminUpdateDeviceStatusRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
