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

#include "resolveroomresponse.h"
#include "resolveroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  ResolveRoomResponse
 *
 * @brief  Handles AlexaForBusiness ResolveRoom responses.
 *
 * @see    AlexaForBusinessClient::resolveRoom
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveRoomResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ResolveRoomResponsePrivate(this), parent)
{
    setRequest(new ResolveRoomRequest(request));
    setReply(reply);
}

const ResolveRoomRequest * ResolveRoomResponse::request() const
{
    Q_D(const ResolveRoomResponse);
    return static_cast<const ResolveRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness ResolveRoom response.
 *
 * @param  response  Response to parse.
 */
void ResolveRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResolveRoomResponsePrivate
 *
 * @brief  Private implementation for ResolveRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResolveRoomResponse instance.
 */
ResolveRoomResponsePrivate::ResolveRoomResponsePrivate(
    ResolveRoomQueueResponse * const q) : ResolveRoomPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness ResolveRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResolveRoomResponsePrivate::ResolveRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
