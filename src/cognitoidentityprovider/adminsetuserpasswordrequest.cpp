// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminsetuserpasswordrequest.h"
#include "adminsetuserpasswordrequest_p.h"
#include "adminsetuserpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordRequest
 * \brief The AdminSetUserPasswordRequest class provides an interface for CognitoIdentityProvider AdminSetUserPassword requests.
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
 * \sa CognitoIdentityProviderClient::adminSetUserPassword
 */

/*!
 * Constructs a copy of \a other.
 */
AdminSetUserPasswordRequest::AdminSetUserPasswordRequest(const AdminSetUserPasswordRequest &other)
    : CognitoIdentityProviderRequest(new AdminSetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminSetUserPasswordRequest object.
 */
AdminSetUserPasswordRequest::AdminSetUserPasswordRequest()
    : CognitoIdentityProviderRequest(new AdminSetUserPasswordRequestPrivate(CognitoIdentityProviderRequest::AdminSetUserPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool AdminSetUserPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminSetUserPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminSetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new AdminSetUserPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordRequestPrivate
 * \brief The AdminSetUserPasswordRequestPrivate class provides private implementation for AdminSetUserPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminSetUserPasswordRequestPrivate::AdminSetUserPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminSetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminSetUserPasswordRequest
 * class' copy constructor.
 */
AdminSetUserPasswordRequestPrivate::AdminSetUserPasswordRequestPrivate(
    const AdminSetUserPasswordRequestPrivate &other, AdminSetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
