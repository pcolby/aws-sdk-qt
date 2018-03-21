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

#include "updategamesessionresponse.h"
#include "updategamesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateGameSessionResponse
 *
 * @brief  Handles GameLift UpdateGameSession responses.
 *
 * @see    GameLiftClient::updateGameSession
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGameSessionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new UpdateGameSessionResponsePrivate(this), parent)
{
    setRequest(new UpdateGameSessionRequest(request));
    setReply(reply);
}

const UpdateGameSessionRequest * UpdateGameSessionResponse::request() const
{
    Q_D(const UpdateGameSessionResponse);
    return static_cast<const UpdateGameSessionRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateGameSession response.
 *
 * @param  response  Response to parse.
 */
void UpdateGameSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGameSessionResponsePrivate
 *
 * @brief  Private implementation for UpdateGameSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGameSessionResponse instance.
 */
UpdateGameSessionResponsePrivate::UpdateGameSessionResponsePrivate(
    UpdateGameSessionQueueResponse * const q) : UpdateGameSessionPrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateGameSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGameSessionResponsePrivate::UpdateGameSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGameSessionResponse"));
    /// @todo
}
