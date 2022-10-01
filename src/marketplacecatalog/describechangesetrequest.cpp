// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
