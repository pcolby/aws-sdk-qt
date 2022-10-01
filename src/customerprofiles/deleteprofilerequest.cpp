// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofilerequest.h"
#include "deleteprofilerequest_p.h"
#include "deleteprofileresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileRequest
 * \brief The DeleteProfileRequest class provides an interface for CustomerProfiles DeleteProfile requests.
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
 * \sa CustomerProfilesClient::deleteProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProfileRequest::DeleteProfileRequest(const DeleteProfileRequest &other)
    : CustomerProfilesRequest(new DeleteProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProfileRequest object.
 */
DeleteProfileRequest::DeleteProfileRequest()
    : CustomerProfilesRequest(new DeleteProfileRequestPrivate(CustomerProfilesRequest::DeleteProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteProfileRequestPrivate
 * \brief The DeleteProfileRequestPrivate class provides private implementation for DeleteProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteProfileRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteProfileRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfileRequest
 * class' copy constructor.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const DeleteProfileRequestPrivate &other, DeleteProfileRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
