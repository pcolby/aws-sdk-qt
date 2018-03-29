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

#include "geteventstreamresponse.h"
#include "geteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetEventStreamResponse
 *
 * @brief  Handles Pinpoint GetEventStream responses.
 *
 * @see    PinpointClient::getEventStream
 */

/**
 * @brief  Constructs a new GetEventStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEventStreamResponse::GetEventStreamResponse(
        const GetEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetEventStreamResponse(new GetEventStreamResponsePrivate(this), parent)
{
    setRequest(new GetEventStreamRequest(request));
    setReply(reply);
}

const GetEventStreamRequest * GetEventStreamResponse::request() const
{
    Q_D(const GetEventStreamResponse);
    return static_cast<const GetEventStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetEventStream response.
 *
 * @param  response  Response to parse.
 */
void GetEventStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEventStreamResponsePrivate
 *
 * @brief  Private implementation for GetEventStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEventStreamResponse instance.
 */
GetEventStreamResponsePrivate::GetEventStreamResponsePrivate(
    GetEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetEventStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEventStreamResponsePrivate::parseGetEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventStreamResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
