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

#include "revokeclustersecuritygroupingressresponse.h"
#include "revokeclustersecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  RevokeClusterSecurityGroupIngressResponse
 *
 * @brief  Handles Redshift RevokeClusterSecurityGroupIngress responses.
 *
 * @see    RedshiftClient::revokeClusterSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeClusterSecurityGroupIngressResponse::RevokeClusterSecurityGroupIngressResponse(
        const RevokeClusterSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RevokeClusterSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new RevokeClusterSecurityGroupIngressRequest(request));
    setReply(reply);
}

const RevokeClusterSecurityGroupIngressRequest * RevokeClusterSecurityGroupIngressResponse::request() const
{
    Q_D(const RevokeClusterSecurityGroupIngressResponse);
    return static_cast<const RevokeClusterSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RevokeClusterSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void RevokeClusterSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeClusterSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for RevokeClusterSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeClusterSecurityGroupIngressResponse instance.
 */
RevokeClusterSecurityGroupIngressResponsePrivate::RevokeClusterSecurityGroupIngressResponsePrivate(
    RevokeClusterSecurityGroupIngressQueueResponse * const q) : RevokeClusterSecurityGroupIngressPrivate(q)
{

}

/**
 * @brief  Parse an Redshift RevokeClusterSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeClusterSecurityGroupIngressResponsePrivate::RevokeClusterSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeClusterSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
