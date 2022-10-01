// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateprincipalwithportfoliorequest.h"
#include "associateprincipalwithportfoliorequest_p.h"
#include "associateprincipalwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioRequest
 * \brief The AssociatePrincipalWithPortfolioRequest class provides an interface for ServiceCatalog AssociatePrincipalWithPortfolio requests.
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
 * \sa ServiceCatalogClient::associatePrincipalWithPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest(const AssociatePrincipalWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociatePrincipalWithPortfolioRequest object.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociatePrincipalWithPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool AssociatePrincipalWithPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociatePrincipalWithPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociatePrincipalWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePrincipalWithPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioRequestPrivate
 * \brief The AssociatePrincipalWithPortfolioRequestPrivate class provides private implementation for AssociatePrincipalWithPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociatePrincipalWithPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociatePrincipalWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociatePrincipalWithPortfolioRequest
 * class' copy constructor.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const AssociatePrincipalWithPortfolioRequestPrivate &other, AssociatePrincipalWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
