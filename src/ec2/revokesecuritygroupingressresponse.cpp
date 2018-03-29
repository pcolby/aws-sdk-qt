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

#include "revokesecuritygroupingressresponse.h"
#include "revokesecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  RevokeSecurityGroupIngressResponse
 *
 * @brief  Handles EC2 RevokeSecurityGroupIngress responses.
 *
 * @see    EC2Client::revokeSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeSecurityGroupIngressResponse::RevokeSecurityGroupIngressResponse(
        const RevokeSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RevokeSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new RevokeSecurityGroupIngressRequest(request));
    setReply(reply);
}

const RevokeSecurityGroupIngressRequest * RevokeSecurityGroupIngressResponse::request() const
{
    Q_D(const RevokeSecurityGroupIngressResponse);
    return static_cast<const RevokeSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RevokeSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void RevokeSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeSecurityGroupIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for RevokeSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeSecurityGroupIngressResponse instance.
 */
RevokeSecurityGroupIngressResponsePrivate::RevokeSecurityGroupIngressResponsePrivate(
    RevokeSecurityGroupIngressResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 RevokeSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeSecurityGroupIngressResponsePrivate::RevokeSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
