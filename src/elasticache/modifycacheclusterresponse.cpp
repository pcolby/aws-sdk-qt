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

#include "modifycacheclusterresponse.h"
#include "modifycacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyCacheClusterResponse
 *
 * @brief  Handles ElastiCache ModifyCacheCluster responses.
 *
 * @see    ElastiCacheClient::modifyCacheCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyCacheClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyCacheClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyCacheClusterRequest(request));
    setReply(reply);
}

const ModifyCacheClusterRequest * ModifyCacheClusterResponse::request() const
{
    Q_D(const ModifyCacheClusterResponse);
    return static_cast<const ModifyCacheClusterRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ModifyCacheCluster response.
 *
 * @param  response  Response to parse.
 */
void ModifyCacheClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyCacheClusterResponsePrivate
 *
 * @brief  Private implementation for ModifyCacheClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyCacheClusterResponse instance.
 */
ModifyCacheClusterResponsePrivate::ModifyCacheClusterResponsePrivate(
    ModifyCacheClusterQueueResponse * const q) : ModifyCacheClusterPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyCacheClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyCacheClusterResponsePrivate::ModifyCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheClusterResponse"));
    /// @todo
}
