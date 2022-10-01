// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeentityrequest.h"
#include "describeentityrequest_p.h"
#include "describeentityresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::DescribeEntityRequest
 * \brief The DescribeEntityRequest class provides an interface for MarketplaceCatalog DescribeEntity requests.
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
 * \sa MarketplaceCatalogClient::describeEntity
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEntityRequest::DescribeEntityRequest(const DescribeEntityRequest &other)
    : MarketplaceCatalogRequest(new DescribeEntityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEntityRequest object.
 */
DescribeEntityRequest::DescribeEntityRequest()
    : MarketplaceCatalogRequest(new DescribeEntityRequestPrivate(MarketplaceCatalogRequest::DescribeEntityAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEntityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEntityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEntityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEntityResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::DescribeEntityRequestPrivate
 * \brief The DescribeEntityRequestPrivate class provides private implementation for DescribeEntityRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a DescribeEntityRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
DescribeEntityRequestPrivate::DescribeEntityRequestPrivate(
    const MarketplaceCatalogRequest::Action action, DescribeEntityRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEntityRequest
 * class' copy constructor.
 */
DescribeEntityRequestPrivate::DescribeEntityRequestPrivate(
    const DescribeEntityRequestPrivate &other, DescribeEntityRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
