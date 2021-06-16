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
