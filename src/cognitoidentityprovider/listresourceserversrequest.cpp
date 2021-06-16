/*
    Copyright 2013-2021 Paul Colby

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

#include "listresourceserversrequest.h"
#include "listresourceserversrequest_p.h"
#include "listresourceserversresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersRequest
 * \brief The ListResourceServersRequest class provides an interface for CognitoIdentityProvider ListResourceServers requests.
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
 * \sa CognitoIdentityProviderClient::listResourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceServersRequest::ListResourceServersRequest(const ListResourceServersRequest &other)
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceServersRequest object.
 */
ListResourceServersRequest::ListResourceServersRequest()
    : CognitoIdentityProviderRequest(new ListResourceServersRequestPrivate(CognitoIdentityProviderRequest::ListResourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceServersRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListResourceServersRequestPrivate
 * \brief The ListResourceServersRequestPrivate class provides private implementation for ListResourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListResourceServersRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListResourceServersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceServersRequest
 * class' copy constructor.
 */
ListResourceServersRequestPrivate::ListResourceServersRequestPrivate(
    const ListResourceServersRequestPrivate &other, ListResourceServersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
