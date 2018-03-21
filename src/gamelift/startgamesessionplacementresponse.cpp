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

#include "startgamesessionplacementresponse.h"
#include "startgamesessionplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  StartGameSessionPlacementResponse
 *
 * @brief  Handles GameLift StartGameSessionPlacement responses.
 *
 * @see    GameLiftClient::startGameSessionPlacement
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartGameSessionPlacementResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new StartGameSessionPlacementResponsePrivate(this), parent)
{
    setRequest(new StartGameSessionPlacementRequest(request));
    setReply(reply);
}

const StartGameSessionPlacementRequest * StartGameSessionPlacementResponse::request() const
{
    Q_D(const StartGameSessionPlacementResponse);
    return static_cast<const StartGameSessionPlacementRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift StartGameSessionPlacement response.
 *
 * @param  response  Response to parse.
 */
void StartGameSessionPlacementResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartGameSessionPlacementResponsePrivate
 *
 * @brief  Private implementation for StartGameSessionPlacementResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartGameSessionPlacementResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartGameSessionPlacementResponse instance.
 */
StartGameSessionPlacementResponsePrivate::StartGameSessionPlacementResponsePrivate(
    StartGameSessionPlacementQueueResponse * const q) : StartGameSessionPlacementPrivate(q)
{

}

/**
 * @brief  Parse an GameLift StartGameSessionPlacementResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartGameSessionPlacementResponsePrivate::StartGameSessionPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartGameSessionPlacementResponse"));
    /// @todo
}
