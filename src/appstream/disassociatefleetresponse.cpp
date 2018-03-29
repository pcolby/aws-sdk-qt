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

#include "disassociatefleetresponse.h"
#include "disassociatefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DisassociateFleetResponse
 *
 * @brief  Handles AppStream DisassociateFleet responses.
 *
 * @see    AppStreamClient::disassociateFleet
 */

/**
 * @brief  Constructs a new DisassociateFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateFleetResponse::DisassociateFleetResponse(
        const DisassociateFleetRequest &request,
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
    Q_D(DisassociateFleetResponse);
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
    DisassociateFleetResponse * const q) : AppStreamResponsePrivate(q)
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

} // namespace AppStream
} // namespace QtAws
