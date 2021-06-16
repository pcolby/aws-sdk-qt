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

#include "startchangesetrequest.h"
#include "startchangesetrequest_p.h"
#include "startchangesetresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::StartChangeSetRequest
 * \brief The StartChangeSetRequest class provides an interface for MarketplaceCatalog StartChangeSet requests.
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
 * \sa MarketplaceCatalogClient::startChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
StartChangeSetRequest::StartChangeSetRequest(const StartChangeSetRequest &other)
    : MarketplaceCatalogRequest(new StartChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartChangeSetRequest object.
 */
StartChangeSetRequest::StartChangeSetRequest()
    : MarketplaceCatalogRequest(new StartChangeSetRequestPrivate(MarketplaceCatalogRequest::StartChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool StartChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new StartChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::StartChangeSetRequestPrivate
 * \brief The StartChangeSetRequestPrivate class provides private implementation for StartChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a StartChangeSetRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
StartChangeSetRequestPrivate::StartChangeSetRequestPrivate(
    const MarketplaceCatalogRequest::Action action, StartChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartChangeSetRequest
 * class' copy constructor.
 */
StartChangeSetRequestPrivate::StartChangeSetRequestPrivate(
    const StartChangeSetRequestPrivate &other, StartChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
