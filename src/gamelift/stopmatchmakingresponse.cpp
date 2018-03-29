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

#include "stopmatchmakingresponse.h"
#include "stopmatchmakingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  StopMatchmakingResponse
 *
 * @brief  Handles GameLift StopMatchmaking responses.
 *
 * @see    GameLiftClient::stopMatchmaking
 */

/**
 * @brief  Constructs a new StopMatchmakingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopMatchmakingResponse::StopMatchmakingResponse(
        const StopMatchmakingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new StopMatchmakingResponsePrivate(this), parent)
{
    setRequest(new StopMatchmakingRequest(request));
    setReply(reply);
}

const StopMatchmakingRequest * StopMatchmakingResponse::request() const
{
    Q_D(const StopMatchmakingResponse);
    return static_cast<const StopMatchmakingRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift StopMatchmaking response.
 *
 * @param  response  Response to parse.
 */
void StopMatchmakingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopMatchmakingResponsePrivate
 *
 * @brief  Private implementation for StopMatchmakingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopMatchmakingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopMatchmakingResponse instance.
 */
StopMatchmakingResponsePrivate::StopMatchmakingResponsePrivate(
    StopMatchmakingResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift StopMatchmakingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopMatchmakingResponsePrivate::StopMatchmakingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopMatchmakingResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
