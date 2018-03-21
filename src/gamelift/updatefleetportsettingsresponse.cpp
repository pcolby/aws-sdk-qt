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

#include "updatefleetportsettingsresponse.h"
#include "updatefleetportsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateFleetPortSettingsResponse
 *
 * @brief  Handles GameLift UpdateFleetPortSettings responses.
 *
 * @see    GameLiftClient::updateFleetPortSettings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFleetPortSettingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateFleetPortSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateFleetPortSettingsRequest(request));
    setReply(reply);
}

const UpdateFleetPortSettingsRequest * UpdateFleetPortSettingsResponse::request() const
{
    Q_D(const UpdateFleetPortSettingsResponse);
    return static_cast<const UpdateFleetPortSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateFleetPortSettings response.
 *
 * @param  response  Response to parse.
 */
void UpdateFleetPortSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFleetPortSettingsResponsePrivate
 *
 * @brief  Private implementation for UpdateFleetPortSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetPortSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFleetPortSettingsResponse instance.
 */
UpdateFleetPortSettingsResponsePrivate::UpdateFleetPortSettingsResponsePrivate(
    UpdateFleetPortSettingsQueueResponse * const q) : UpdateFleetPortSettingsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateFleetPortSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFleetPortSettingsResponsePrivate::UpdateFleetPortSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetPortSettingsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
