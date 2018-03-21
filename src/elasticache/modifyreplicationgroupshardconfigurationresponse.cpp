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

#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "modifyreplicationgroupshardconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyReplicationGroupShardConfigurationResponse
 *
 * @brief  Handles ElastiCache ModifyReplicationGroupShardConfiguration responses.
 *
 * @see    ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationGroupShardConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyReplicationGroupShardConfigurationResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationGroupShardConfigurationRequest(request));
    setReply(reply);
}

const ModifyReplicationGroupShardConfigurationRequest * ModifyReplicationGroupShardConfigurationResponse::request() const
{
    Q_D(const ModifyReplicationGroupShardConfigurationResponse);
    return static_cast<const ModifyReplicationGroupShardConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ModifyReplicationGroupShardConfiguration response.
 *
 * @param  response  Response to parse.
 */
void ModifyReplicationGroupShardConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyReplicationGroupShardConfigurationResponsePrivate
 *
 * @brief  Private implementation for ModifyReplicationGroupShardConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyReplicationGroupShardConfigurationResponse instance.
 */
ModifyReplicationGroupShardConfigurationResponsePrivate::ModifyReplicationGroupShardConfigurationResponsePrivate(
    ModifyReplicationGroupShardConfigurationQueueResponse * const q) : ModifyReplicationGroupShardConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ModifyReplicationGroupShardConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyReplicationGroupShardConfigurationResponsePrivate::ModifyReplicationGroupShardConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationGroupShardConfigurationResponse"));
    /// @todo
}
