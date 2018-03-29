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

#include "updatefleetportsettingsresponse.h"
#include "updatefleetportsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateFleetPortSettingsResponse
 *
 * @brief  Handles GameLift UpdateFleetPortSettings responses.
 *
 * @see    GameLiftClient::updateFleetPortSettings
 */

/**
 * @brief  Constructs a new UpdateFleetPortSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFleetPortSettingsResponse::UpdateFleetPortSettingsResponse(
        const UpdateFleetPortSettingsRequest &request,
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
    Q_D(UpdateFleetPortSettingsResponse);
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
    UpdateFleetPortSettingsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateFleetPortSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFleetPortSettingsResponsePrivate::parseUpdateFleetPortSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFleetPortSettingsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
