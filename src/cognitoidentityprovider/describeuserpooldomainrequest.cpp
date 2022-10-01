// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
