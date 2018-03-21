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

#include "removetagsfromstreamresponse.h"
#include "removetagsfromstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  RemoveTagsFromStreamResponse
 *
 * @brief  Handles Kinesis RemoveTagsFromStream responses.
 *
 * @see    KinesisClient::removeTagsFromStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new RemoveTagsFromStreamResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromStreamRequest(request));
    setReply(reply);
}

const RemoveTagsFromStreamRequest * RemoveTagsFromStreamResponse::request() const
{
    Q_D(const RemoveTagsFromStreamResponse);
    return static_cast<const RemoveTagsFromStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis RemoveTagsFromStream response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsFromStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsFromStreamResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsFromStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsFromStreamResponse instance.
 */
RemoveTagsFromStreamResponsePrivate::RemoveTagsFromStreamResponsePrivate(
    RemoveTagsFromStreamQueueResponse * const q) : RemoveTagsFromStreamPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis RemoveTagsFromStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsFromStreamResponsePrivate::RemoveTagsFromStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromStreamResponse"));
    /// @todo
}
