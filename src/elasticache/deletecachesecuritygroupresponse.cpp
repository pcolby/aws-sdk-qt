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

#include "deletecachesecuritygroupresponse.h"
#include "deletecachesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteCacheSecurityGroupResponse
 *
 * @brief  Handles ElastiCache DeleteCacheSecurityGroup responses.
 *
 * @see    ElastiCacheClient::deleteCacheSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteCacheSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheSecurityGroupResponse::DeleteCacheSecurityGroupResponse(
        const DeleteCacheSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteCacheSecurityGroupRequest * DeleteCacheSecurityGroupResponse::request() const
{
    Q_D(const DeleteCacheSecurityGroupResponse);
    return static_cast<const DeleteCacheSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DeleteCacheSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteCacheSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCacheSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteCacheSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCacheSecurityGroupResponse instance.
 */
DeleteCacheSecurityGroupResponsePrivate::DeleteCacheSecurityGroupResponsePrivate(
    DeleteCacheSecurityGroupQueueResponse * const q) : DeleteCacheSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DeleteCacheSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCacheSecurityGroupResponsePrivate::DeleteCacheSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheSecurityGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
