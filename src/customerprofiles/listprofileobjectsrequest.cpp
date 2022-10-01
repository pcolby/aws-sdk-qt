// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofileobjectsrequest.h"
#include "listprofileobjectsrequest_p.h"
#include "listprofileobjectsresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectsRequest
 * \brief The ListProfileObjectsRequest class provides an interface for CustomerProfiles ListProfileObjects requests.
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
 * \sa CustomerProfilesClient::listProfileObjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProfileObjectsRequest::ListProfileObjectsRequest(const ListProfileObjectsRequest &other)
    : CustomerProfilesRequest(new ListProfileObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProfileObjectsRequest object.
 */
ListProfileObjectsRequest::ListProfileObjectsRequest()
    : CustomerProfilesRequest(new ListProfileObjectsRequestPrivate(CustomerProfilesRequest::ListProfileObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProfileObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProfileObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProfileObjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProfileObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectsRequestPrivate
 * \brief The ListProfileObjectsRequestPrivate class provides private implementation for ListProfileObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListProfileObjectsRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListProfileObjectsRequestPrivate::ListProfileObjectsRequestPrivate(
    const CustomerProfilesRequest::Action action, ListProfileObjectsRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProfileObjectsRequest
 * class' copy constructor.
 */
ListProfileObjectsRequestPrivate::ListProfileObjectsRequestPrivate(
    const ListProfileObjectsRequestPrivate &other, ListProfileObjectsRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
