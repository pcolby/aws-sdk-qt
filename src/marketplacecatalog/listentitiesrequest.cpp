// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesrequest.h"
#include "listentitiesrequest_p.h"
#include "listentitiesresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::ListEntitiesRequest
 * \brief The ListEntitiesRequest class provides an interface for MarketplaceCatalog ListEntities requests.
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
 * \sa MarketplaceCatalogClient::listEntities
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitiesRequest::ListEntitiesRequest(const ListEntitiesRequest &other)
    : MarketplaceCatalogRequest(new ListEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitiesRequest object.
 */
ListEntitiesRequest::ListEntitiesRequest()
    : MarketplaceCatalogRequest(new ListEntitiesRequestPrivate(MarketplaceCatalogRequest::ListEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::ListEntitiesRequestPrivate
 * \brief The ListEntitiesRequestPrivate class provides private implementation for ListEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a ListEntitiesRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
ListEntitiesRequestPrivate::ListEntitiesRequestPrivate(
    const MarketplaceCatalogRequest::Action action, ListEntitiesRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesRequest
 * class' copy constructor.
 */
ListEntitiesRequestPrivate::ListEntitiesRequestPrivate(
    const ListEntitiesRequestPrivate &other, ListEntitiesRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
