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

#include "describechangesetrequest.h"
#include "describechangesetrequest_p.h"
#include "describechangesetresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::DescribeChangeSetRequest
 * \brief The DescribeChangeSetRequest class provides an interface for MarketplaceCatalog DescribeChangeSet requests.
 *
 * \inmodule QtAwsMarketplaceCatalog
 *
 *  Catalog API actions allow you to manage your entities through list, describe, and update capabilities. An entity can be
 *  a product or an offer on AWS Marketplace.
 * 
 *  </p
 * 
 *  You can automate your entity update process by integrating the AWS Marketplace Catalog API with your AWS Marketplace
 *  product build or deployment pipelines. You can also create your own applications on top of the Catalog API to manage
 *  your products on AWS
 *
 * \sa MarketplaceCatalogClient::describeChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest(const DescribeChangeSetRequest &other)
    : MarketplaceCatalogRequest(new DescribeChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChangeSetRequest object.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest()
    : MarketplaceCatalogRequest(new DescribeChangeSetRequestPrivate(MarketplaceCatalogRequest::DescribeChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::DescribeChangeSetRequestPrivate
 * \brief The DescribeChangeSetRequestPrivate class provides private implementation for DescribeChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a DescribeChangeSetRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const MarketplaceCatalogRequest::Action action, DescribeChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChangeSetRequest
 * class' copy constructor.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const DescribeChangeSetRequestPrivate &other, DescribeChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
