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

#include "deletetapearchiveresponse.h"
#include "deletetapearchiveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteTapeArchiveResponse
 *
 * @brief  Handles StorageGateway DeleteTapeArchive responses.
 *
 * @see    StorageGatewayClient::deleteTapeArchive
 */

/**
 * @brief  Constructs a new DeleteTapeArchiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTapeArchiveResponse::DeleteTapeArchiveResponse(
        const DeleteTapeArchiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteTapeArchiveResponsePrivate(this), parent)
{
    setRequest(new DeleteTapeArchiveRequest(request));
    setReply(reply);
}

const DeleteTapeArchiveRequest * DeleteTapeArchiveResponse::request() const
{
    Q_D(const DeleteTapeArchiveResponse);
    return static_cast<const DeleteTapeArchiveRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteTapeArchive response.
 *
 * @param  response  Response to parse.
 */
void DeleteTapeArchiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTapeArchiveResponsePrivate
 *
 * @brief  Private implementation for DeleteTapeArchiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeArchiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTapeArchiveResponse instance.
 */
DeleteTapeArchiveResponsePrivate::DeleteTapeArchiveResponsePrivate(
    DeleteTapeArchiveQueueResponse * const q) : DeleteTapeArchivePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteTapeArchiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTapeArchiveResponsePrivate::DeleteTapeArchiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTapeArchiveResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
