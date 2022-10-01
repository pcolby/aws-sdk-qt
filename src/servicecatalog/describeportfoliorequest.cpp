// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportfoliorequest.h"
#include "describeportfoliorequest_p.h"
#include "describeportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioRequest
 * \brief The DescribePortfolioRequest class provides an interface for ServiceCatalog DescribePortfolio requests.
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
 * \sa ServiceCatalogClient::describePortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePortfolioRequest::DescribePortfolioRequest(const DescribePortfolioRequest &other)
    : ServiceCatalogRequest(new DescribePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePortfolioRequest object.
 */
DescribePortfolioRequest::DescribePortfolioRequest()
    : ServiceCatalogRequest(new DescribePortfolioRequestPrivate(ServiceCatalogRequest::DescribePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioRequestPrivate
 * \brief The DescribePortfolioRequestPrivate class provides private implementation for DescribePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribePortfolioRequestPrivate::DescribePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePortfolioRequest
 * class' copy constructor.
 */
DescribePortfolioRequestPrivate::DescribePortfolioRequestPrivate(
    const DescribePortfolioRequestPrivate &other, DescribePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
