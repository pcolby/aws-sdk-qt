// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainrequest.h"
#include "deletedomainrequest_p.h"
#include "deletedomainresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteDomainRequest
 * \brief The DeleteDomainRequest class provides an interface for CustomerProfiles DeleteDomain requests.
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
 * \sa CustomerProfilesClient::deleteDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainRequest::DeleteDomainRequest(const DeleteDomainRequest &other)
    : CustomerProfilesRequest(new DeleteDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainRequest object.
 */
DeleteDomainRequest::DeleteDomainRequest()
    : CustomerProfilesRequest(new DeleteDomainRequestPrivate(CustomerProfilesRequest::DeleteDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteDomainRequestPrivate
 * \brief The DeleteDomainRequestPrivate class provides private implementation for DeleteDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteDomainRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteDomainRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainRequest
 * class' copy constructor.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const DeleteDomainRequestPrivate &other, DeleteDomainRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
