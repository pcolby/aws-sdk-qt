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

#include "refreshcacheresponse.h"
#include "refreshcacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  RefreshCacheResponse
 *
 * @brief  Handles StorageGateway RefreshCache responses.
 *
 * @see    StorageGatewayClient::refreshCache
 */

/**
 * @brief  Constructs a new RefreshCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RefreshCacheResponse::RefreshCacheResponse(
        const RefreshCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new RefreshCacheResponsePrivate(this), parent)
{
    setRequest(new RefreshCacheRequest(request));
    setReply(reply);
}

const RefreshCacheRequest * RefreshCacheResponse::request() const
{
    Q_D(const RefreshCacheResponse);
    return static_cast<const RefreshCacheRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway RefreshCache response.
 *
 * @param  response  Response to parse.
 */
void RefreshCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RefreshCacheResponsePrivate
 *
 * @brief  Private implementation for RefreshCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RefreshCacheResponse instance.
 */
RefreshCacheResponsePrivate::RefreshCacheResponsePrivate(
    RefreshCacheResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway RefreshCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RefreshCacheResponsePrivate::RefreshCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RefreshCacheResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
