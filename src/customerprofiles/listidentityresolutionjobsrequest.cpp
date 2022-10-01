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

#include "listidentityresolutionjobsrequest.h"
#include "listidentityresolutionjobsrequest_p.h"
#include "listidentityresolutionjobsresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListIdentityResolutionJobsRequest
 * \brief The ListIdentityResolutionJobsRequest class provides an interface for CustomerProfiles ListIdentityResolutionJobs requests.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::listIdentityResolutionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListIdentityResolutionJobsRequest::ListIdentityResolutionJobsRequest(const ListIdentityResolutionJobsRequest &other)
    : CustomerProfilesRequest(new ListIdentityResolutionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIdentityResolutionJobsRequest object.
 */
ListIdentityResolutionJobsRequest::ListIdentityResolutionJobsRequest()
    : CustomerProfilesRequest(new ListIdentityResolutionJobsRequestPrivate(CustomerProfilesRequest::ListIdentityResolutionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentityResolutionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIdentityResolutionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentityResolutionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityResolutionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListIdentityResolutionJobsRequestPrivate
 * \brief The ListIdentityResolutionJobsRequestPrivate class provides private implementation for ListIdentityResolutionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListIdentityResolutionJobsRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListIdentityResolutionJobsRequestPrivate::ListIdentityResolutionJobsRequestPrivate(
    const CustomerProfilesRequest::Action action, ListIdentityResolutionJobsRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityResolutionJobsRequest
 * class' copy constructor.
 */
ListIdentityResolutionJobsRequestPrivate::ListIdentityResolutionJobsRequestPrivate(
    const ListIdentityResolutionJobsRequestPrivate &other, ListIdentityResolutionJobsRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
