/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "meterusageresponse.h"
#include "meterusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MarketplaceMetering {

/**
 * @class  MeterUsageResponse
 *
 * @brief  Handles MarketplaceMetering MeterUsage responses.
 *
 * @see    MarketplaceMeteringClient::meterUsage
 */

/**
 * @brief  Constructs a new MeterUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MeterUsageResponse::MeterUsageResponse(
        const MeterUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new MeterUsageResponsePrivate(this), parent)
{
    setRequest(new MeterUsageRequest(request));
    setReply(reply);
}

const MeterUsageRequest * MeterUsageResponse::request() const
{
    Q_D(const MeterUsageResponse);
    return static_cast<const MeterUsageRequest *>(d->request);
}

/**
 * @brief  Parse a MarketplaceMetering MeterUsage response.
 *
 * @param  response  Response to parse.
 */
void MeterUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MeterUsageResponsePrivate
 *
 * @brief  Private implementation for MeterUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MeterUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MeterUsageResponse instance.
 */
MeterUsageResponsePrivate::MeterUsageResponsePrivate(
    MeterUsageQueueResponse * const q) : MeterUsagePrivate(q)
{

}

/**
 * @brief  Parse an MarketplaceMetering MeterUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MeterUsageResponsePrivate::MeterUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MeterUsageResponse"));
    /// @todo
}

} // namespace MarketplaceMetering
} // namespace AWS
