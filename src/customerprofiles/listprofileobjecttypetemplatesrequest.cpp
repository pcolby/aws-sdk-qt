// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofileobjecttypetemplatesrequest.h"
#include "listprofileobjecttypetemplatesrequest_p.h"
#include "listprofileobjecttypetemplatesresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypeTemplatesRequest
 * \brief The ListProfileObjectTypeTemplatesRequest class provides an interface for CustomerProfiles ListProfileObjectTypeTemplates requests.
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
 * \sa CustomerProfilesClient::listProfileObjectTypeTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListProfileObjectTypeTemplatesRequest::ListProfileObjectTypeTemplatesRequest(const ListProfileObjectTypeTemplatesRequest &other)
    : CustomerProfilesRequest(new ListProfileObjectTypeTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProfileObjectTypeTemplatesRequest object.
 */
ListProfileObjectTypeTemplatesRequest::ListProfileObjectTypeTemplatesRequest()
    : CustomerProfilesRequest(new ListProfileObjectTypeTemplatesRequestPrivate(CustomerProfilesRequest::ListProfileObjectTypeTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListProfileObjectTypeTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProfileObjectTypeTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProfileObjectTypeTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListProfileObjectTypeTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::ListProfileObjectTypeTemplatesRequestPrivate
 * \brief The ListProfileObjectTypeTemplatesRequestPrivate class provides private implementation for ListProfileObjectTypeTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a ListProfileObjectTypeTemplatesRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
ListProfileObjectTypeTemplatesRequestPrivate::ListProfileObjectTypeTemplatesRequestPrivate(
    const CustomerProfilesRequest::Action action, ListProfileObjectTypeTemplatesRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProfileObjectTypeTemplatesRequest
 * class' copy constructor.
 */
ListProfileObjectTypeTemplatesRequestPrivate::ListProfileObjectTypeTemplatesRequestPrivate(
    const ListProfileObjectTypeTemplatesRequestPrivate &other, ListProfileObjectTypeTemplatesRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
