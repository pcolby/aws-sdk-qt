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

#include "creategamesessionqueueresponse.h"
#include "creategamesessionqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateGameSessionQueueResponse
 *
 * @brief  Handles GameLift CreateGameSessionQueue responses.
 *
 * @see    GameLiftClient::createGameSessionQueue
 */

/**
 * @brief  Constructs a new CreateGameSessionQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGameSessionQueueResponse::CreateGameSessionQueueResponse(
        const CreateGameSessionQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateGameSessionQueueResponsePrivate(this), parent)
{
    setRequest(new CreateGameSessionQueueRequest(request));
    setReply(reply);
}

const CreateGameSessionQueueRequest * CreateGameSessionQueueResponse::request() const
{
    Q_D(const CreateGameSessionQueueResponse);
    return static_cast<const CreateGameSessionQueueRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateGameSessionQueue response.
 *
 * @param  response  Response to parse.
 */
void CreateGameSessionQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGameSessionQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGameSessionQueueResponsePrivate
 *
 * @brief  Private implementation for CreateGameSessionQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGameSessionQueueResponse instance.
 */
CreateGameSessionQueueResponsePrivate::CreateGameSessionQueueResponsePrivate(
    CreateGameSessionQueueResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateGameSessionQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGameSessionQueueResponsePrivate::parseCreateGameSessionQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGameSessionQueueResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
