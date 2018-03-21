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

#include "deletecachesubnetgroupresponse.h"
#include "deletecachesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteCacheSubnetGroupResponse
 *
 * @brief  Handles ElastiCache DeleteCacheSubnetGroup responses.
 *
 * @see    ElastiCacheClient::deleteCacheSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteCacheSubnetGroupRequest * DeleteCacheSubnetGroupResponse::request() const
{
    Q_D(const DeleteCacheSubnetGroupResponse);
    return static_cast<const DeleteCacheSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DeleteCacheSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteCacheSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCacheSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteCacheSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCacheSubnetGroupResponse instance.
 */
DeleteCacheSubnetGroupResponsePrivate::DeleteCacheSubnetGroupResponsePrivate(
    DeleteCacheSubnetGroupQueueResponse * const q) : DeleteCacheSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DeleteCacheSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCacheSubnetGroupResponsePrivate::DeleteCacheSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheSubnetGroupResponse"));
    /// @todo
}
