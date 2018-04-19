/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a GlobalSignOutRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
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
