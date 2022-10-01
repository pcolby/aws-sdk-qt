// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admininitiateauthrequest.h"
#include "admininitiateauthrequest_p.h"
#include "admininitiateauthresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthRequest
 * \brief The AdminInitiateAuthRequest class provides an interface for CognitoIdentityProvider AdminInitiateAuth requests.
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
 * \sa CognitoIdentityProviderClient::adminInitiateAuth
 */

/*!
 * Constructs a copy of \a other.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest(const AdminInitiateAuthRequest &other)
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminInitiateAuthRequest object.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest()
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(CognitoIdentityProviderRequest::AdminInitiateAuthAction, this))
{

}

/*!
 * \reimp
 */
bool AdminInitiateAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminInitiateAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminInitiateAuthRequest::response(QNetworkReply * const reply) const
{
    return new AdminInitiateAuthResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthRequestPrivate
 * \brief The AdminInitiateAuthRequestPrivate class provides private implementation for AdminInitiateAuthRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminInitiateAuthRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminInitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminInitiateAuthRequest
 * class' copy constructor.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const AdminInitiateAuthRequestPrivate &other, AdminInitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
