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

#include "authorizesecuritygroupingressresponse.h"
#include "authorizesecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AuthorizeSecurityGroupIngressResponse
 *
 * @brief  Handles EC2 AuthorizeSecurityGroupIngress responses.
 *
 * @see    EC2Client::authorizeSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeSecurityGroupIngressResponse::AuthorizeSecurityGroupIngressResponse(
        const AuthorizeSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AuthorizeSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeSecurityGroupIngressRequest(request));
    setReply(reply);
}

const AuthorizeSecurityGroupIngressRequest * AuthorizeSecurityGroupIngressResponse::request() const
{
    Q_D(const AuthorizeSecurityGroupIngressResponse);
    return static_cast<const AuthorizeSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AuthorizeSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeSecurityGroupIngressResponse instance.
 */
AuthorizeSecurityGroupIngressResponsePrivate::AuthorizeSecurityGroupIngressResponsePrivate(
    AuthorizeSecurityGroupIngressQueueResponse * const q) : AuthorizeSecurityGroupIngressPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AuthorizeSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeSecurityGroupIngressResponsePrivate::AuthorizeSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
