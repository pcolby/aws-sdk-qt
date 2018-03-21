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

#include "createplayersessionresponse.h"
#include "createplayersessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreatePlayerSessionResponse
 *
 * @brief  Handles GameLift CreatePlayerSession responses.
 *
 * @see    GameLiftClient::createPlayerSession
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlayerSessionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreatePlayerSessionResponsePrivate(this), parent)
{
    setRequest(new CreatePlayerSessionRequest(request));
    setReply(reply);
}

const CreatePlayerSessionRequest * CreatePlayerSessionResponse::request() const
{
    Q_D(const CreatePlayerSessionResponse);
    return static_cast<const CreatePlayerSessionRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreatePlayerSession response.
 *
 * @param  response  Response to parse.
 */
void CreatePlayerSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlayerSessionResponsePrivate
 *
 * @brief  Private implementation for CreatePlayerSessionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlayerSessionResponse instance.
 */
CreatePlayerSessionResponsePrivate::CreatePlayerSessionResponsePrivate(
    CreatePlayerSessionQueueResponse * const q) : CreatePlayerSessionPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreatePlayerSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlayerSessionResponsePrivate::CreatePlayerSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlayerSessionResponse"));
    /// @todo
}
