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

#include "deletefileshareresponse.h"
#include "deletefileshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteFileShareResponse
 *
 * @brief  Handles StorageGateway DeleteFileShare responses.
 *
 * @see    StorageGatewayClient::deleteFileShare
 */

/**
 * @brief  Constructs a new DeleteFileShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFileShareResponse::DeleteFileShareResponse(
        const DeleteFileShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteFileShareResponsePrivate(this), parent)
{
    setRequest(new DeleteFileShareRequest(request));
    setReply(reply);
}

const DeleteFileShareRequest * DeleteFileShareResponse::request() const
{
    Q_D(const DeleteFileShareResponse);
    return static_cast<const DeleteFileShareRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteFileShare response.
 *
 * @param  response  Response to parse.
 */
void DeleteFileShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFileShareResponsePrivate
 *
 * @brief  Private implementation for DeleteFileShareResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileShareResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFileShareResponse instance.
 */
DeleteFileShareResponsePrivate::DeleteFileShareResponsePrivate(
    DeleteFileShareResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteFileShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFileShareResponsePrivate::DeleteFileShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFileShareResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
