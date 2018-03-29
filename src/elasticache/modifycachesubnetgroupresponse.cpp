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

#include "modifycachesubnetgroupresponse.h"
#include "modifycachesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  ModifyCacheSubnetGroupResponse
 *
 * @brief  Handles ElastiCache ModifyCacheSubnetGroup responses.
 *
 * @see    ElastiCacheClient::modifyCacheSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyCacheSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyCacheSubnetGroupResponse::ModifyCacheSubnetGroupResponse(
        const ModifyCacheSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyCacheSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyCacheSubnetGroupRequest(request));
    setReply(reply);
}

const ModifyCacheSubnetGroupRequest * ModifyCacheSubnetGroupResponse::request() const
{
    Q_D(const ModifyCacheSubnetGroupResponse);
    return static_cast<const ModifyCacheSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ModifyCacheSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyCacheSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyCacheSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyCacheSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyCacheSubnetGroupResponse instance.
 */
ModifyCacheSubnetGroupResponsePrivate::ModifyCacheSubnetGroupResponsePrivate(
    ModifyCacheSubnetGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyCacheSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyCacheSubnetGroupResponsePrivate::ModifyCacheSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheSubnetGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
