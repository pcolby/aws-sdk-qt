// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchangesetsrequest.h"
#include "listchangesetsrequest_p.h"
#include "listchangesetsresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::ListChangeSetsRequest
 * \brief The ListChangeSetsRequest class provides an interface for MarketplaceCatalog ListChangeSets requests.
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
 * \sa MarketplaceCatalogClient::listChangeSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListChangeSetsRequest::ListChangeSetsRequest(const ListChangeSetsRequest &other)
    : MarketplaceCatalogRequest(new ListChangeSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChangeSetsRequest object.
 */
ListChangeSetsRequest::ListChangeSetsRequest()
    : MarketplaceCatalogRequest(new ListChangeSetsRequestPrivate(MarketplaceCatalogRequest::ListChangeSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChangeSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChangeSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChangeSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListChangeSetsResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::ListChangeSetsRequestPrivate
 * \brief The ListChangeSetsRequestPrivate class provides private implementation for ListChangeSetsRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a ListChangeSetsRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
ListChangeSetsRequestPrivate::ListChangeSetsRequestPrivate(
    const MarketplaceCatalogRequest::Action action, ListChangeSetsRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChangeSetsRequest
 * class' copy constructor.
 */
ListChangeSetsRequestPrivate::ListChangeSetsRequestPrivate(
    const ListChangeSetsRequestPrivate &other, ListChangeSetsRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
