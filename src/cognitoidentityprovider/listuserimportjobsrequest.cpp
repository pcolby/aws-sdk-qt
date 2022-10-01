// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
