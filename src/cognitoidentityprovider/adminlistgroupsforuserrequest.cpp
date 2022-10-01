// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminlistgroupsforuserrequest.h"
#include "adminlistgroupsforuserrequest_p.h"
#include "adminlistgroupsforuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListGroupsForUserRequest
 * \brief The AdminListGroupsForUserRequest class provides an interface for CognitoIdentityProvider AdminListGroupsForUser requests.
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
 * \sa CognitoIdentityProviderClient::adminListGroupsForUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest(const AdminListGroupsForUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminListGroupsForUserRequest object.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest()
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(CognitoIdentityProviderRequest::AdminListGroupsForUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminListGroupsForUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminListGroupsForUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminListGroupsForUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminListGroupsForUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListGroupsForUserRequestPrivate
 * \brief The AdminListGroupsForUserRequestPrivate class provides private implementation for AdminListGroupsForUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListGroupsForUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminListGroupsForUserRequestPrivate::AdminListGroupsForUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListGroupsForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminListGroupsForUserRequest
 * class' copy constructor.
 */
AdminListGroupsForUserRequestPrivate::AdminListGroupsForUserRequestPrivate(
    const AdminListGroupsForUserRequestPrivate &other, AdminListGroupsForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
