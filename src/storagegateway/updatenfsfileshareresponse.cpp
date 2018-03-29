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

#include "updatenfsfileshareresponse.h"
#include "updatenfsfileshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateNFSFileShareResponse
 *
 * @brief  Handles StorageGateway UpdateNFSFileShare responses.
 *
 * @see    StorageGatewayClient::updateNFSFileShare
 */

/**
 * @brief  Constructs a new UpdateNFSFileShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNFSFileShareResponse::UpdateNFSFileShareResponse(
        const UpdateNFSFileShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateNFSFileShareResponse(new UpdateNFSFileShareResponsePrivate(this), parent)
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
    Q_D(UpdateNFSFileShareResponse);
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
    UpdateNFSFileShareResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateNFSFileShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNFSFileShareResponsePrivate::parseUpdateNFSFileShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNFSFileShareResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
