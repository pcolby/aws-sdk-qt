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

#include "describeuserimportjobrequest.h"
#include "describeuserimportjobrequest_p.h"
#include "describeuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserImportJobRequest
 * \brief The DescribeUserImportJobRequest class provides an interface for CognitoIdentityProvider DescribeUserImportJob requests.
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
 * \sa CognitoIdentityProviderClient::describeUserImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserImportJobRequest::DescribeUserImportJobRequest(const DescribeUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserImportJobRequest object.
 */
DescribeUserImportJobRequest::DescribeUserImportJobRequest()
    : CognitoIdentityProviderRequest(new DescribeUserImportJobRequestPrivate(CognitoIdentityProviderRequest::DescribeUserImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserImportJobRequestPrivate
 * \brief The DescribeUserImportJobRequestPrivate class provides private implementation for DescribeUserImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserImportJobRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DescribeUserImportJobRequestPrivate::DescribeUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserImportJobRequest
 * class' copy constructor.
 */
DescribeUserImportJobRequestPrivate::DescribeUserImportJobRequestPrivate(
    const DescribeUserImportJobRequestPrivate &other, DescribeUserImportJobRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
