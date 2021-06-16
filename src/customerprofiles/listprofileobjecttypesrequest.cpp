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

#include "listprofileobjecttypesrequest.h"
#include "listprofileobjecttypesrequest_p.h"
#include "listprofileobjecttypesresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypesRequest
 * \brief The ListProfileObjectTypesRequest class provides an interface for CustomerProfiles ListProfileObjectTypes requests.
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
 * \sa CustomerProfilesClient::listProfileObjectTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListProfileObjectTypesRequest::ListProfileObjectTypesRequest(const ListProfileObjectTypesRequest &other)
    : CustomerProfilesRequest(new ListProfileObjectTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProfileObjectTypesRequest object.
 */
ListProfileObjectTypesRequest::ListProfileObjectTypesRequest()
    : CustomerProfilesRequest(new ListProfileObjectTypesRequestPrivate(CustomerProfilesRequest::ListProfileObjectTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListProfileObjectTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProfileObjectTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProfileObjectTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListProfileObjectTypesResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypesRequestPrivate
 * \brief The ListProfileObjectTypesRequestPrivate class provides private implementation for ListProfileObjectTypesRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListProfileObjectTypesRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListProfileObjectTypesRequestPrivate::ListProfileObjectTypesRequestPrivate(
    const CustomerProfilesRequest::Action action, ListProfileObjectTypesRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProfileObjectTypesRequest
 * class' copy constructor.
 */
ListProfileObjectTypesRequestPrivate::ListProfileObjectTypesRequestPrivate(
    const ListProfileObjectTypesRequestPrivate &other, ListProfileObjectTypesRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
