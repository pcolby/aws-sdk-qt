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

#include "createcachesecuritygroupresponse.h"
#include "createcachesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateCacheSecurityGroupResponse
 *
 * @brief  Handles ElastiCache CreateCacheSecurityGroup responses.
 *
 * @see    ElastiCacheClient::createCacheSecurityGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheSecurityGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheSecurityGroupRequest(request));
    setReply(reply);
}

const CreateCacheSecurityGroupRequest * CreateCacheSecurityGroupResponse::request() const
{
    Q_D(const CreateCacheSecurityGroupResponse);
    return static_cast<const CreateCacheSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache CreateCacheSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateCacheSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCacheSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for CreateCacheSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCacheSecurityGroupResponse instance.
 */
CreateCacheSecurityGroupResponsePrivate::CreateCacheSecurityGroupResponsePrivate(
    CreateCacheSecurityGroupQueueResponse * const q) : CreateCacheSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache CreateCacheSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCacheSecurityGroupResponsePrivate::CreateCacheSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheSecurityGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
