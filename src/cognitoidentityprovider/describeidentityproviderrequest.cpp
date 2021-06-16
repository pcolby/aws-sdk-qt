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

#include "describeidentityproviderrequest.h"
#include "describeidentityproviderrequest_p.h"
#include "describeidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeIdentityProviderRequest
 * \brief The DescribeIdentityProviderRequest class provides an interface for CognitoIdentityProvider DescribeIdentityProvider requests.
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
 * \sa CognitoIdentityProviderClient::describeIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIdentityProviderRequest::DescribeIdentityProviderRequest(const DescribeIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new DescribeIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIdentityProviderRequest object.
 */
DescribeIdentityProviderRequest::DescribeIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new DescribeIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::DescribeIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeIdentityProviderRequestPrivate
 * \brief The DescribeIdentityProviderRequestPrivate class provides private implementation for DescribeIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeIdentityProviderRequestPrivate::DescribeIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityProviderRequest
 * class' copy constructor.
 */
DescribeIdentityProviderRequestPrivate::DescribeIdentityProviderRequestPrivate(
    const DescribeIdentityProviderRequestPrivate &other, DescribeIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
