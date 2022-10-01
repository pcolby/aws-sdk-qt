// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "globalsignoutrequest.h"
#include "globalsignoutrequest_p.h"
#include "globalsignoutresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GlobalSignOutRequest
 * \brief The GlobalSignOutRequest class provides an interface for CognitoIdentityProvider GlobalSignOut requests.
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
 * \sa CognitoIdentityProviderClient::globalSignOut
 */

/*!
 * Constructs a copy of \a other.
 */
GlobalSignOutRequest::GlobalSignOutRequest(const GlobalSignOutRequest &other)
    : CognitoIdentityProviderRequest(new GlobalSignOutRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GlobalSignOutRequest object.
 */
GlobalSignOutRequest::GlobalSignOutRequest()
    : CognitoIdentityProviderRequest(new GlobalSignOutRequestPrivate(CognitoIdentityProviderRequest::GlobalSignOutAction, this))
{

}

/*!
 * \reimp
 */
bool GlobalSignOutRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GlobalSignOutResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GlobalSignOutRequest::response(QNetworkReply * const reply) const
{
    return new GlobalSignOutResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GlobalSignOutRequestPrivate
 * \brief The GlobalSignOutRequestPrivate class provides private implementation for GlobalSignOutRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GlobalSignOutRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GlobalSignOutRequestPrivate::GlobalSignOutRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GlobalSignOutRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GlobalSignOutRequest
 * class' copy constructor.
 */
GlobalSignOutRequestPrivate::GlobalSignOutRequestPrivate(
    const GlobalSignOutRequestPrivate &other, GlobalSignOutRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
