// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelchangesetresponse.h"
#include "cancelchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::CancelChangeSetResponse
 * \brief The CancelChangeSetResponse class provides an interace for MarketplaceCatalog CancelChangeSet responses.
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
 * \sa MarketplaceCatalogClient::cancelChangeSet
 */

/*!
 * Constructs a CancelChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
CancelChangeSetResponse::CancelChangeSetResponse(
        const CancelChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCatalogResponse(new CancelChangeSetResponsePrivate(this), parent)
{
    setRequest(new CancelChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelChangeSetRequest * CancelChangeSetResponse::request() const
{
    Q_D(const CancelChangeSetResponse);
    return static_cast<const CancelChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceCatalog CancelChangeSet \a response.
 */
void CancelChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCatalog::CancelChangeSetResponsePrivate
 * \brief The CancelChangeSetResponsePrivate class provides private implementation for CancelChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a CancelChangeSetResponsePrivate object with public implementation \a q.
 */
CancelChangeSetResponsePrivate::CancelChangeSetResponsePrivate(
    CancelChangeSetResponse * const q) : MarketplaceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCatalog CancelChangeSet response element from \a xml.
 */
void CancelChangeSetResponsePrivate::parseCancelChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCatalog
} // namespace QtAws
