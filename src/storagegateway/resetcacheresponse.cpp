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

#include "resetcacheresponse.h"
#include "resetcacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ResetCacheResponse
 *
 * @brief  Handles StorageGateway ResetCache responses.
 *
 * @see    StorageGatewayClient::resetCache
 */

/**
 * @brief  Constructs a new ResetCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetCacheResponse::ResetCacheResponse(
        const ResetCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ResetCacheResponsePrivate(this), parent)
{
    setRequest(new ResetCacheRequest(request));
    setReply(reply);
}

const ResetCacheRequest * ResetCacheResponse::request() const
{
    Q_D(const ResetCacheResponse);
    return static_cast<const ResetCacheRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ResetCache response.
 *
 * @param  response  Response to parse.
 */
void ResetCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetCacheResponsePrivate
 *
 * @brief  Private implementation for ResetCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetCacheResponse instance.
 */
ResetCacheResponsePrivate::ResetCacheResponsePrivate(
    ResetCacheQueueResponse * const q) : ResetCachePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ResetCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetCacheResponsePrivate::ResetCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetCacheResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
