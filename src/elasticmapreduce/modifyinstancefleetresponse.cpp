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

#include "modifyinstancefleetresponse.h"
#include "modifyinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  ModifyInstanceFleetResponse
 *
 * @brief  Handles EMR ModifyInstanceFleet responses.
 *
 * @see    EMRClient::modifyInstanceFleet
 */

/**
 * @brief  Constructs a new ModifyInstanceFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyInstanceFleetResponse::ModifyInstanceFleetResponse(
        const ModifyInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ModifyInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceFleetRequest(request));
    setReply(reply);
}

const ModifyInstanceFleetRequest * ModifyInstanceFleetResponse::request() const
{
    Q_D(const ModifyInstanceFleetResponse);
    return static_cast<const ModifyInstanceFleetRequest *>(d->request);
}

/**
 * @brief  Parse a EMR ModifyInstanceFleet response.
 *
 * @param  response  Response to parse.
 */
void ModifyInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyInstanceFleetResponsePrivate
 *
 * @brief  Private implementation for ModifyInstanceFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyInstanceFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyInstanceFleetResponse instance.
 */
ModifyInstanceFleetResponsePrivate::ModifyInstanceFleetResponsePrivate(
    ModifyInstanceFleetQueueResponse * const q) : ModifyInstanceFleetPrivate(q)
{

}

/**
 * @brief  Parse an EMR ModifyInstanceFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyInstanceFleetResponsePrivate::ModifyInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceFleetResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
