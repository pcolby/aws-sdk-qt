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

#include "authorizesecuritygroupegressresponse.h"
#include "authorizesecuritygroupegressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AuthorizeSecurityGroupEgressResponse
 *
 * @brief  Handles EC2 AuthorizeSecurityGroupEgress responses.
 *
 * @see    EC2Client::authorizeSecurityGroupEgress
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeSecurityGroupEgressResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AuthorizeSecurityGroupEgressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeSecurityGroupEgressRequest(request));
    setReply(reply);
}

const AuthorizeSecurityGroupEgressRequest * AuthorizeSecurityGroupEgressResponse::request() const
{
    Q_D(const AuthorizeSecurityGroupEgressResponse);
    return static_cast<const AuthorizeSecurityGroupEgressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AuthorizeSecurityGroupEgress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeSecurityGroupEgressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeSecurityGroupEgressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeSecurityGroupEgressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupEgressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeSecurityGroupEgressResponse instance.
 */
AuthorizeSecurityGroupEgressResponsePrivate::AuthorizeSecurityGroupEgressResponsePrivate(
    AuthorizeSecurityGroupEgressQueueResponse * const q) : AuthorizeSecurityGroupEgressPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AuthorizeSecurityGroupEgressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeSecurityGroupEgressResponsePrivate::AuthorizeSecurityGroupEgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeSecurityGroupEgressResponse"));
    /// @todo
}
