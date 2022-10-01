// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admingetuserrequest.h"
#include "admingetuserrequest_p.h"
#include "admingetuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserRequest
 * \brief The AdminGetUserRequest class provides an interface for CognitoIdentityProvider AdminGetUser requests.
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
 * \sa CognitoIdentityProviderClient::adminGetUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminGetUserRequest::AdminGetUserRequest(const AdminGetUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminGetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminGetUserRequest object.
 */
AdminGetUserRequest::AdminGetUserRequest()
    : CognitoIdentityProviderRequest(new AdminGetUserRequestPrivate(CognitoIdentityProviderRequest::AdminGetUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminGetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminGetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminGetUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminGetUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserRequestPrivate
 * \brief The AdminGetUserRequestPrivate class provides private implementation for AdminGetUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminGetUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminGetUserRequestPrivate::AdminGetUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminGetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminGetUserRequest
 * class' copy constructor.
 */
AdminGetUserRequestPrivate::AdminGetUserRequestPrivate(
    const AdminGetUserRequestPrivate &other, AdminGetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
