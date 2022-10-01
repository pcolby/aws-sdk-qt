// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesresponse.h"
#include "listentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::ListEntitiesResponse
 * \brief The ListEntitiesResponse class provides an interace for MarketplaceCatalog ListEntities responses.
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
 * Constructs a ListEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntitiesResponse::ListEntitiesResponse(
        const ListEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCatalogResponse(new ListEntitiesResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntitiesRequest * ListEntitiesResponse::request() const
{
    Q_D(const ListEntitiesResponse);
    return static_cast<const ListEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceCatalog ListEntities \a response.
 */
void ListEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCatalog::ListEntitiesResponsePrivate
 * \brief The ListEntitiesResponsePrivate class provides private implementation for ListEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a ListEntitiesResponsePrivate object with public implementation \a q.
 */
ListEntitiesResponsePrivate::ListEntitiesResponsePrivate(
    ListEntitiesResponse * const q) : MarketplaceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCatalog ListEntities response element from \a xml.
 */
void ListEntitiesResponsePrivate::parseListEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCatalog
} // namespace QtAws
