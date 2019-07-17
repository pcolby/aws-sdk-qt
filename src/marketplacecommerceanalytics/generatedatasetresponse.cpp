/*
    Copyright 2013-2019 Paul Colby

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
