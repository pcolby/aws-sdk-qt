// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateprincipalfromportfoliorequest.h"
#include "disassociateprincipalfromportfoliorequest_p.h"
#include "disassociateprincipalfromportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociatePrincipalFromPortfolioRequest
 * \brief The DisassociatePrincipalFromPortfolioRequest class provides an interface for ServiceCatalog DisassociatePrincipalFromPortfolio requests.
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
 * \sa ServiceCatalogClient::disassociatePrincipalFromPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociatePrincipalFromPortfolioRequest::DisassociatePrincipalFromPortfolioRequest(const DisassociatePrincipalFromPortfolioRequest &other)
    : ServiceCatalogRequest(new DisassociatePrincipalFromPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociatePrincipalFromPortfolioRequest object.
 */
DisassociatePrincipalFromPortfolioRequest::DisassociatePrincipalFromPortfolioRequest()
    : ServiceCatalogRequest(new DisassociatePrincipalFromPortfolioRequestPrivate(ServiceCatalogRequest::DisassociatePrincipalFromPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociatePrincipalFromPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociatePrincipalFromPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociatePrincipalFromPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DisassociatePrincipalFromPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DisassociatePrincipalFromPortfolioRequestPrivate
 * \brief The DisassociatePrincipalFromPortfolioRequestPrivate class provides private implementation for DisassociatePrincipalFromPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociatePrincipalFromPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DisassociatePrincipalFromPortfolioRequestPrivate::DisassociatePrincipalFromPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociatePrincipalFromPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociatePrincipalFromPortfolioRequest
 * class' copy constructor.
 */
DisassociatePrincipalFromPortfolioRequestPrivate::DisassociatePrincipalFromPortfolioRequestPrivate(
    const DisassociatePrincipalFromPortfolioRequestPrivate &other, DisassociatePrincipalFromPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
