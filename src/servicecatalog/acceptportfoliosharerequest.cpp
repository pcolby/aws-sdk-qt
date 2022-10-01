// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptportfoliosharerequest.h"
#include "acceptportfoliosharerequest_p.h"
#include "acceptportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AcceptPortfolioShareRequest
 * \brief The AcceptPortfolioShareRequest class provides an interface for ServiceCatalog AcceptPortfolioShare requests.
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
 * \sa ServiceCatalogClient::acceptPortfolioShare
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptPortfolioShareRequest::AcceptPortfolioShareRequest(const AcceptPortfolioShareRequest &other)
    : ServiceCatalogRequest(new AcceptPortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptPortfolioShareRequest object.
 */
AcceptPortfolioShareRequest::AcceptPortfolioShareRequest()
    : ServiceCatalogRequest(new AcceptPortfolioShareRequestPrivate(ServiceCatalogRequest::AcceptPortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptPortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptPortfolioShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptPortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new AcceptPortfolioShareResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AcceptPortfolioShareRequestPrivate
 * \brief The AcceptPortfolioShareRequestPrivate class provides private implementation for AcceptPortfolioShareRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AcceptPortfolioShareRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AcceptPortfolioShareRequestPrivate::AcceptPortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, AcceptPortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptPortfolioShareRequest
 * class' copy constructor.
 */
AcceptPortfolioShareRequestPrivate::AcceptPortfolioShareRequestPrivate(
    const AcceptPortfolioShareRequestPrivate &other, AcceptPortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
