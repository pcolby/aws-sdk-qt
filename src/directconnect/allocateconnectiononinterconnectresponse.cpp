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

#include "allocateconnectiononinterconnectresponse.h"
#include "allocateconnectiononinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AllocateConnectionOnInterconnectResponse
 *
 * @brief  Handles DirectConnect AllocateConnectionOnInterconnect responses.
 *
 * @see    DirectConnectClient::allocateConnectionOnInterconnect
 */

/**
 * @brief  Constructs a new AllocateConnectionOnInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateConnectionOnInterconnectResponse::AllocateConnectionOnInterconnectResponse(
        const AllocateConnectionOnInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocateConnectionOnInterconnectResponsePrivate(this), parent)
{
    setRequest(new AllocateConnectionOnInterconnectRequest(request));
    setReply(reply);
}

const AllocateConnectionOnInterconnectRequest * AllocateConnectionOnInterconnectResponse::request() const
{
    Q_D(const AllocateConnectionOnInterconnectResponse);
    return static_cast<const AllocateConnectionOnInterconnectRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AllocateConnectionOnInterconnect response.
 *
 * @param  response  Response to parse.
 */
void AllocateConnectionOnInterconnectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AllocateConnectionOnInterconnectResponsePrivate
 *
 * @brief  Private implementation for AllocateConnectionOnInterconnectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateConnectionOnInterconnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AllocateConnectionOnInterconnectResponse instance.
 */
AllocateConnectionOnInterconnectResponsePrivate::AllocateConnectionOnInterconnectResponsePrivate(
    AllocateConnectionOnInterconnectQueueResponse * const q) : AllocateConnectionOnInterconnectPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AllocateConnectionOnInterconnectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AllocateConnectionOnInterconnectResponsePrivate::AllocateConnectionOnInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateConnectionOnInterconnectResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
