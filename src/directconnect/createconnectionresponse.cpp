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

#include "createconnectionresponse.h"
#include "createconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateConnectionResponse
 *
 * @brief  Handles DirectConnect CreateConnection responses.
 *
 * @see    DirectConnectClient::createConnection
 */

/**
 * @brief  Constructs a new CreateConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConnectionResponse::CreateConnectionResponse(
        const CreateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectionRequest(request));
    setReply(reply);
}

const CreateConnectionRequest * CreateConnectionResponse::request() const
{
    Q_D(const CreateConnectionResponse);
    return static_cast<const CreateConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreateConnection response.
 *
 * @param  response  Response to parse.
 */
void CreateConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConnectionResponsePrivate
 *
 * @brief  Private implementation for CreateConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConnectionResponse instance.
 */
CreateConnectionResponsePrivate::CreateConnectionResponsePrivate(
    CreateConnectionQueueResponse * const q) : CreateConnectionPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreateConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConnectionResponsePrivate::CreateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectionResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
