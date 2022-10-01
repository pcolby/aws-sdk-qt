// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsrequest.h"
#include "listdomainsrequest_p.h"
#include "listdomainsresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListDomainsRequest
 * \brief The ListDomainsRequest class provides an interface for CustomerProfiles ListDomains requests.
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
 * \sa CustomerProfilesClient::listDomains
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsRequest::ListDomainsRequest(const ListDomainsRequest &other)
    : CustomerProfilesRequest(new ListDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsRequest object.
 */
ListDomainsRequest::ListDomainsRequest()
    : CustomerProfilesRequest(new ListDomainsRequestPrivate(CustomerProfilesRequest::ListDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListDomainsRequestPrivate
 * \brief The ListDomainsRequestPrivate class provides private implementation for ListDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListDomainsRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const CustomerProfilesRequest::Action action, ListDomainsRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsRequest
 * class' copy constructor.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const ListDomainsRequestPrivate &other, ListDomainsRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
