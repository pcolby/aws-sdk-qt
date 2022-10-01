// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprovisionedproductplansrequest.h"
#include "listprovisionedproductplansrequest_p.h"
#include "listprovisionedproductplansresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansRequest
 * \brief The ListProvisionedProductPlansRequest class provides an interface for ServiceCatalog ListProvisionedProductPlans requests.
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
 * \sa ServiceCatalogClient::listProvisionedProductPlans
 */

/*!
 * Constructs a copy of \a other.
 */
ListProvisionedProductPlansRequest::ListProvisionedProductPlansRequest(const ListProvisionedProductPlansRequest &other)
    : ServiceCatalogRequest(new ListProvisionedProductPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProvisionedProductPlansRequest object.
 */
ListProvisionedProductPlansRequest::ListProvisionedProductPlansRequest()
    : ServiceCatalogRequest(new ListProvisionedProductPlansRequestPrivate(ServiceCatalogRequest::ListProvisionedProductPlansAction, this))
{

}

/*!
 * \reimp
 */
bool ListProvisionedProductPlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProvisionedProductPlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisionedProductPlansRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisionedProductPlansResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansRequestPrivate
 * \brief The ListProvisionedProductPlansRequestPrivate class provides private implementation for ListProvisionedProductPlansRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisionedProductPlansRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListProvisionedProductPlansRequestPrivate::ListProvisionedProductPlansRequestPrivate(
    const ServiceCatalogRequest::Action action, ListProvisionedProductPlansRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProvisionedProductPlansRequest
 * class' copy constructor.
 */
ListProvisionedProductPlansRequestPrivate::ListProvisionedProductPlansRequestPrivate(
    const ListProvisionedProductPlansRequestPrivate &other, ListProvisionedProductPlansRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
