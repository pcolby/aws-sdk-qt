// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminenableuserrequest.h"
#include "adminenableuserrequest_p.h"
#include "adminenableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserRequest
 * \brief The AdminEnableUserRequest class provides an interface for CognitoIdentityProvider AdminEnableUser requests.
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
 * \sa CognitoIdentityProviderClient::adminEnableUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminEnableUserRequest::AdminEnableUserRequest(const AdminEnableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminEnableUserRequest object.
 */
AdminEnableUserRequest::AdminEnableUserRequest()
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(CognitoIdentityProviderRequest::AdminEnableUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminEnableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminEnableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminEnableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminEnableUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserRequestPrivate
 * \brief The AdminEnableUserRequestPrivate class provides private implementation for AdminEnableUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminEnableUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminEnableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminEnableUserRequest
 * class' copy constructor.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const AdminEnableUserRequestPrivate &other, AdminEnableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
