// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startchangesetresponse.h"
#include "startchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::StartChangeSetResponse
 * \brief The StartChangeSetResponse class provides an interace for MarketplaceCatalog StartChangeSet responses.
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
 * Constructs a StartChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
StartChangeSetResponse::StartChangeSetResponse(
        const StartChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCatalogResponse(new StartChangeSetResponsePrivate(this), parent)
{
    setRequest(new StartChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartChangeSetRequest * StartChangeSetResponse::request() const
{
    Q_D(const StartChangeSetResponse);
    return static_cast<const StartChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceCatalog StartChangeSet \a response.
 */
void StartChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCatalog::StartChangeSetResponsePrivate
 * \brief The StartChangeSetResponsePrivate class provides private implementation for StartChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a StartChangeSetResponsePrivate object with public implementation \a q.
 */
StartChangeSetResponsePrivate::StartChangeSetResponsePrivate(
    StartChangeSetResponse * const q) : MarketplaceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCatalog StartChangeSet response element from \a xml.
 */
void StartChangeSetResponsePrivate::parseStartChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCatalog
} // namespace QtAws
