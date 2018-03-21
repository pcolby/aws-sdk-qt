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

#include "createroomresponse.h"
#include "createroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  CreateRoomResponse
 *
 * @brief  Handles AlexaForBusiness CreateRoom responses.
 *
 * @see    AlexaForBusinessClient::createRoom
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRoomResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateRoomResponsePrivate(this), parent)
{
    setRequest(new CreateRoomRequest(request));
    setReply(reply);
}

const CreateRoomRequest * CreateRoomResponse::request() const
{
    Q_D(const CreateRoomResponse);
    return static_cast<const CreateRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness CreateRoom response.
 *
 * @param  response  Response to parse.
 */
void CreateRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRoomResponsePrivate
 *
 * @brief  Private implementation for CreateRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRoomResponse instance.
 */
CreateRoomResponsePrivate::CreateRoomResponsePrivate(
    CreateRoomQueueResponse * const q) : CreateRoomPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness CreateRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRoomResponsePrivate::CreateRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRoomResponse"));
    /// @todo
}
