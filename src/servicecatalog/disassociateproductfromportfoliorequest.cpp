// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateproductfromportfoliorequest.h"
#include "disassociateproductfromportfoliorequest_p.h"
#include "disassociateproductfromportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateProductFromPortfolioRequest
 * \brief The DisassociateProductFromPortfolioRequest class provides an interface for ServiceCatalog DisassociateProductFromPortfolio requests.
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
 * \sa ServiceCatalogClient::disassociateProductFromPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateProductFromPortfolioRequest::DisassociateProductFromPortfolioRequest(const DisassociateProductFromPortfolioRequest &other)
    : ServiceCatalogRequest(new DisassociateProductFromPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateProductFromPortfolioRequest object.
 */
DisassociateProductFromPortfolioRequest::DisassociateProductFromPortfolioRequest()
    : ServiceCatalogRequest(new DisassociateProductFromPortfolioRequestPrivate(ServiceCatalogRequest::DisassociateProductFromPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateProductFromPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateProductFromPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateProductFromPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateProductFromPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateProductFromPortfolioRequestPrivate
 * \brief The DisassociateProductFromPortfolioRequestPrivate class provides private implementation for DisassociateProductFromPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateProductFromPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DisassociateProductFromPortfolioRequestPrivate::DisassociateProductFromPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociateProductFromPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateProductFromPortfolioRequest
 * class' copy constructor.
 */
DisassociateProductFromPortfolioRequestPrivate::DisassociateProductFromPortfolioRequestPrivate(
    const DisassociateProductFromPortfolioRequestPrivate &other, DisassociateProductFromPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
