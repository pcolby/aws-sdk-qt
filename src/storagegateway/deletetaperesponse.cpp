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

#include "deletetaperesponse.h"
#include "deletetaperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteTapeResponse
 *
 * @brief  Handles StorageGateway DeleteTape responses.
 *
 * @see    StorageGatewayClient::deleteTape
 */

/**
 * @brief  Constructs a new DeleteTapeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTapeResponse::DeleteTapeResponse(
        const DeleteTapeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DeleteTapeResponsePrivate(this), parent)
{
    setRequest(new DeleteTapeRequest(request));
    setReply(reply);
}

const DeleteTapeRequest * DeleteTapeResponse::request() const
{
    Q_D(const DeleteTapeResponse);
    return static_cast<const DeleteTapeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteTape response.
 *
 * @param  response  Response to parse.
 */
void DeleteTapeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTapeResponsePrivate
 *
 * @brief  Private implementation for DeleteTapeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTapeResponse instance.
 */
DeleteTapeResponsePrivate::DeleteTapeResponsePrivate(
    DeleteTapeResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteTapeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTapeResponsePrivate::DeleteTapeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTapeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
