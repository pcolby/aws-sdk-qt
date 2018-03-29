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

#include "deletebandwidthratelimitresponse.h"
#include "deletebandwidthratelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteBandwidthRateLimitResponse
 *
 * @brief  Handles StorageGateway DeleteBandwidthRateLimit responses.
 *
 * @see    StorageGatewayClient::deleteBandwidthRateLimit
 */

/**
 * @brief  Constructs a new DeleteBandwidthRateLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBandwidthRateLimitResponse::DeleteBandwidthRateLimitResponse(
        const DeleteBandwidthRateLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteBandwidthRateLimitResponsePrivate(this), parent)
{
    setRequest(new DeleteBandwidthRateLimitRequest(request));
    setReply(reply);
}

const DeleteBandwidthRateLimitRequest * DeleteBandwidthRateLimitResponse::request() const
{
    Q_D(const DeleteBandwidthRateLimitResponse);
    return static_cast<const DeleteBandwidthRateLimitRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteBandwidthRateLimit response.
 *
 * @param  response  Response to parse.
 */
void DeleteBandwidthRateLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBandwidthRateLimitResponsePrivate
 *
 * @brief  Private implementation for DeleteBandwidthRateLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBandwidthRateLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBandwidthRateLimitResponse instance.
 */
DeleteBandwidthRateLimitResponsePrivate::DeleteBandwidthRateLimitResponsePrivate(
    DeleteBandwidthRateLimitResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteBandwidthRateLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBandwidthRateLimitResponsePrivate::DeleteBandwidthRateLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBandwidthRateLimitResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
