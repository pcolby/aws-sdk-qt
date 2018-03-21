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

#include "resetcacheparametergroupresponse.h"
#include "resetcacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ResetCacheParameterGroupResponse
 *
 * @brief  Handles ElastiCache ResetCacheParameterGroup responses.
 *
 * @see    ElastiCacheClient::resetCacheParameterGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetCacheParameterGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ResetCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetCacheParameterGroupRequest(request));
    setReply(reply);
}

const ResetCacheParameterGroupRequest * ResetCacheParameterGroupResponse::request() const
{
    Q_D(const ResetCacheParameterGroupResponse);
    return static_cast<const ResetCacheParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache ResetCacheParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ResetCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetCacheParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ResetCacheParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetCacheParameterGroupResponse instance.
 */
ResetCacheParameterGroupResponsePrivate::ResetCacheParameterGroupResponsePrivate(
    ResetCacheParameterGroupQueueResponse * const q) : ResetCacheParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache ResetCacheParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetCacheParameterGroupResponsePrivate::ResetCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetCacheParameterGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
