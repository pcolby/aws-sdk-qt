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

#include "createinterconnectresponse.h"
#include "createinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  CreateInterconnectResponse
 *
 * @brief  Handles DirectConnect CreateInterconnect responses.
 *
 * @see    DirectConnectClient::createInterconnect
 */

/**
 * @brief  Constructs a new CreateInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInterconnectResponse::CreateInterconnectResponse(
        const CreateInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateInterconnectResponsePrivate(this), parent)
{
    setRequest(new CreateInterconnectRequest(request));
    setReply(reply);
}

const CreateInterconnectRequest * CreateInterconnectResponse::request() const
{
    Q_D(const CreateInterconnectResponse);
    return static_cast<const CreateInterconnectRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreateInterconnect response.
 *
 * @param  response  Response to parse.
 */
void CreateInterconnectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInterconnectResponsePrivate
 *
 * @brief  Private implementation for CreateInterconnectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInterconnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInterconnectResponse instance.
 */
CreateInterconnectResponsePrivate::CreateInterconnectResponsePrivate(
    CreateInterconnectQueueResponse * const q) : CreateInterconnectPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreateInterconnectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInterconnectResponsePrivate::CreateInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInterconnectResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
