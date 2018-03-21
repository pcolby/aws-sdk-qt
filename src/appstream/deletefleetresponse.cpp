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

#include "deletefleetresponse.h"
#include "deletefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DeleteFleetResponse
 *
 * @brief  Handles AppStream DeleteFleet responses.
 *
 * @see    AppStreamClient::deleteFleet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFleetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteFleetResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetRequest(request));
    setReply(reply);
}

const DeleteFleetRequest * DeleteFleetResponse::request() const
{
    Q_D(const DeleteFleetResponse);
    return static_cast<const DeleteFleetRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DeleteFleet response.
 *
 * @param  response  Response to parse.
 */
void DeleteFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFleetResponsePrivate
 *
 * @brief  Private implementation for DeleteFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFleetResponse instance.
 */
DeleteFleetResponsePrivate::DeleteFleetResponsePrivate(
    DeleteFleetQueueResponse * const q) : DeleteFleetPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DeleteFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFleetResponsePrivate::DeleteFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetResponse"));
    /// @todo
}
