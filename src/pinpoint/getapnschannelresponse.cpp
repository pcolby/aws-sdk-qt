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

#include "getapnschannelresponse.h"
#include "getapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsChannelResponse
 *
 * @brief  Handles Pinpoint GetApnsChannel responses.
 *
 * @see    PinpointClient::getApnsChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsChannelRequest(request));
    setReply(reply);
}

const GetApnsChannelRequest * GetApnsChannelResponse::request() const
{
    Q_D(const GetApnsChannelResponse);
    return static_cast<const GetApnsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApnsChannel response.
 *
 * @param  response  Response to parse.
 */
void GetApnsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApnsChannelResponsePrivate
 *
 * @brief  Private implementation for GetApnsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApnsChannelResponse instance.
 */
GetApnsChannelResponsePrivate::GetApnsChannelResponsePrivate(
    GetApnsChannelQueueResponse * const q) : GetApnsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetApnsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApnsChannelResponsePrivate::GetApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
