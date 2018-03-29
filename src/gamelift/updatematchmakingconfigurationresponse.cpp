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

#include "updatematchmakingconfigurationresponse.h"
#include "updatematchmakingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateMatchmakingConfigurationResponse
 *
 * @brief  Handles GameLift UpdateMatchmakingConfiguration responses.
 *
 * @see    GameLiftClient::updateMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new UpdateMatchmakingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMatchmakingConfigurationResponse::UpdateMatchmakingConfigurationResponse(
        const UpdateMatchmakingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateMatchmakingConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateMatchmakingConfigurationRequest(request));
    setReply(reply);
}

const UpdateMatchmakingConfigurationRequest * UpdateMatchmakingConfigurationResponse::request() const
{
    Q_D(const UpdateMatchmakingConfigurationResponse);
    return static_cast<const UpdateMatchmakingConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateMatchmakingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateMatchmakingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMatchmakingConfigurationResponsePrivate
 *
 * @brief  Private implementation for UpdateMatchmakingConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMatchmakingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMatchmakingConfigurationResponse instance.
 */
UpdateMatchmakingConfigurationResponsePrivate::UpdateMatchmakingConfigurationResponsePrivate(
    UpdateMatchmakingConfigurationQueueResponse * const q) : UpdateMatchmakingConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateMatchmakingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMatchmakingConfigurationResponsePrivate::UpdateMatchmakingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMatchmakingConfigurationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
