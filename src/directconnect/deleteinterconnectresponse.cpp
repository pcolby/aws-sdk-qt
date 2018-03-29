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

#include "deleteinterconnectresponse.h"
#include "deleteinterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteInterconnectResponse
 *
 * @brief  Handles DirectConnect DeleteInterconnect responses.
 *
 * @see    DirectConnectClient::deleteInterconnect
 */

/**
 * @brief  Constructs a new DeleteInterconnectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInterconnectResponse::DeleteInterconnectResponse(
        const DeleteInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteInterconnectResponsePrivate(this), parent)
{
    setRequest(new DeleteInterconnectRequest(request));
    setReply(reply);
}

const DeleteInterconnectRequest * DeleteInterconnectResponse::request() const
{
    Q_D(const DeleteInterconnectResponse);
    return static_cast<const DeleteInterconnectRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DeleteInterconnect response.
 *
 * @param  response  Response to parse.
 */
void DeleteInterconnectResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInterconnectResponsePrivate
 *
 * @brief  Private implementation for DeleteInterconnectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInterconnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInterconnectResponse instance.
 */
DeleteInterconnectResponsePrivate::DeleteInterconnectResponsePrivate(
    DeleteInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DeleteInterconnectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInterconnectResponsePrivate::DeleteInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInterconnectResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
