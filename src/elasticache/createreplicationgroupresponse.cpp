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

#include "createreplicationgroupresponse.h"
#include "createreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateReplicationGroupResponse
 *
 * @brief  Handles ElastiCache CreateReplicationGroup responses.
 *
 * @see    ElastiCacheClient::createReplicationGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationGroupRequest(request));
    setReply(reply);
}

const CreateReplicationGroupRequest * CreateReplicationGroupResponse::request() const
{
    Q_D(const CreateReplicationGroupResponse);
    return static_cast<const CreateReplicationGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache CreateReplicationGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReplicationGroupResponsePrivate
 *
 * @brief  Private implementation for CreateReplicationGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationGroupResponse instance.
 */
CreateReplicationGroupResponsePrivate::CreateReplicationGroupResponsePrivate(
    CreateReplicationGroupQueueResponse * const q) : CreateReplicationGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache CreateReplicationGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationGroupResponsePrivate::CreateReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationGroupResponse"));
    /// @todo
}
