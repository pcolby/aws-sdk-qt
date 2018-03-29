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

#include "modifycacheparametergroupresponse.h"
#include "modifycacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyCacheParameterGroupResponse
 *
 * @brief  Handles ElastiCache ModifyCacheParameterGroup responses.
 *
 * @see    ElastiCacheClient::modifyCacheParameterGroup
 */

/**
 * @brief  Constructs a new ModifyCacheParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyCacheParameterGroupResponse::ModifyCacheParameterGroupResponse(
        const ModifyCacheParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyCacheParameterGroupRequest(request));
    setReply(reply);
}

const ModifyCacheParameterGroupRequest * ModifyCacheParameterGroupResponse::request() const
{
    Q_D(const ModifyCacheParameterGroupResponse);
    return static_cast<const ModifyCacheParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ModifyCacheParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyCacheParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyCacheParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyCacheParameterGroupResponse instance.
 */
ModifyCacheParameterGroupResponsePrivate::ModifyCacheParameterGroupResponsePrivate(
    ModifyCacheParameterGroupQueueResponse * const q) : ModifyCacheParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyCacheParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyCacheParameterGroupResponsePrivate::ModifyCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheParameterGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
