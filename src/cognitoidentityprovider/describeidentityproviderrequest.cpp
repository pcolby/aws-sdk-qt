// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
