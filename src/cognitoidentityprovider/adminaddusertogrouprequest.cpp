// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminaddusertogrouprequest.h"
#include "adminaddusertogrouprequest_p.h"
#include "adminaddusertogroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminAddUserToGroupRequest
 * \brief The AdminAddUserToGroupRequest class provides an interface for CognitoIdentityProvider AdminAddUserToGroup requests.
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
 * \sa CognitoIdentityProviderClient::adminAddUserToGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AdminAddUserToGroupRequest::AdminAddUserToGroupRequest(const AdminAddUserToGroupRequest &other)
    : CognitoIdentityProviderRequest(new AdminAddUserToGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminAddUserToGroupRequest object.
 */
AdminAddUserToGroupRequest::AdminAddUserToGroupRequest()
    : CognitoIdentityProviderRequest(new AdminAddUserToGroupRequestPrivate(CognitoIdentityProviderRequest::AdminAddUserToGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AdminAddUserToGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminAddUserToGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminAddUserToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AdminAddUserToGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminAddUserToGroupRequestPrivate
 * \brief The AdminAddUserToGroupRequestPrivate class provides private implementation for AdminAddUserToGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminAddUserToGroupRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminAddUserToGroupRequestPrivate::AdminAddUserToGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminAddUserToGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminAddUserToGroupRequest
 * class' copy constructor.
 */
AdminAddUserToGroupRequestPrivate::AdminAddUserToGroupRequestPrivate(
    const AdminAddUserToGroupRequestPrivate &other, AdminAddUserToGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
