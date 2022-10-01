// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatedatasetresponse.h"
#include "generatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::GenerateDataSetResponse
 * \brief The GenerateDataSetResponse class provides an interace for MarketplaceCommerceAnalytics GenerateDataSet responses.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 *
 *
 * \sa MarketplaceCommerceAnalyticsClient::generateDataSet
 */

/*!
 * Constructs a GenerateDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateDataSetResponse::GenerateDataSetResponse(
        const GenerateDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCommerceAnalyticsResponse(new GenerateDataSetResponsePrivate(this), parent)
{
    setRequest(new GenerateDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateDataSetRequest * GenerateDataSetResponse::request() const
{
    Q_D(const GenerateDataSetResponse);
    return static_cast<const GenerateDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceCommerceAnalytics GenerateDataSet \a response.
 */
void GenerateDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::GenerateDataSetResponsePrivate
 * \brief The GenerateDataSetResponsePrivate class provides private implementation for GenerateDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a GenerateDataSetResponsePrivate object with public implementation \a q.
 */
GenerateDataSetResponsePrivate::GenerateDataSetResponsePrivate(
    GenerateDataSetResponse * const q) : MarketplaceCommerceAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCommerceAnalytics GenerateDataSet response element from \a xml.
 */
void GenerateDataSetResponsePrivate::parseGenerateDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
