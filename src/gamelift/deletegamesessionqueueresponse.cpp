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

#include "deletegamesessionqueueresponse.h"
#include "deletegamesessionqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteGameSessionQueueResponse
 *
 * @brief  Handles GameLift DeleteGameSessionQueue responses.
 *
 * @see    GameLiftClient::deleteGameSessionQueue
 */

/**
 * @brief  Constructs a new DeleteGameSessionQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGameSessionQueueResponse::DeleteGameSessionQueueResponse(
        const DeleteGameSessionQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DeleteGameSessionQueueResponsePrivate(this), parent)
{
    setRequest(new DeleteGameSessionQueueRequest(request));
    setReply(reply);
}

const DeleteGameSessionQueueRequest * DeleteGameSessionQueueResponse::request() const
{
    Q_D(const DeleteGameSessionQueueResponse);
    return static_cast<const DeleteGameSessionQueueRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteGameSessionQueue response.
 *
 * @param  response  Response to parse.
 */
void DeleteGameSessionQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGameSessionQueueResponsePrivate
 *
 * @brief  Private implementation for DeleteGameSessionQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGameSessionQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGameSessionQueueResponse instance.
 */
DeleteGameSessionQueueResponsePrivate::DeleteGameSessionQueueResponsePrivate(
    DeleteGameSessionQueueQueueResponse * const q) : DeleteGameSessionQueuePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteGameSessionQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGameSessionQueueResponsePrivate::DeleteGameSessionQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGameSessionQueueResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
