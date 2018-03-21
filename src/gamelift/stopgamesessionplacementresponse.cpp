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

#include "stopgamesessionplacementresponse.h"
#include "stopgamesessionplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  StopGameSessionPlacementResponse
 *
 * @brief  Handles GameLift StopGameSessionPlacement responses.
 *
 * @see    GameLiftClient::stopGameSessionPlacement
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopGameSessionPlacementResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new StopGameSessionPlacementResponsePrivate(this), parent)
{
    setRequest(new StopGameSessionPlacementRequest(request));
    setReply(reply);
}

const StopGameSessionPlacementRequest * StopGameSessionPlacementResponse::request() const
{
    Q_D(const StopGameSessionPlacementResponse);
    return static_cast<const StopGameSessionPlacementRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift StopGameSessionPlacement response.
 *
 * @param  response  Response to parse.
 */
void StopGameSessionPlacementResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopGameSessionPlacementResponsePrivate
 *
 * @brief  Private implementation for StopGameSessionPlacementResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopGameSessionPlacementResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopGameSessionPlacementResponse instance.
 */
StopGameSessionPlacementResponsePrivate::StopGameSessionPlacementResponsePrivate(
    StopGameSessionPlacementQueueResponse * const q) : StopGameSessionPlacementPrivate(q)
{

}

/**
 * @brief  Parse an GameLift StopGameSessionPlacementResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopGameSessionPlacementResponsePrivate::StopGameSessionPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopGameSessionPlacementResponse"));
    /// @todo
}
