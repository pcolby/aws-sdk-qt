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

#include "associatehostedconnectionresponse.h"
#include "associatehostedconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  AssociateHostedConnectionResponse
 *
 * @brief  Handles DirectConnect AssociateHostedConnection responses.
 *
 * @see    DirectConnectClient::associateHostedConnection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateHostedConnectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    AssociateHostedConnectionQueueResponse * const q) : AssociateHostedConnectionPrivate(q)
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
