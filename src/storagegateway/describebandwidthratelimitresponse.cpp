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

#include "describebandwidthratelimitresponse.h"
#include "describebandwidthratelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeBandwidthRateLimitResponse
 *
 * @brief  Handles StorageGateway DescribeBandwidthRateLimit responses.
 *
 * @see    StorageGatewayClient::describeBandwidthRateLimit
 */

/**
 * @brief  Constructs a new DescribeBandwidthRateLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBandwidthRateLimitResponse::DescribeBandwidthRateLimitResponse(
        const DescribeBandwidthRateLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeBandwidthRateLimitResponsePrivate(this), parent)
{
    setRequest(new DescribeBandwidthRateLimitRequest(request));
    setReply(reply);
}

const DescribeBandwidthRateLimitRequest * DescribeBandwidthRateLimitResponse::request() const
{
    Q_D(const DescribeBandwidthRateLimitResponse);
    return static_cast<const DescribeBandwidthRateLimitRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeBandwidthRateLimit response.
 *
 * @param  response  Response to parse.
 */
void DescribeBandwidthRateLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBandwidthRateLimitResponsePrivate
 *
 * @brief  Private implementation for DescribeBandwidthRateLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBandwidthRateLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBandwidthRateLimitResponse instance.
 */
DescribeBandwidthRateLimitResponsePrivate::DescribeBandwidthRateLimitResponsePrivate(
    DescribeBandwidthRateLimitResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeBandwidthRateLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBandwidthRateLimitResponsePrivate::DescribeBandwidthRateLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBandwidthRateLimitResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
