// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateproductwithportfoliorequest.h"
#include "associateproductwithportfoliorequest_p.h"
#include "associateproductwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioRequest
 * \brief The AssociateProductWithPortfolioRequest class provides an interface for ServiceCatalog AssociateProductWithPortfolio requests.
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
 * \sa ServiceCatalogClient::associateProductWithPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest(const AssociateProductWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateProductWithPortfolioRequest object.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociateProductWithPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateProductWithPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateProductWithPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateProductWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociateProductWithPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioRequestPrivate
 * \brief The AssociateProductWithPortfolioRequestPrivate class provides private implementation for AssociateProductWithPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateProductWithPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateProductWithPortfolioRequest
 * class' copy constructor.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const AssociateProductWithPortfolioRequestPrivate &other, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
