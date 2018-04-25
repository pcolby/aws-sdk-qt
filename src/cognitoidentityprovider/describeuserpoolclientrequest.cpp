/*
    Copyright 2013-2018 Paul Colby

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

#include "describeuserpoolclientrequest.h"
#include "describeuserpoolclientrequest_p.h"
#include "describeuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientRequest
 * \brief The DescribeUserPoolClientRequest class provides an interface for CognitoIdentityProvider DescribeUserPoolClient requests.
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
 * \sa CognitoIdentityProviderClient::describeUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserPoolClientRequest::DescribeUserPoolClientRequest(const DescribeUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserPoolClientRequest object.
 */
DescribeUserPoolClientRequest::DescribeUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientRequestPrivate
 * \brief The DescribeUserPoolClientRequestPrivate class provides private implementation for DescribeUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeUserPoolClientRequestPrivate::DescribeUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolClientRequest
 * class' copy constructor.
 */
DescribeUserPoolClientRequestPrivate::DescribeUserPoolClientRequestPrivate(
    const DescribeUserPoolClientRequestPrivate &other, DescribeUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
