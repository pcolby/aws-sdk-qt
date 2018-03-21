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

#include "getgamesessionlogurlresponse.h"
#include "getgamesessionlogurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  GetGameSessionLogUrlResponse
 *
 * @brief  Handles GameLift GetGameSessionLogUrl responses.
 *
 * @see    GameLiftClient::getGameSessionLogUrl
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGameSessionLogUrlResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new GetGameSessionLogUrlResponsePrivate(this), parent)
{
    setRequest(new GetGameSessionLogUrlRequest(request));
    setReply(reply);
}

const GetGameSessionLogUrlRequest * GetGameSessionLogUrlResponse::request() const
{
    Q_D(const GetGameSessionLogUrlResponse);
    return static_cast<const GetGameSessionLogUrlRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift GetGameSessionLogUrl response.
 *
 * @param  response  Response to parse.
 */
void GetGameSessionLogUrlResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGameSessionLogUrlResponsePrivate
 *
 * @brief  Private implementation for GetGameSessionLogUrlResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGameSessionLogUrlResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGameSessionLogUrlResponse instance.
 */
GetGameSessionLogUrlResponsePrivate::GetGameSessionLogUrlResponsePrivate(
    GetGameSessionLogUrlQueueResponse * const q) : GetGameSessionLogUrlPrivate(q)
{

}

/**
 * @brief  Parse an GameLift GetGameSessionLogUrlResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGameSessionLogUrlResponsePrivate::GetGameSessionLogUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGameSessionLogUrlResponse"));
    /// @todo
}
