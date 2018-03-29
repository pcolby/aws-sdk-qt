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

#include "createcachesubnetgroupresponse.h"
#include "createcachesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  CreateCacheSubnetGroupResponse
 *
 * @brief  Handles ElastiCache CreateCacheSubnetGroup responses.
 *
 * @see    ElastiCacheClient::createCacheSubnetGroup
 */

/**
 * @brief  Constructs a new CreateCacheSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheSubnetGroupResponse::CreateCacheSubnetGroupResponse(
        const CreateCacheSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheSubnetGroupRequest(request));
    setReply(reply);
}

const CreateCacheSubnetGroupRequest * CreateCacheSubnetGroupResponse::request() const
{
    Q_D(const CreateCacheSubnetGroupResponse);
    return static_cast<const CreateCacheSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache CreateCacheSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateCacheSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCacheSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for CreateCacheSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCacheSubnetGroupResponse instance.
 */
CreateCacheSubnetGroupResponsePrivate::CreateCacheSubnetGroupResponsePrivate(
    CreateCacheSubnetGroupQueueResponse * const q) : CreateCacheSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache CreateCacheSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCacheSubnetGroupResponsePrivate::CreateCacheSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheSubnetGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
