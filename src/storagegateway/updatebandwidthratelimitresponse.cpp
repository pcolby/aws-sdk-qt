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

#include "updatebandwidthratelimitresponse.h"
#include "updatebandwidthratelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateBandwidthRateLimitResponse
 *
 * @brief  Handles StorageGateway UpdateBandwidthRateLimit responses.
 *
 * @see    StorageGatewayClient::updateBandwidthRateLimit
 */

/**
 * @brief  Constructs a new UpdateBandwidthRateLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBandwidthRateLimitResponse::UpdateBandwidthRateLimitResponse(
        const UpdateBandwidthRateLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateBandwidthRateLimitResponsePrivate(this), parent)
{
    setRequest(new UpdateBandwidthRateLimitRequest(request));
    setReply(reply);
}

const UpdateBandwidthRateLimitRequest * UpdateBandwidthRateLimitResponse::request() const
{
    Q_D(const UpdateBandwidthRateLimitResponse);
    return static_cast<const UpdateBandwidthRateLimitRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateBandwidthRateLimit response.
 *
 * @param  response  Response to parse.
 */
void UpdateBandwidthRateLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBandwidthRateLimitResponsePrivate
 *
 * @brief  Private implementation for UpdateBandwidthRateLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBandwidthRateLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBandwidthRateLimitResponse instance.
 */
UpdateBandwidthRateLimitResponsePrivate::UpdateBandwidthRateLimitResponsePrivate(
    UpdateBandwidthRateLimitResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateBandwidthRateLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBandwidthRateLimitResponsePrivate::UpdateBandwidthRateLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBandwidthRateLimitResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
