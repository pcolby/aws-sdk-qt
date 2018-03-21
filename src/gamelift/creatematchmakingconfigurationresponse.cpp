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

#include "creatematchmakingconfigurationresponse.h"
#include "creatematchmakingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreateMatchmakingConfigurationResponse
 *
 * @brief  Handles GameLift CreateMatchmakingConfiguration responses.
 *
 * @see    GameLiftClient::createMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new CreateMatchmakingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMatchmakingConfigurationResponse::CreateMatchmakingConfigurationResponse(
        const CreateMatchmakingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateMatchmakingConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateMatchmakingConfigurationRequest(request));
    setReply(reply);
}

const CreateMatchmakingConfigurationRequest * CreateMatchmakingConfigurationResponse::request() const
{
    Q_D(const CreateMatchmakingConfigurationResponse);
    return static_cast<const CreateMatchmakingConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateMatchmakingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateMatchmakingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMatchmakingConfigurationResponsePrivate
 *
 * @brief  Private implementation for CreateMatchmakingConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMatchmakingConfigurationResponse instance.
 */
CreateMatchmakingConfigurationResponsePrivate::CreateMatchmakingConfigurationResponsePrivate(
    CreateMatchmakingConfigurationQueueResponse * const q) : CreateMatchmakingConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateMatchmakingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMatchmakingConfigurationResponsePrivate::CreateMatchmakingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMatchmakingConfigurationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
