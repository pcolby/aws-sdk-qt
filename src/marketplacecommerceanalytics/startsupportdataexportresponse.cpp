// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const StartSupportDataExportResponse);
    return static_cast<const StartSupportDataExportRequest *>(d->request);
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
