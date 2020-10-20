/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
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
