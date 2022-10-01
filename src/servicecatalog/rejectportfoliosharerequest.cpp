// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectportfoliosharerequest.h"
#include "rejectportfoliosharerequest_p.h"
#include "rejectportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareRequest
 * \brief The RejectPortfolioShareRequest class provides an interface for ServiceCatalog RejectPortfolioShare requests.
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
 * \sa ServiceCatalogClient::rejectPortfolioShare
 */

/*!
 * Constructs a copy of \a other.
 */
RejectPortfolioShareRequest::RejectPortfolioShareRequest(const RejectPortfolioShareRequest &other)
    : ServiceCatalogRequest(new RejectPortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectPortfolioShareRequest object.
 */
RejectPortfolioShareRequest::RejectPortfolioShareRequest()
    : ServiceCatalogRequest(new RejectPortfolioShareRequestPrivate(ServiceCatalogRequest::RejectPortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool RejectPortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectPortfolioShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectPortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new RejectPortfolioShareResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareRequestPrivate
 * \brief The RejectPortfolioShareRequestPrivate class provides private implementation for RejectPortfolioShareRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a RejectPortfolioShareRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
RejectPortfolioShareRequestPrivate::RejectPortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, RejectPortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectPortfolioShareRequest
 * class' copy constructor.
 */
RejectPortfolioShareRequestPrivate::RejectPortfolioShareRequestPrivate(
    const RejectPortfolioShareRequestPrivate &other, RejectPortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
