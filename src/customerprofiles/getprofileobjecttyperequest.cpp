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

#include "getprofileobjecttyperequest.h"
#include "getprofileobjecttyperequest_p.h"
#include "getprofileobjecttyperesponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeRequest
 * \brief The GetProfileObjectTypeRequest class provides an interface for CustomerProfiles GetProfileObjectType requests.
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
 * \sa CustomerProfilesClient::getProfileObjectType
 */

/*!
 * Constructs a copy of \a other.
 */
GetProfileObjectTypeRequest::GetProfileObjectTypeRequest(const GetProfileObjectTypeRequest &other)
    : CustomerProfilesRequest(new GetProfileObjectTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProfileObjectTypeRequest object.
 */
GetProfileObjectTypeRequest::GetProfileObjectTypeRequest()
    : CustomerProfilesRequest(new GetProfileObjectTypeRequestPrivate(CustomerProfilesRequest::GetProfileObjectTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetProfileObjectTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProfileObjectTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProfileObjectTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetProfileObjectTypeResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeRequestPrivate
 * \brief The GetProfileObjectTypeRequestPrivate class provides private implementation for GetProfileObjectTypeRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetProfileObjectTypeRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
GetProfileObjectTypeRequestPrivate::GetProfileObjectTypeRequestPrivate(
    const CustomerProfilesRequest::Action action, GetProfileObjectTypeRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProfileObjectTypeRequest
 * class' copy constructor.
 */
GetProfileObjectTypeRequestPrivate::GetProfileObjectTypeRequestPrivate(
    const GetProfileObjectTypeRequestPrivate &other, GetProfileObjectTypeRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
