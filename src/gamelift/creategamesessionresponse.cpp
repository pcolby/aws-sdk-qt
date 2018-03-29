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

#include "creategamesessionresponse.h"
#include "creategamesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateGameSessionResponse
 *
 * @brief  Handles GameLift CreateGameSession responses.
 *
 * @see    GameLiftClient::createGameSession
 */

/**
 * @brief  Constructs a new CreateGameSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGameSessionResponse::CreateGameSessionResponse(
        const CreateGameSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateGameSessionResponsePrivate(this), parent)
{
    setRequest(new CreateGameSessionRequest(request));
    setReply(reply);
}

const CreateGameSessionRequest * CreateGameSessionResponse::request() const
{
    Q_D(const CreateGameSessionResponse);
    return static_cast<const CreateGameSessionRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateGameSession response.
 *
 * @param  response  Response to parse.
 */
void CreateGameSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGameSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGameSessionResponsePrivate
 *
 * @brief  Private implementation for CreateGameSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGameSessionResponse instance.
 */
CreateGameSessionResponsePrivate::CreateGameSessionResponsePrivate(
    CreateGameSessionResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateGameSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGameSessionResponsePrivate::CreateGameSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGameSessionResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
