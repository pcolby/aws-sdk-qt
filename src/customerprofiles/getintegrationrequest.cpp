// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationrequest.h"
#include "getintegrationrequest_p.h"
#include "getintegrationresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetIntegrationRequest
 * \brief The GetIntegrationRequest class provides an interface for CustomerProfiles GetIntegration requests.
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
 * \sa CustomerProfilesClient::getIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationRequest::GetIntegrationRequest(const GetIntegrationRequest &other)
    : CustomerProfilesRequest(new GetIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationRequest object.
 */
GetIntegrationRequest::GetIntegrationRequest()
    : CustomerProfilesRequest(new GetIntegrationRequestPrivate(CustomerProfilesRequest::GetIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::GetIntegrationRequestPrivate
 * \brief The GetIntegrationRequestPrivate class provides private implementation for GetIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetIntegrationRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const CustomerProfilesRequest::Action action, GetIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationRequest
 * class' copy constructor.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const GetIntegrationRequestPrivate &other, GetIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
