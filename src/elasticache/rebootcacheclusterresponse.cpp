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

#include "rebootcacheclusterresponse.h"
#include "rebootcacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  RebootCacheClusterResponse
 *
 * @brief  Handles ElastiCache RebootCacheCluster responses.
 *
 * @see    ElastiCacheClient::rebootCacheCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootCacheClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new RebootCacheClusterResponsePrivate(this), parent)
{
    setRequest(new RebootCacheClusterRequest(request));
    setReply(reply);
}

const RebootCacheClusterRequest * RebootCacheClusterResponse::request() const
{
    Q_D(const RebootCacheClusterResponse);
    return static_cast<const RebootCacheClusterRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache RebootCacheCluster response.
 *
 * @param  response  Response to parse.
 */
void RebootCacheClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootCacheClusterResponsePrivate
 *
 * @brief  Private implementation for RebootCacheClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootCacheClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootCacheClusterResponse instance.
 */
RebootCacheClusterResponsePrivate::RebootCacheClusterResponsePrivate(
    RebootCacheClusterQueueResponse * const q) : RebootCacheClusterPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache RebootCacheClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootCacheClusterResponsePrivate::RebootCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootCacheClusterResponse"));
    /// @todo
}
