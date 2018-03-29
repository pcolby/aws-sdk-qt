/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startsupportdataexportresponse.h"
#include "startsupportdataexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/**
 * @class  StartSupportDataExportResponse
 *
 * @brief  Handles MarketplaceCommerceAnalytics StartSupportDataExport responses.
 *
 * @see    MarketplaceCommerceAnalyticsClient::startSupportDataExport
 */

/**
 * @brief  Constructs a new StartSupportDataExportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StartSupportDataExportRequest * StartSupportDataExportResponse::request() const
{
    Q_D(const StartSupportDataExportResponse);
    return static_cast<const StartSupportDataExportRequest *>(d->request);
}

/**
 * @brief  Parse a MarketplaceCommerceAnalytics StartSupportDataExport response.
 *
 * @param  response  Response to parse.
 */
void StartSupportDataExportResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartSupportDataExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartSupportDataExportResponsePrivate
 *
 * @brief  Private implementation for StartSupportDataExportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSupportDataExportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartSupportDataExportResponse instance.
 */
StartSupportDataExportResponsePrivate::StartSupportDataExportResponsePrivate(
    StartSupportDataExportResponse * const q) : MarketplaceCommerceAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an MarketplaceCommerceAnalytics StartSupportDataExportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartSupportDataExportResponsePrivate::StartSupportDataExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSupportDataExportResponse"));
    /// @todo
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
