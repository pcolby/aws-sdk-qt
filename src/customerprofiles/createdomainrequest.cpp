// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainrequest.h"
#include "createdomainrequest_p.h"
#include "createdomainresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CreateDomainRequest
 * \brief The CreateDomainRequest class provides an interface for CustomerProfiles CreateDomain requests.
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
 * \sa CustomerProfilesClient::createDomain
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainRequest::CreateDomainRequest(const CreateDomainRequest &other)
    : CustomerProfilesRequest(new CreateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainRequest object.
 */
CreateDomainRequest::CreateDomainRequest()
    : CustomerProfilesRequest(new CreateDomainRequestPrivate(CustomerProfilesRequest::CreateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::CreateDomainRequestPrivate
 * \brief The CreateDomainRequestPrivate class provides private implementation for CreateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CreateDomainRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CustomerProfilesRequest::Action action, CreateDomainRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainRequest
 * class' copy constructor.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CreateDomainRequestPrivate &other, CreateDomainRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
