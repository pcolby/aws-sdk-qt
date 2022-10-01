// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admindeleteuserrequest.h"
#include "admindeleteuserrequest_p.h"
#include "admindeleteuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserRequest
 * \brief The AdminDeleteUserRequest class provides an interface for CognitoIdentityProvider AdminDeleteUser requests.
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
 * \sa CognitoIdentityProviderClient::adminDeleteUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest(const AdminDeleteUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDeleteUserRequest object.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDeleteUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDeleteUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserRequestPrivate
 * \brief The AdminDeleteUserRequestPrivate class provides private implementation for AdminDeleteUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserRequest
 * class' copy constructor.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const AdminDeleteUserRequestPrivate &other, AdminDeleteUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
