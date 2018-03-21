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

#include "flushstageauthorizerscacheresponse.h"
#include "flushstageauthorizerscacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  FlushStageAuthorizersCacheResponse
 *
 * @brief  Handles APIGateway FlushStageAuthorizersCache responses.
 *
 * @see    APIGatewayClient::flushStageAuthorizersCache
 */

/**
 * @brief  Constructs a new FlushStageAuthorizersCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
FlushStageAuthorizersCacheResponse::FlushStageAuthorizersCacheResponse(
        const FlushStageAuthorizersCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new FlushStageAuthorizersCacheResponsePrivate(this), parent)
{
    setRequest(new FlushStageAuthorizersCacheRequest(request));
    setReply(reply);
}

const FlushStageAuthorizersCacheRequest * FlushStageAuthorizersCacheResponse::request() const
{
    Q_D(const FlushStageAuthorizersCacheResponse);
    return static_cast<const FlushStageAuthorizersCacheRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway FlushStageAuthorizersCache response.
 *
 * @param  response  Response to parse.
 */
void FlushStageAuthorizersCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  FlushStageAuthorizersCacheResponsePrivate
 *
 * @brief  Private implementation for FlushStageAuthorizersCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FlushStageAuthorizersCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public FlushStageAuthorizersCacheResponse instance.
 */
FlushStageAuthorizersCacheResponsePrivate::FlushStageAuthorizersCacheResponsePrivate(
    FlushStageAuthorizersCacheQueueResponse * const q) : FlushStageAuthorizersCachePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway FlushStageAuthorizersCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void FlushStageAuthorizersCacheResponsePrivate::FlushStageAuthorizersCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushStageAuthorizersCacheResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
