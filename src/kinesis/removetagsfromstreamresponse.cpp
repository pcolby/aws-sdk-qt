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

#include "removetagsfromstreamresponse.h"
#include "removetagsfromstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  RemoveTagsFromStreamResponse
 *
 * @brief  Handles Kinesis RemoveTagsFromStream responses.
 *
 * @see    KinesisClient::removeTagsFromStream
 */

/**
 * @brief  Constructs a new RemoveTagsFromStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromStreamResponse::RemoveTagsFromStreamResponse(
        const RemoveTagsFromStreamRequest &request,
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
    Q_D(RemoveTagsFromStreamResponse);
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
    RemoveTagsFromStreamResponse * const q) : KinesisResponsePrivate(q)
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

} // namespace Kinesis
} // namespace QtAws
