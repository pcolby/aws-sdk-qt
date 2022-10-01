// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofilekeyrequest.h"
#include "deleteprofilekeyrequest_p.h"
#include "deleteprofilekeyresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileKeyRequest
 * \brief The DeleteProfileKeyRequest class provides an interface for CustomerProfiles DeleteProfileKey requests.
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
 * \sa CustomerProfilesClient::deleteProfileKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProfileKeyRequest::DeleteProfileKeyRequest(const DeleteProfileKeyRequest &other)
    : CustomerProfilesRequest(new DeleteProfileKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProfileKeyRequest object.
 */
DeleteProfileKeyRequest::DeleteProfileKeyRequest()
    : CustomerProfilesRequest(new DeleteProfileKeyRequestPrivate(CustomerProfilesRequest::DeleteProfileKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProfileKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProfileKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProfileKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfileKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileKeyRequestPrivate
 * \brief The DeleteProfileKeyRequestPrivate class provides private implementation for DeleteProfileKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileKeyRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteProfileKeyRequestPrivate::DeleteProfileKeyRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteProfileKeyRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfileKeyRequest
 * class' copy constructor.
 */
DeleteProfileKeyRequestPrivate::DeleteProfileKeyRequestPrivate(
    const DeleteProfileKeyRequestPrivate &other, DeleteProfileKeyRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
