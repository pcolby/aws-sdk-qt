/*
    Copyright 2013-2019 Paul Colby

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

#include "listuserimportjobsrequest.h"
#include "listuserimportjobsrequest_p.h"
#include "listuserimportjobsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserImportJobsRequest
 * \brief The ListUserImportJobsRequest class provides an interface for CognitoIdentityProvider ListUserImportJobs requests.
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
 * \sa CognitoIdentityProviderClient::listUserImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest(const ListUserImportJobsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserImportJobsRequest object.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest()
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(CognitoIdentityProviderRequest::ListUserImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserImportJobsRequestPrivate
 * \brief The ListUserImportJobsRequestPrivate class provides private implementation for ListUserImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserImportJobsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserImportJobsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserImportJobsRequest
 * class' copy constructor.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const ListUserImportJobsRequestPrivate &other, ListUserImportJobsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
