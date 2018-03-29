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

#include "puteventstreamresponse.h"
#include "puteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  PutEventStreamResponse
 *
 * @brief  Handles Pinpoint PutEventStream responses.
 *
 * @see    PinpointClient::putEventStream
 */

/**
 * @brief  Constructs a new PutEventStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventStreamResponse::PutEventStreamResponse(
        const PutEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutEventStreamResponse(new PutEventStreamResponsePrivate(this), parent)
{
    setRequest(new PutEventStreamRequest(request));
    setReply(reply);
}

const PutEventStreamRequest * PutEventStreamResponse::request() const
{
    Q_D(const PutEventStreamResponse);
    return static_cast<const PutEventStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint PutEventStream response.
 *
 * @param  response  Response to parse.
 */
void PutEventStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutEventStreamResponsePrivate
 *
 * @brief  Private implementation for PutEventStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutEventStreamResponse instance.
 */
PutEventStreamResponsePrivate::PutEventStreamResponsePrivate(
    PutEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint PutEventStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEventStreamResponsePrivate::parsePutEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventStreamResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
