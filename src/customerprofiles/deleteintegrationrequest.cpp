// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationrequest.h"
#include "deleteintegrationrequest_p.h"
#include "deleteintegrationresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteIntegrationRequest
 * \brief The DeleteIntegrationRequest class provides an interface for CustomerProfiles DeleteIntegration requests.
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
 * \sa CustomerProfilesClient::deleteIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest(const DeleteIntegrationRequest &other)
    : CustomerProfilesRequest(new DeleteIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntegrationRequest object.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest()
    : CustomerProfilesRequest(new DeleteIntegrationRequestPrivate(CustomerProfilesRequest::DeleteIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteIntegrationRequestPrivate
 * \brief The DeleteIntegrationRequestPrivate class provides private implementation for DeleteIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteIntegrationRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationRequest
 * class' copy constructor.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const DeleteIntegrationRequestPrivate &other, DeleteIntegrationRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
