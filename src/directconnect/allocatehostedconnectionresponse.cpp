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

#include "allocatehostedconnectionresponse.h"
#include "allocatehostedconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AllocateHostedConnectionResponse
 *
 * @brief  Handles DirectConnect AllocateHostedConnection responses.
 *
 * @see    DirectConnectClient::allocateHostedConnection
 */

/**
 * @brief  Constructs a new AllocateHostedConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateHostedConnectionResponse::AllocateHostedConnectionResponse(
        const AllocateHostedConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocateHostedConnectionResponsePrivate(this), parent)
{
    setRequest(new AllocateHostedConnectionRequest(request));
    setReply(reply);
}

const AllocateHostedConnectionRequest * AllocateHostedConnectionResponse::request() const
{
    Q_D(const AllocateHostedConnectionResponse);
    return static_cast<const AllocateHostedConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AllocateHostedConnection response.
 *
 * @param  response  Response to parse.
 */
void AllocateHostedConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(AllocateHostedConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocateHostedConnectionResponsePrivate
 *
 * @brief  Private implementation for AllocateHostedConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostedConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateHostedConnectionResponse instance.
 */
AllocateHostedConnectionResponsePrivate::AllocateHostedConnectionResponsePrivate(
    AllocateHostedConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AllocateHostedConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateHostedConnectionResponsePrivate::AllocateHostedConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateHostedConnectionResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
