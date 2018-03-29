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

#include "updatefleetcapacityresponse.h"
#include "updatefleetcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateFleetCapacityResponse
 *
 * @brief  Handles GameLift UpdateFleetCapacity responses.
 *
 * @see    GameLiftClient::updateFleetCapacity
 */

/**
 * @brief  Constructs a new UpdateFleetCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFleetCapacityResponse::UpdateFleetCapacityResponse(
        const UpdateFleetCapacityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateFleetCapacityResponse(new UpdateFleetCapacityResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetCapacityRequest(request));
    setReply(reply);
}

const UpdateFleetCapacityRequest * UpdateFleetCapacityResponse::request() const
{
    Q_D(const UpdateFleetCapacityResponse);
    return static_cast<const UpdateFleetCapacityRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateFleetCapacity response.
 *
 * @param  response  Response to parse.
 */
void UpdateFleetCapacityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateFleetCapacityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFleetCapacityResponsePrivate
 *
 * @brief  Private implementation for UpdateFleetCapacityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetCapacityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFleetCapacityResponse instance.
 */
UpdateFleetCapacityResponsePrivate::UpdateFleetCapacityResponsePrivate(
    UpdateFleetCapacityResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateFleetCapacityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFleetCapacityResponsePrivate::parseUpdateFleetCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetCapacityResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
