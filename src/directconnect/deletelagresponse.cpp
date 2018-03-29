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

#include "deletelagresponse.h"
#include "deletelagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteLagResponse
 *
 * @brief  Handles DirectConnect DeleteLag responses.
 *
 * @see    DirectConnectClient::deleteLag
 */

/**
 * @brief  Constructs a new DeleteLagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLagResponse::DeleteLagResponse(
        const DeleteLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteLagResponsePrivate(this), parent)
{
    setRequest(new DeleteLagRequest(request));
    setReply(reply);
}

const DeleteLagRequest * DeleteLagResponse::request() const
{
    Q_D(const DeleteLagResponse);
    return static_cast<const DeleteLagRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DeleteLag response.
 *
 * @param  response  Response to parse.
 */
void DeleteLagResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLagResponsePrivate
 *
 * @brief  Private implementation for DeleteLagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLagResponse instance.
 */
DeleteLagResponsePrivate::DeleteLagResponsePrivate(
    DeleteLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DeleteLagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLagResponsePrivate::parseDeleteLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
