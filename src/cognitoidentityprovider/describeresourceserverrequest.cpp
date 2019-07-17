/*
    Copyright 2013-2019 Paul Colby

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

#include "describeresourceserverrequest.h"
#include "describeresourceserverrequest_p.h"
#include "describeresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeResourceServerRequest
 * \brief The DescribeResourceServerRequest class provides an interface for CognitoIdentityProvider DescribeResourceServer requests.
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
 * \sa CognitoIdentityProviderClient::describeResourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeResourceServerRequest::DescribeResourceServerRequest(const DescribeResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new DescribeResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeResourceServerRequest object.
 */
DescribeResourceServerRequest::DescribeResourceServerRequest()
    : CognitoIdentityProviderRequest(new DescribeResourceServerRequestPrivate(CognitoIdentityProviderRequest::DescribeResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeResourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeResourceServerRequestPrivate
 * \brief The DescribeResourceServerRequestPrivate class provides private implementation for DescribeResourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeResourceServerRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeResourceServerRequestPrivate::DescribeResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceServerRequest
 * class' copy constructor.
 */
DescribeResourceServerRequestPrivate::DescribeResourceServerRequestPrivate(
    const DescribeResourceServerRequestPrivate &other, DescribeResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
