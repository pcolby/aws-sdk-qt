// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminconfirmsignuprequest.h"
#include "adminconfirmsignuprequest_p.h"
#include "adminconfirmsignupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminConfirmSignUpRequest
 * \brief The AdminConfirmSignUpRequest class provides an interface for CognitoIdentityProvider AdminConfirmSignUp requests.
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
 * \sa CognitoIdentityProviderClient::adminConfirmSignUp
 */

/*!
 * Constructs a copy of \a other.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest(const AdminConfirmSignUpRequest &other)
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminConfirmSignUpRequest object.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest()
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(CognitoIdentityProviderRequest::AdminConfirmSignUpAction, this))
{

}

/*!
 * \reimp
 */
bool AdminConfirmSignUpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminConfirmSignUpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminConfirmSignUpRequest::response(QNetworkReply * const reply) const
{
    return new AdminConfirmSignUpResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminConfirmSignUpRequestPrivate
 * \brief The AdminConfirmSignUpRequestPrivate class provides private implementation for AdminConfirmSignUpRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminConfirmSignUpRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminConfirmSignUpRequest
 * class' copy constructor.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const AdminConfirmSignUpRequestPrivate &other, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
