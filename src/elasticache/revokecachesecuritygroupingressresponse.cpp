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

#include "revokecachesecuritygroupingressresponse.h"
#include "revokecachesecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  RevokeCacheSecurityGroupIngressResponse
 *
 * @brief  Handles ElastiCache RevokeCacheSecurityGroupIngress responses.
 *
 * @see    ElastiCacheClient::revokeCacheSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeCacheSecurityGroupIngressResponse::RevokeCacheSecurityGroupIngressResponse(
        const RevokeCacheSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new RevokeCacheSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new RevokeCacheSecurityGroupIngressRequest(request));
    setReply(reply);
}

const RevokeCacheSecurityGroupIngressRequest * RevokeCacheSecurityGroupIngressResponse::request() const
{
    Q_D(const RevokeCacheSecurityGroupIngressResponse);
    return static_cast<const RevokeCacheSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache RevokeCacheSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void RevokeCacheSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeCacheSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for RevokeCacheSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeCacheSecurityGroupIngressResponse instance.
 */
RevokeCacheSecurityGroupIngressResponsePrivate::RevokeCacheSecurityGroupIngressResponsePrivate(
    RevokeCacheSecurityGroupIngressQueueResponse * const q) : RevokeCacheSecurityGroupIngressPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache RevokeCacheSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeCacheSecurityGroupIngressResponsePrivate::RevokeCacheSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeCacheSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
