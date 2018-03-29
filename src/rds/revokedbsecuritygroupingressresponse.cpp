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

#include "revokedbsecuritygroupingressresponse.h"
#include "revokedbsecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RevokeDBSecurityGroupIngressResponse
 *
 * @brief  Handles RDS RevokeDBSecurityGroupIngress responses.
 *
 * @see    RDSClient::revokeDBSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeDBSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeDBSecurityGroupIngressResponse::RevokeDBSecurityGroupIngressResponse(
        const RevokeDBSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RevokeDBSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new RevokeDBSecurityGroupIngressRequest(request));
    setReply(reply);
}

const RevokeDBSecurityGroupIngressRequest * RevokeDBSecurityGroupIngressResponse::request() const
{
    Q_D(const RevokeDBSecurityGroupIngressResponse);
    return static_cast<const RevokeDBSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RevokeDBSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void RevokeDBSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeDBSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for RevokeDBSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeDBSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeDBSecurityGroupIngressResponse instance.
 */
RevokeDBSecurityGroupIngressResponsePrivate::RevokeDBSecurityGroupIngressResponsePrivate(
    RevokeDBSecurityGroupIngressQueueResponse * const q) : RevokeDBSecurityGroupIngressPrivate(q)
{

}

/**
 * @brief  Parse an RDS RevokeDBSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeDBSecurityGroupIngressResponsePrivate::RevokeDBSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeDBSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
