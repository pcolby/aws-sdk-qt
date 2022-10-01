// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getawsorganizationsaccessstatusrequest.h"
#include "getawsorganizationsaccessstatusrequest_p.h"
#include "getawsorganizationsaccessstatusresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::GetAWSOrganizationsAccessStatusRequest
 * \brief The GetAWSOrganizationsAccessStatusRequest class provides an interface for ServiceCatalog GetAWSOrganizationsAccessStatus requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::getAWSOrganizationsAccessStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetAWSOrganizationsAccessStatusRequest::GetAWSOrganizationsAccessStatusRequest(const GetAWSOrganizationsAccessStatusRequest &other)
    : ServiceCatalogRequest(new GetAWSOrganizationsAccessStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAWSOrganizationsAccessStatusRequest object.
 */
GetAWSOrganizationsAccessStatusRequest::GetAWSOrganizationsAccessStatusRequest()
    : ServiceCatalogRequest(new GetAWSOrganizationsAccessStatusRequestPrivate(ServiceCatalogRequest::GetAWSOrganizationsAccessStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetAWSOrganizationsAccessStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAWSOrganizationsAccessStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAWSOrganizationsAccessStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetAWSOrganizationsAccessStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::GetAWSOrganizationsAccessStatusRequestPrivate
 * \brief The GetAWSOrganizationsAccessStatusRequestPrivate class provides private implementation for GetAWSOrganizationsAccessStatusRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a GetAWSOrganizationsAccessStatusRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
GetAWSOrganizationsAccessStatusRequestPrivate::GetAWSOrganizationsAccessStatusRequestPrivate(
    const ServiceCatalogRequest::Action action, GetAWSOrganizationsAccessStatusRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAWSOrganizationsAccessStatusRequest
 * class' copy constructor.
 */
GetAWSOrganizationsAccessStatusRequestPrivate::GetAWSOrganizationsAccessStatusRequestPrivate(
    const GetAWSOrganizationsAccessStatusRequestPrivate &other, GetAWSOrganizationsAccessStatusRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
