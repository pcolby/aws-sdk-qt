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

#include "putprofileobjecttyperequest.h"
#include "putprofileobjecttyperequest_p.h"
#include "putprofileobjecttyperesponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectTypeRequest
 * \brief The PutProfileObjectTypeRequest class provides an interface for CustomerProfiles PutProfileObjectType requests.
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
 * \sa CustomerProfilesClient::putProfileObjectType
 */

/*!
 * Constructs a copy of \a other.
 */
PutProfileObjectTypeRequest::PutProfileObjectTypeRequest(const PutProfileObjectTypeRequest &other)
    : CustomerProfilesRequest(new PutProfileObjectTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutProfileObjectTypeRequest object.
 */
PutProfileObjectTypeRequest::PutProfileObjectTypeRequest()
    : CustomerProfilesRequest(new PutProfileObjectTypeRequestPrivate(CustomerProfilesRequest::PutProfileObjectTypeAction, this))
{

}

/*!
 * \reimp
 */
bool PutProfileObjectTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutProfileObjectTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutProfileObjectTypeRequest::response(QNetworkReply * const reply) const
{
    return new PutProfileObjectTypeResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectTypeRequestPrivate
 * \brief The PutProfileObjectTypeRequestPrivate class provides private implementation for PutProfileObjectTypeRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a PutProfileObjectTypeRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
PutProfileObjectTypeRequestPrivate::PutProfileObjectTypeRequestPrivate(
    const CustomerProfilesRequest::Action action, PutProfileObjectTypeRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutProfileObjectTypeRequest
 * class' copy constructor.
 */
PutProfileObjectTypeRequestPrivate::PutProfileObjectTypeRequestPrivate(
    const PutProfileObjectTypeRequestPrivate &other, PutProfileObjectTypeRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
