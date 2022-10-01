// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintegrationrequest.h"
#include "putintegrationrequest_p.h"
#include "putintegrationresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::PutIntegrationRequest
 * \brief The PutIntegrationRequest class provides an interface for CustomerProfiles PutIntegration requests.
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
 * \sa CustomerProfilesClient::putIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntegrationRequest::PutIntegrationRequest(const PutIntegrationRequest &other)
    : CustomerProfilesRequest(new PutIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntegrationRequest object.
 */
PutIntegrationRequest::PutIntegrationRequest()
    : CustomerProfilesRequest(new PutIntegrationRequestPrivate(CustomerProfilesRequest::PutIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::PutIntegrationRequestPrivate
 * \brief The PutIntegrationRequestPrivate class provides private implementation for PutIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a PutIntegrationRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const CustomerProfilesRequest::Action action, PutIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationRequest
 * class' copy constructor.
 */
PutIntegrationRequestPrivate::PutIntegrationRequestPrivate(
    const PutIntegrationRequestPrivate &other, PutIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
