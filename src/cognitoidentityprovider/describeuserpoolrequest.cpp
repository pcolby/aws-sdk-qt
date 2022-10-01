// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserpoolrequest.h"
#include "describeuserpoolrequest_p.h"
#include "describeuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolRequest
 * \brief The DescribeUserPoolRequest class provides an interface for CognitoIdentityProvider DescribeUserPool requests.
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
 * \sa CognitoIdentityProviderClient::describeUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserPoolRequest::DescribeUserPoolRequest(const DescribeUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserPoolRequest object.
 */
DescribeUserPoolRequest::DescribeUserPoolRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolRequestPrivate
 * \brief The DescribeUserPoolRequestPrivate class provides private implementation for DescribeUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeUserPoolRequestPrivate::DescribeUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolRequest
 * class' copy constructor.
 */
DescribeUserPoolRequestPrivate::DescribeUserPoolRequestPrivate(
    const DescribeUserPoolRequestPrivate &other, DescribeUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
