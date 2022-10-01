// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofileobjectrequest.h"
#include "deleteprofileobjectrequest_p.h"
#include "deleteprofileobjectresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileObjectRequest
 * \brief The DeleteProfileObjectRequest class provides an interface for CustomerProfiles DeleteProfileObject requests.
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
 * \sa CustomerProfilesClient::deleteProfileObject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProfileObjectRequest::DeleteProfileObjectRequest(const DeleteProfileObjectRequest &other)
    : CustomerProfilesRequest(new DeleteProfileObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProfileObjectRequest object.
 */
DeleteProfileObjectRequest::DeleteProfileObjectRequest()
    : CustomerProfilesRequest(new DeleteProfileObjectRequestPrivate(CustomerProfilesRequest::DeleteProfileObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProfileObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProfileObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProfileObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfileObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileObjectRequestPrivate
 * \brief The DeleteProfileObjectRequestPrivate class provides private implementation for DeleteProfileObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileObjectRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteProfileObjectRequestPrivate::DeleteProfileObjectRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteProfileObjectRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfileObjectRequest
 * class' copy constructor.
 */
DeleteProfileObjectRequestPrivate::DeleteProfileObjectRequestPrivate(
    const DeleteProfileObjectRequestPrivate &other, DeleteProfileObjectRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
