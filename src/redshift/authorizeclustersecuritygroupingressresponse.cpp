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

#include "authorizeclustersecuritygroupingressresponse.h"
#include "authorizeclustersecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  AuthorizeClusterSecurityGroupIngressResponse
 *
 * @brief  Handles Redshift AuthorizeClusterSecurityGroupIngress responses.
 *
 * @see    RedshiftClient::authorizeClusterSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeClusterSecurityGroupIngressResponse::AuthorizeClusterSecurityGroupIngressResponse(
        const AuthorizeClusterSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new AuthorizeClusterSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeClusterSecurityGroupIngressRequest(request));
    setReply(reply);
}

const AuthorizeClusterSecurityGroupIngressRequest * AuthorizeClusterSecurityGroupIngressResponse::request() const
{
    Q_D(const AuthorizeClusterSecurityGroupIngressResponse);
    return static_cast<const AuthorizeClusterSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift AuthorizeClusterSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeClusterSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(AuthorizeClusterSecurityGroupIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeClusterSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeClusterSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeClusterSecurityGroupIngressResponse instance.
 */
AuthorizeClusterSecurityGroupIngressResponsePrivate::AuthorizeClusterSecurityGroupIngressResponsePrivate(
    AuthorizeClusterSecurityGroupIngressResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift AuthorizeClusterSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeClusterSecurityGroupIngressResponsePrivate::parseAuthorizeClusterSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeClusterSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
