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

#include "getsmschannelresponse.h"
#include "getsmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetSmsChannelResponse
 *
 * @brief  Handles Pinpoint GetSmsChannel responses.
 *
 * @see    PinpointClient::getSmsChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSmsChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSmsChannelResponsePrivate(this), parent)
{
    setRequest(new GetSmsChannelRequest(request));
    setReply(reply);
}

const GetSmsChannelRequest * GetSmsChannelResponse::request() const
{
    Q_D(const GetSmsChannelResponse);
    return static_cast<const GetSmsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetSmsChannel response.
 *
 * @param  response  Response to parse.
 */
void GetSmsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSmsChannelResponsePrivate
 *
 * @brief  Private implementation for GetSmsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSmsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSmsChannelResponse instance.
 */
GetSmsChannelResponsePrivate::GetSmsChannelResponsePrivate(
    GetSmsChannelQueueResponse * const q) : GetSmsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetSmsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSmsChannelResponsePrivate::GetSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSmsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
