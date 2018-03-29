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

#include "updategamesessionresponse.h"
#include "updategamesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateGameSessionResponse
 *
 * @brief  Handles GameLift UpdateGameSession responses.
 *
 * @see    GameLiftClient::updateGameSession
 */

/**
 * @brief  Constructs a new UpdateGameSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGameSessionResponse::UpdateGameSessionResponse(
        const UpdateGameSessionRequest &request,
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
    UpdateGameSessionResponse * const q) : GameLiftResponsePrivate(q)
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

} // namespace GameLift
} // namespace QtAws
