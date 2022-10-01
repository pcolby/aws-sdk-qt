// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprofileobjectrequest.h"
#include "putprofileobjectrequest_p.h"
#include "putprofileobjectresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectRequest
 * \brief The PutProfileObjectRequest class provides an interface for CustomerProfiles PutProfileObject requests.
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
 * \sa CustomerProfilesClient::putProfileObject
 */

/*!
 * Constructs a copy of \a other.
 */
PutProfileObjectRequest::PutProfileObjectRequest(const PutProfileObjectRequest &other)
    : CustomerProfilesRequest(new PutProfileObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutProfileObjectRequest object.
 */
PutProfileObjectRequest::PutProfileObjectRequest()
    : CustomerProfilesRequest(new PutProfileObjectRequestPrivate(CustomerProfilesRequest::PutProfileObjectAction, this))
{

}

/*!
 * \reimp
 */
bool PutProfileObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutProfileObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutProfileObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutProfileObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::PutProfileObjectRequestPrivate
 * \brief The PutProfileObjectRequestPrivate class provides private implementation for PutProfileObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a PutProfileObjectRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
PutProfileObjectRequestPrivate::PutProfileObjectRequestPrivate(
    const CustomerProfilesRequest::Action action, PutProfileObjectRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutProfileObjectRequest
 * class' copy constructor.
 */
PutProfileObjectRequestPrivate::PutProfileObjectRequestPrivate(
    const PutProfileObjectRequestPrivate &other, PutProfileObjectRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
