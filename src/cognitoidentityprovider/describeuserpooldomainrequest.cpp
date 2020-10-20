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

#include "describeuserpooldomainrequest.h"
#include "describeuserpooldomainrequest_p.h"
#include "describeuserpooldomainresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolDomainRequest
 * \brief The DescribeUserPoolDomainRequest class provides an interface for CognitoIdentityProvider DescribeUserPoolDomain requests.
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
 * \sa CognitoIdentityProviderClient::describeUserPoolDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserPoolDomainRequest::DescribeUserPoolDomainRequest(const DescribeUserPoolDomainRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserPoolDomainRequest object.
 */
DescribeUserPoolDomainRequest::DescribeUserPoolDomainRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolDomainRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserPoolDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserPoolDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserPoolDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolDomainRequestPrivate
 * \brief The DescribeUserPoolDomainRequestPrivate class provides private implementation for DescribeUserPoolDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolDomainRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeUserPoolDomainRequestPrivate::DescribeUserPoolDomainRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolDomainRequest
 * class' copy constructor.
 */
DescribeUserPoolDomainRequestPrivate::DescribeUserPoolDomainRequestPrivate(
    const DescribeUserPoolDomainRequestPrivate &other, DescribeUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
