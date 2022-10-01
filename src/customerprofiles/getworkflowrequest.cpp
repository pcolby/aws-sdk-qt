// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowrequest.h"
#include "getworkflowrequest_p.h"
#include "getworkflowresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowRequest
 * \brief The GetWorkflowRequest class provides an interface for CustomerProfiles GetWorkflow requests.
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
 * \sa CustomerProfilesClient::getWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkflowRequest::GetWorkflowRequest(const GetWorkflowRequest &other)
    : CustomerProfilesRequest(new GetWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkflowRequest object.
 */
GetWorkflowRequest::GetWorkflowRequest()
    : CustomerProfilesRequest(new GetWorkflowRequestPrivate(CustomerProfilesRequest::GetWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::GetWorkflowRequestPrivate
 * \brief The GetWorkflowRequestPrivate class provides private implementation for GetWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetWorkflowRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
GetWorkflowRequestPrivate::GetWorkflowRequestPrivate(
    const CustomerProfilesRequest::Action action, GetWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkflowRequest
 * class' copy constructor.
 */
GetWorkflowRequestPrivate::GetWorkflowRequestPrivate(
    const GetWorkflowRequestPrivate &other, GetWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
