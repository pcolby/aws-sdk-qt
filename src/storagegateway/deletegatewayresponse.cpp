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

#include "deletegatewayresponse.h"
#include "deletegatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteGatewayResponse
 *
 * @brief  Handles StorageGateway DeleteGateway responses.
 *
 * @see    StorageGatewayClient::deleteGateway
 */

/**
 * @brief  Constructs a new DeleteGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGatewayResponse::DeleteGatewayResponse(
        const DeleteGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteGatewayRequest(request));
    setReply(reply);
}

const DeleteGatewayRequest * DeleteGatewayResponse::request() const
{
    Q_D(const DeleteGatewayResponse);
    return static_cast<const DeleteGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGatewayResponse instance.
 */
DeleteGatewayResponsePrivate::DeleteGatewayResponsePrivate(
    DeleteGatewayQueueResponse * const q) : DeleteGatewayPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGatewayResponsePrivate::DeleteGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGatewayResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
