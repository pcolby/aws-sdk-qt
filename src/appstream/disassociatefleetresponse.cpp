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

#include "disassociatefleetresponse.h"
#include "disassociatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  DisassociateFleetResponse
 *
 * @brief  Handles AppStream DisassociateFleet responses.
 *
 * @see    AppStreamClient::disassociateFleet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateFleetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DisassociateFleetResponsePrivate(this), parent)
{
    setRequest(new DisassociateFleetRequest(request));
    setReply(reply);
}

const DisassociateFleetRequest * DisassociateFleetResponse::request() const
{
    Q_D(const DisassociateFleetResponse);
    return static_cast<const DisassociateFleetRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DisassociateFleet response.
 *
 * @param  response  Response to parse.
 */
void DisassociateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateFleetResponsePrivate
 *
 * @brief  Private implementation for DisassociateFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateFleetResponse instance.
 */
DisassociateFleetResponsePrivate::DisassociateFleetResponsePrivate(
    DisassociateFleetQueueResponse * const q) : DisassociateFleetPrivate(q)
{

}

/**
 * @brief  Parse an AppStream DisassociateFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateFleetResponsePrivate::DisassociateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFleetResponse"));
    /// @todo
}
