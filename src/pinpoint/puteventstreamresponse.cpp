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

#include "puteventstreamresponse.h"
#include "puteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  PutEventStreamResponse
 *
 * @brief  Handles Pinpoint PutEventStream responses.
 *
 * @see    PinpointClient::putEventStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new PutEventStreamResponsePrivate(this), parent)
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
    Q_D(Response);
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
    PutEventStreamQueueResponse * const q) : PutEventStreamPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint PutEventStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEventStreamResponsePrivate::PutEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventStreamResponse"));
    /// @todo
}
