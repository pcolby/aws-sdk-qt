/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listaccountintegrationsrequest.h"
#include "listaccountintegrationsrequest_p.h"
#include "listaccountintegrationsresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListAccountIntegrationsRequest
 * \brief The ListAccountIntegrationsRequest class provides an interface for CustomerProfiles ListAccountIntegrations requests.
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
 * \sa CustomerProfilesClient::listAccountIntegrations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountIntegrationsRequest::ListAccountIntegrationsRequest(const ListAccountIntegrationsRequest &other)
    : CustomerProfilesRequest(new ListAccountIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountIntegrationsRequest object.
 */
ListAccountIntegrationsRequest::ListAccountIntegrationsRequest()
    : CustomerProfilesRequest(new ListAccountIntegrationsRequestPrivate(CustomerProfilesRequest::ListAccountIntegrationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountIntegrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountIntegrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountIntegrationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountIntegrationsResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListAccountIntegrationsRequestPrivate
 * \brief The ListAccountIntegrationsRequestPrivate class provides private implementation for ListAccountIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListAccountIntegrationsRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListAccountIntegrationsRequestPrivate::ListAccountIntegrationsRequestPrivate(
    const CustomerProfilesRequest::Action action, ListAccountIntegrationsRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountIntegrationsRequest
 * class' copy constructor.
 */
ListAccountIntegrationsRequestPrivate::ListAccountIntegrationsRequestPrivate(
    const ListAccountIntegrationsRequestPrivate &other, ListAccountIntegrationsRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
