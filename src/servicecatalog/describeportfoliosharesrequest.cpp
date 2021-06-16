/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeportfoliosharesrequest.h"
#include "describeportfoliosharesrequest_p.h"
#include "describeportfoliosharesresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioSharesRequest
 * \brief The DescribePortfolioSharesRequest class provides an interface for ServiceCatalog DescribePortfolioShares requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describePortfolioShares
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePortfolioSharesRequest::DescribePortfolioSharesRequest(const DescribePortfolioSharesRequest &other)
    : ServiceCatalogRequest(new DescribePortfolioSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePortfolioSharesRequest object.
 */
DescribePortfolioSharesRequest::DescribePortfolioSharesRequest()
    : ServiceCatalogRequest(new DescribePortfolioSharesRequestPrivate(ServiceCatalogRequest::DescribePortfolioSharesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePortfolioSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePortfolioSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePortfolioSharesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortfolioSharesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioSharesRequestPrivate
 * \brief The DescribePortfolioSharesRequestPrivate class provides private implementation for DescribePortfolioSharesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioSharesRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribePortfolioSharesRequestPrivate::DescribePortfolioSharesRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribePortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePortfolioSharesRequest
 * class' copy constructor.
 */
DescribePortfolioSharesRequestPrivate::DescribePortfolioSharesRequestPrivate(
    const DescribePortfolioSharesRequestPrivate &other, DescribePortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
