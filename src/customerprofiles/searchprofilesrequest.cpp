// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchprofilesrequest.h"
#include "searchprofilesrequest_p.h"
#include "searchprofilesresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::SearchProfilesRequest
 * \brief The SearchProfilesRequest class provides an interface for CustomerProfiles SearchProfiles requests.
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
 * \sa CustomerProfilesClient::searchProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
SearchProfilesRequest::SearchProfilesRequest(const SearchProfilesRequest &other)
    : CustomerProfilesRequest(new SearchProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchProfilesRequest object.
 */
SearchProfilesRequest::SearchProfilesRequest()
    : CustomerProfilesRequest(new SearchProfilesRequestPrivate(CustomerProfilesRequest::SearchProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchProfilesRequest::response(QNetworkReply * const reply) const
{
    return new SearchProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::SearchProfilesRequestPrivate
 * \brief The SearchProfilesRequestPrivate class provides private implementation for SearchProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a SearchProfilesRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
SearchProfilesRequestPrivate::SearchProfilesRequestPrivate(
    const CustomerProfilesRequest::Action action, SearchProfilesRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchProfilesRequest
 * class' copy constructor.
 */
SearchProfilesRequestPrivate::SearchProfilesRequestPrivate(
    const SearchProfilesRequestPrivate &other, SearchProfilesRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
