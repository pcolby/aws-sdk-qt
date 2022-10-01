// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeriskconfigurationrequest.h"
#include "describeriskconfigurationrequest_p.h"
#include "describeriskconfigurationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeRiskConfigurationRequest
 * \brief The DescribeRiskConfigurationRequest class provides an interface for CognitoIdentityProvider DescribeRiskConfiguration requests.
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
 * \sa CognitoIdentityProviderClient::describeRiskConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRiskConfigurationRequest::DescribeRiskConfigurationRequest(const DescribeRiskConfigurationRequest &other)
    : CognitoIdentityProviderRequest(new DescribeRiskConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRiskConfigurationRequest object.
 */
DescribeRiskConfigurationRequest::DescribeRiskConfigurationRequest()
    : CognitoIdentityProviderRequest(new DescribeRiskConfigurationRequestPrivate(CognitoIdentityProviderRequest::DescribeRiskConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRiskConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRiskConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRiskConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRiskConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeRiskConfigurationRequestPrivate
 * \brief The DescribeRiskConfigurationRequestPrivate class provides private implementation for DescribeRiskConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeRiskConfigurationRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeRiskConfigurationRequestPrivate::DescribeRiskConfigurationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeRiskConfigurationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRiskConfigurationRequest
 * class' copy constructor.
 */
DescribeRiskConfigurationRequestPrivate::DescribeRiskConfigurationRequestPrivate(
    const DescribeRiskConfigurationRequestPrivate &other, DescribeRiskConfigurationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
