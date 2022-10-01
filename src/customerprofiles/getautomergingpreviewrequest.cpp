// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getautomergingpreviewrequest.h"
#include "getautomergingpreviewrequest_p.h"
#include "getautomergingpreviewresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetAutoMergingPreviewRequest
 * \brief The GetAutoMergingPreviewRequest class provides an interface for CustomerProfiles GetAutoMergingPreview requests.
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
 * \sa CustomerProfilesClient::getAutoMergingPreview
 */

/*!
 * Constructs a copy of \a other.
 */
GetAutoMergingPreviewRequest::GetAutoMergingPreviewRequest(const GetAutoMergingPreviewRequest &other)
    : CustomerProfilesRequest(new GetAutoMergingPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAutoMergingPreviewRequest object.
 */
GetAutoMergingPreviewRequest::GetAutoMergingPreviewRequest()
    : CustomerProfilesRequest(new GetAutoMergingPreviewRequestPrivate(CustomerProfilesRequest::GetAutoMergingPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool GetAutoMergingPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAutoMergingPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAutoMergingPreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetAutoMergingPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::GetAutoMergingPreviewRequestPrivate
 * \brief The GetAutoMergingPreviewRequestPrivate class provides private implementation for GetAutoMergingPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetAutoMergingPreviewRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
GetAutoMergingPreviewRequestPrivate::GetAutoMergingPreviewRequestPrivate(
    const CustomerProfilesRequest::Action action, GetAutoMergingPreviewRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAutoMergingPreviewRequest
 * class' copy constructor.
 */
GetAutoMergingPreviewRequestPrivate::GetAutoMergingPreviewRequestPrivate(
    const GetAutoMergingPreviewRequestPrivate &other, GetAutoMergingPreviewRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
