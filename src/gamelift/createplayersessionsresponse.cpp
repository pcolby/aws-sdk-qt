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

#include "createplayersessionsresponse.h"
#include "createplayersessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreatePlayerSessionsResponse
 *
 * @brief  Handles GameLift CreatePlayerSessions responses.
 *
 * @see    GameLiftClient::createPlayerSessions
 */

/**
 * @brief  Constructs a new CreatePlayerSessionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlayerSessionsResponse::CreatePlayerSessionsResponse(
        const CreatePlayerSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreatePlayerSessionsResponsePrivate(this), parent)
{
    setRequest(new CreatePlayerSessionsRequest(request));
    setReply(reply);
}

const CreatePlayerSessionsRequest * CreatePlayerSessionsResponse::request() const
{
    Q_D(const CreatePlayerSessionsResponse);
    return static_cast<const CreatePlayerSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreatePlayerSessions response.
 *
 * @param  response  Response to parse.
 */
void CreatePlayerSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlayerSessionsResponsePrivate
 *
 * @brief  Private implementation for CreatePlayerSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlayerSessionsResponse instance.
 */
CreatePlayerSessionsResponsePrivate::CreatePlayerSessionsResponsePrivate(
    CreatePlayerSessionsQueueResponse * const q) : CreatePlayerSessionsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreatePlayerSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlayerSessionsResponsePrivate::CreatePlayerSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlayerSessionsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
