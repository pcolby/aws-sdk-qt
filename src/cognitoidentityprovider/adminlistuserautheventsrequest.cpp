// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminlistuserautheventsrequest.h"
#include "adminlistuserautheventsrequest_p.h"
#include "adminlistuserautheventsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsRequest
 * \brief The AdminListUserAuthEventsRequest class provides an interface for CognitoIdentityProvider AdminListUserAuthEvents requests.
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
 * \sa CognitoIdentityProviderClient::adminListUserAuthEvents
 */

/*!
 * Constructs a copy of \a other.
 */
AdminListUserAuthEventsRequest::AdminListUserAuthEventsRequest(const AdminListUserAuthEventsRequest &other)
    : CognitoIdentityProviderRequest(new AdminListUserAuthEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminListUserAuthEventsRequest object.
 */
AdminListUserAuthEventsRequest::AdminListUserAuthEventsRequest()
    : CognitoIdentityProviderRequest(new AdminListUserAuthEventsRequestPrivate(CognitoIdentityProviderRequest::AdminListUserAuthEventsAction, this))
{

}

/*!
 * \reimp
 */
bool AdminListUserAuthEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminListUserAuthEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminListUserAuthEventsRequest::response(QNetworkReply * const reply) const
{
    return new AdminListUserAuthEventsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsRequestPrivate
 * \brief The AdminListUserAuthEventsRequestPrivate class provides private implementation for AdminListUserAuthEventsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListUserAuthEventsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminListUserAuthEventsRequestPrivate::AdminListUserAuthEventsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListUserAuthEventsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminListUserAuthEventsRequest
 * class' copy constructor.
 */
AdminListUserAuthEventsRequestPrivate::AdminListUserAuthEventsRequestPrivate(
    const AdminListUserAuthEventsRequestPrivate &other, AdminListUserAuthEventsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
