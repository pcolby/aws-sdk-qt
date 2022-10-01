// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
