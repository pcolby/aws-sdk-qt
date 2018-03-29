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

#include "updategamesessionqueueresponse.h"
#include "updategamesessionqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateGameSessionQueueResponse
 *
 * @brief  Handles GameLift UpdateGameSessionQueue responses.
 *
 * @see    GameLiftClient::updateGameSessionQueue
 */

/**
 * @brief  Constructs a new UpdateGameSessionQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGameSessionQueueResponse::UpdateGameSessionQueueResponse(
        const UpdateGameSessionQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateGameSessionQueueResponse(new UpdateGameSessionQueueResponsePrivate(this), parent)
{
    setRequest(new UpdateGameSessionQueueRequest(request));
    setReply(reply);
}

const UpdateGameSessionQueueRequest * UpdateGameSessionQueueResponse::request() const
{
    Q_D(const UpdateGameSessionQueueResponse);
    return static_cast<const UpdateGameSessionQueueRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift UpdateGameSessionQueue response.
 *
 * @param  response  Response to parse.
 */
void UpdateGameSessionQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateGameSessionQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGameSessionQueueResponsePrivate
 *
 * @brief  Private implementation for UpdateGameSessionQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGameSessionQueueResponse instance.
 */
UpdateGameSessionQueueResponsePrivate::UpdateGameSessionQueueResponsePrivate(
    UpdateGameSessionQueueResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift UpdateGameSessionQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGameSessionQueueResponsePrivate::parseUpdateGameSessionQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGameSessionQueueResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
