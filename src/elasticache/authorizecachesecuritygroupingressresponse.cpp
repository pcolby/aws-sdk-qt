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

#include "authorizecachesecuritygroupingressresponse.h"
#include "authorizecachesecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  AuthorizeCacheSecurityGroupIngressResponse
 *
 * @brief  Handles ElastiCache AuthorizeCacheSecurityGroupIngress responses.
 *
 * @see    ElastiCacheClient::authorizeCacheSecurityGroupIngress
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeCacheSecurityGroupIngressResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new AuthorizeCacheSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeCacheSecurityGroupIngressRequest(request));
    setReply(reply);
}

const AuthorizeCacheSecurityGroupIngressRequest * AuthorizeCacheSecurityGroupIngressResponse::request() const
{
    Q_D(const AuthorizeCacheSecurityGroupIngressResponse);
    return static_cast<const AuthorizeCacheSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache AuthorizeCacheSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeCacheSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeCacheSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeCacheSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeCacheSecurityGroupIngressResponse instance.
 */
AuthorizeCacheSecurityGroupIngressResponsePrivate::AuthorizeCacheSecurityGroupIngressResponsePrivate(
    AuthorizeCacheSecurityGroupIngressQueueResponse * const q) : AuthorizeCacheSecurityGroupIngressPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache AuthorizeCacheSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeCacheSecurityGroupIngressResponsePrivate::AuthorizeCacheSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeCacheSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
