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

#include "deletematchmakingconfigurationresponse.h"
#include "deletematchmakingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DeleteMatchmakingConfigurationResponse
 *
 * @brief  Handles GameLift DeleteMatchmakingConfiguration responses.
 *
 * @see    GameLiftClient::deleteMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMatchmakingConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DeleteMatchmakingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteMatchmakingConfigurationRequest(request));
    setReply(reply);
}

const DeleteMatchmakingConfigurationRequest * DeleteMatchmakingConfigurationResponse::request() const
{
    Q_D(const DeleteMatchmakingConfigurationResponse);
    return static_cast<const DeleteMatchmakingConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteMatchmakingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteMatchmakingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMatchmakingConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteMatchmakingConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMatchmakingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMatchmakingConfigurationResponse instance.
 */
DeleteMatchmakingConfigurationResponsePrivate::DeleteMatchmakingConfigurationResponsePrivate(
    DeleteMatchmakingConfigurationQueueResponse * const q) : DeleteMatchmakingConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteMatchmakingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMatchmakingConfigurationResponsePrivate::DeleteMatchmakingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMatchmakingConfigurationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
