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

#include "listchangesetsresponse.h"
#include "listchangesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::ListChangeSetsResponse
 * \brief The ListChangeSetsResponse class provides an interace for MarketplaceCatalog ListChangeSets responses.
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
 * Constructs a ListChangeSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChangeSetsResponse::ListChangeSetsResponse(
        const ListChangeSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCatalogResponse(new ListChangeSetsResponsePrivate(this), parent)
{
    setRequest(new ListChangeSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChangeSetsRequest * ListChangeSetsResponse::request() const
{
    Q_D(const ListChangeSetsResponse);
    return static_cast<const ListChangeSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceCatalog ListChangeSets \a response.
 */
void ListChangeSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChangeSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCatalog::ListChangeSetsResponsePrivate
 * \brief The ListChangeSetsResponsePrivate class provides private implementation for ListChangeSetsResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a ListChangeSetsResponsePrivate object with public implementation \a q.
 */
ListChangeSetsResponsePrivate::ListChangeSetsResponsePrivate(
    ListChangeSetsResponse * const q) : MarketplaceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCatalog ListChangeSets response element from \a xml.
 */
void ListChangeSetsResponsePrivate::parseListChangeSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChangeSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCatalog
} // namespace QtAws
