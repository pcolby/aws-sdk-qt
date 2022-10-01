// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatebudgetfromresourcerequest.h"
#include "disassociatebudgetfromresourcerequest_p.h"
#include "disassociatebudgetfromresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceRequest
 * \brief The DisassociateBudgetFromResourceRequest class provides an interface for ServiceCatalog DisassociateBudgetFromResource requests.
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
 * \sa ServiceCatalogClient::disassociateBudgetFromResource
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateBudgetFromResourceRequest::DisassociateBudgetFromResourceRequest(const DisassociateBudgetFromResourceRequest &other)
    : ServiceCatalogRequest(new DisassociateBudgetFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateBudgetFromResourceRequest object.
 */
DisassociateBudgetFromResourceRequest::DisassociateBudgetFromResourceRequest()
    : ServiceCatalogRequest(new DisassociateBudgetFromResourceRequestPrivate(ServiceCatalogRequest::DisassociateBudgetFromResourceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateBudgetFromResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateBudgetFromResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateBudgetFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateBudgetFromResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceRequestPrivate
 * \brief The DisassociateBudgetFromResourceRequestPrivate class provides private implementation for DisassociateBudgetFromResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateBudgetFromResourceRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DisassociateBudgetFromResourceRequestPrivate::DisassociateBudgetFromResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociateBudgetFromResourceRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateBudgetFromResourceRequest
 * class' copy constructor.
 */
DisassociateBudgetFromResourceRequestPrivate::DisassociateBudgetFromResourceRequestPrivate(
    const DisassociateBudgetFromResourceRequestPrivate &other, DisassociateBudgetFromResourceRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
