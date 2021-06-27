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

#include "startsupportdataexportresponse.h"
#include "startsupportdataexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::StartSupportDataExportResponse
 * \brief The StartSupportDataExportResponse class provides an interace for MarketplaceCommerceAnalytics StartSupportDataExport responses.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 *
 *
 * \sa MarketplaceCommerceAnalyticsClient::startSupportDataExport
 */

/*!
 * Constructs a StartSupportDataExportResponse object for \a reply to \a request, with parent \a parent.
 */
StartSupportDataExportResponse::StartSupportDataExportResponse(
        const StartSupportDataExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCommerceAnalyticsResponse(new StartSupportDataExportResponsePrivate(this), parent)
{
    setRequest(new StartSupportDataExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSupportDataExportRequest * StartSupportDataExportResponse::request() const
{
    return static_cast<const StartSupportDataExportRequest *>(MarketplaceCommerceAnalyticsResponse::request());
}

/*!
 * \reimp
 * Parses a successful MarketplaceCommerceAnalytics StartSupportDataExport \a response.
 */
void StartSupportDataExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSupportDataExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::StartSupportDataExportResponsePrivate
 * \brief The StartSupportDataExportResponsePrivate class provides private implementation for StartSupportDataExportResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a StartSupportDataExportResponsePrivate object with public implementation \a q.
 */
StartSupportDataExportResponsePrivate::StartSupportDataExportResponsePrivate(
    StartSupportDataExportResponse * const q) : MarketplaceCommerceAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCommerceAnalytics StartSupportDataExport response element from \a xml.
 */
void StartSupportDataExportResponsePrivate::parseStartSupportDataExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSupportDataExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
