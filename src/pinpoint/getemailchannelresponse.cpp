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

#include "getemailchannelresponse.h"
#include "getemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetEmailChannelResponse
 *
 * @brief  Handles Pinpoint GetEmailChannel responses.
 *
 * @see    PinpointClient::getEmailChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEmailChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEmailChannelResponsePrivate(this), parent)
{
    setRequest(new GetEmailChannelRequest(request));
    setReply(reply);
}

const GetEmailChannelRequest * GetEmailChannelResponse::request() const
{
    Q_D(const GetEmailChannelResponse);
    return static_cast<const GetEmailChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetEmailChannel response.
 *
 * @param  response  Response to parse.
 */
void GetEmailChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEmailChannelResponsePrivate
 *
 * @brief  Private implementation for GetEmailChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEmailChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEmailChannelResponse instance.
 */
GetEmailChannelResponsePrivate::GetEmailChannelResponsePrivate(
    GetEmailChannelQueueResponse * const q) : GetEmailChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetEmailChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEmailChannelResponsePrivate::GetEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
