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

#include "addinstancefleetresponse.h"
#include "addinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  AddInstanceFleetResponse
 *
 * @brief  Handles EMR AddInstanceFleet responses.
 *
 * @see    EMRClient::addInstanceFleet
 */

/**
 * @brief  Constructs a new AddInstanceFleetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddInstanceFleetResponse::AddInstanceFleetResponse(
        const AddInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new AddInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new AddInstanceFleetRequest(request));
    setReply(reply);
}

const AddInstanceFleetRequest * AddInstanceFleetResponse::request() const
{
    Q_D(const AddInstanceFleetResponse);
    return static_cast<const AddInstanceFleetRequest *>(d->request);
}

/**
 * @brief  Parse a EMR AddInstanceFleet response.
 *
 * @param  response  Response to parse.
 */
void AddInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddInstanceFleetResponsePrivate
 *
 * @brief  Private implementation for AddInstanceFleetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceFleetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddInstanceFleetResponse instance.
 */
AddInstanceFleetResponsePrivate::AddInstanceFleetResponsePrivate(
    AddInstanceFleetQueueResponse * const q) : AddInstanceFleetPrivate(q)
{

}

/**
 * @brief  Parse an EMR AddInstanceFleetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddInstanceFleetResponsePrivate::AddInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddInstanceFleetResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
