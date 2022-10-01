// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkflowsrequest.h"
#include "listworkflowsrequest_p.h"
#include "listworkflowsresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListWorkflowsRequest
 * \brief The ListWorkflowsRequest class provides an interface for CustomerProfiles ListWorkflows requests.
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
 * \sa CustomerProfilesClient::listWorkflows
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkflowsRequest::ListWorkflowsRequest(const ListWorkflowsRequest &other)
    : CustomerProfilesRequest(new ListWorkflowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkflowsRequest object.
 */
ListWorkflowsRequest::ListWorkflowsRequest()
    : CustomerProfilesRequest(new ListWorkflowsRequestPrivate(CustomerProfilesRequest::ListWorkflowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkflowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkflowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkflowsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkflowsResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListWorkflowsRequestPrivate
 * \brief The ListWorkflowsRequestPrivate class provides private implementation for ListWorkflowsRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListWorkflowsRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListWorkflowsRequestPrivate::ListWorkflowsRequestPrivate(
    const CustomerProfilesRequest::Action action, ListWorkflowsRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkflowsRequest
 * class' copy constructor.
 */
ListWorkflowsRequestPrivate::ListWorkflowsRequestPrivate(
    const ListWorkflowsRequestPrivate &other, ListWorkflowsRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
