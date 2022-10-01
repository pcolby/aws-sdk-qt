// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
