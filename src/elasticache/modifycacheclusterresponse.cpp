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

#include "modifycacheclusterresponse.h"
#include "modifycacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  ModifyCacheClusterResponse
 *
 * @brief  Handles ElastiCache ModifyCacheCluster responses.
 *
 * @see    ElastiCacheClient::modifyCacheCluster
 */

/**
 * @brief  Constructs a new ModifyCacheClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyCacheClusterResponse::ModifyCacheClusterResponse(
        const ModifyCacheClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ModifyCacheClusterResponse(new ModifyCacheClusterResponsePrivate(this), parent)
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
    Q_D(ModifyCacheClusterResponse);
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
    ModifyCacheClusterResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyCacheClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyCacheClusterResponsePrivate::parseModifyCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheClusterResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
