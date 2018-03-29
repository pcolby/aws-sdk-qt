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

#include "associatehostedconnectionresponse.h"
#include "associatehostedconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AssociateHostedConnectionResponse
 *
 * @brief  Handles DirectConnect AssociateHostedConnection responses.
 *
 * @see    DirectConnectClient::associateHostedConnection
 */

/**
 * @brief  Constructs a new AssociateHostedConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateHostedConnectionResponse::AssociateHostedConnectionResponse(
        const AssociateHostedConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AssociateHostedConnectionResponsePrivate(this), parent)
{
    setRequest(new AssociateHostedConnectionRequest(request));
    setReply(reply);
}

const AssociateHostedConnectionRequest * AssociateHostedConnectionResponse::request() const
{
    Q_D(const AssociateHostedConnectionResponse);
    return static_cast<const AssociateHostedConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AssociateHostedConnection response.
 *
 * @param  response  Response to parse.
 */
void AssociateHostedConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateHostedConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateHostedConnectionResponsePrivate
 *
 * @brief  Private implementation for AssociateHostedConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateHostedConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateHostedConnectionResponse instance.
 */
AssociateHostedConnectionResponsePrivate::AssociateHostedConnectionResponsePrivate(
    AssociateHostedConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AssociateHostedConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateHostedConnectionResponsePrivate::AssociateHostedConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateHostedConnectionResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
