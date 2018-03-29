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

#include "authorizedbsecuritygroupingressresponse.h"
#include "authorizedbsecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  AuthorizeDBSecurityGroupIngressResponse
 *
 * @brief  Handles RDS AuthorizeDBSecurityGroupIngress responses.
 *
 * @see    RDSClient::authorizeDBSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeDBSecurityGroupIngressResponse::AuthorizeDBSecurityGroupIngressResponse(
        const AuthorizeDBSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new AuthorizeDBSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeDBSecurityGroupIngressRequest(request));
    setReply(reply);
}

const AuthorizeDBSecurityGroupIngressRequest * AuthorizeDBSecurityGroupIngressResponse::request() const
{
    Q_D(const AuthorizeDBSecurityGroupIngressResponse);
    return static_cast<const AuthorizeDBSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a RDS AuthorizeDBSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeDBSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(AuthorizeDBSecurityGroupIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeDBSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeDBSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeDBSecurityGroupIngressResponse instance.
 */
AuthorizeDBSecurityGroupIngressResponsePrivate::AuthorizeDBSecurityGroupIngressResponsePrivate(
    AuthorizeDBSecurityGroupIngressResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS AuthorizeDBSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeDBSecurityGroupIngressResponsePrivate::AuthorizeDBSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeDBSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
