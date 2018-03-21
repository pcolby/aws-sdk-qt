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

#include "updatenfsfileshareresponse.h"
#include "updatenfsfileshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateNFSFileShareResponse
 *
 * @brief  Handles StorageGateway UpdateNFSFileShare responses.
 *
 * @see    StorageGatewayClient::updateNFSFileShare
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNFSFileShareResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateNFSFileShareResponsePrivate(this), parent)
{
    setRequest(new UpdateNFSFileShareRequest(request));
    setReply(reply);
}

const UpdateNFSFileShareRequest * UpdateNFSFileShareResponse::request() const
{
    Q_D(const UpdateNFSFileShareResponse);
    return static_cast<const UpdateNFSFileShareRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateNFSFileShare response.
 *
 * @param  response  Response to parse.
 */
void UpdateNFSFileShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNFSFileShareResponsePrivate
 *
 * @brief  Private implementation for UpdateNFSFileShareResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNFSFileShareResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNFSFileShareResponse instance.
 */
UpdateNFSFileShareResponsePrivate::UpdateNFSFileShareResponsePrivate(
    UpdateNFSFileShareQueueResponse * const q) : UpdateNFSFileSharePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateNFSFileShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNFSFileShareResponsePrivate::UpdateNFSFileShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNFSFileShareResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
