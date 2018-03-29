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

#include "listtagsforstreamresponse.h"
#include "listtagsforstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  ListTagsForStreamResponse
 *
 * @brief  Handles Kinesis ListTagsForStream responses.
 *
 * @see    KinesisClient::listTagsForStream
 */

/**
 * @brief  Constructs a new ListTagsForStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForStreamResponse::ListTagsForStreamResponse(
        const ListTagsForStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new ListTagsForStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForStreamRequest(request));
    setReply(reply);
}

const ListTagsForStreamRequest * ListTagsForStreamResponse::request() const
{
    Q_D(const ListTagsForStreamResponse);
    return static_cast<const ListTagsForStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis ListTagsForStream response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTagsForStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForStreamResponsePrivate
 *
 * @brief  Private implementation for ListTagsForStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForStreamResponse instance.
 */
ListTagsForStreamResponsePrivate::ListTagsForStreamResponsePrivate(
    ListTagsForStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis ListTagsForStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForStreamResponsePrivate::parseListTagsForStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
