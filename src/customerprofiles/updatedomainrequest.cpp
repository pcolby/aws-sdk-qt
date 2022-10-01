// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainrequest.h"
#include "updatedomainrequest_p.h"
#include "updatedomainresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::UpdateDomainRequest
 * \brief The UpdateDomainRequest class provides an interface for CustomerProfiles UpdateDomain requests.
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
 * \sa CustomerProfilesClient::updateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainRequest::UpdateDomainRequest(const UpdateDomainRequest &other)
    : CustomerProfilesRequest(new UpdateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainRequest object.
 */
UpdateDomainRequest::UpdateDomainRequest()
    : CustomerProfilesRequest(new UpdateDomainRequestPrivate(CustomerProfilesRequest::UpdateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::UpdateDomainRequestPrivate
 * \brief The UpdateDomainRequestPrivate class provides private implementation for UpdateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a UpdateDomainRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const CustomerProfilesRequest::Action action, UpdateDomainRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainRequest
 * class' copy constructor.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const UpdateDomainRequestPrivate &other, UpdateDomainRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
