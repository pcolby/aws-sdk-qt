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

#include "untagstreamresponse.h"
#include "untagstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/**
 * @class  UntagStreamResponse
 *
 * @brief  Handles KinesisVideo UntagStream responses.
 *
 * @see    KinesisVideoClient::untagStream
 */

/**
 * @brief  Constructs a new UntagStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagStreamResponse::UntagStreamResponse(
        const UntagStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UntagStreamResponsePrivate(this), parent)
{
    setRequest(new UntagStreamRequest(request));
    setReply(reply);
}

const UntagStreamRequest * UntagStreamResponse::request() const
{
    Q_D(const UntagStreamResponse);
    return static_cast<const UntagStreamRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideo UntagStream response.
 *
 * @param  response  Response to parse.
 */
void UntagStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(UntagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagStreamResponsePrivate
 *
 * @brief  Private implementation for UntagStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagStreamResponse instance.
 */
UntagStreamResponsePrivate::UntagStreamResponsePrivate(
    UntagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideo UntagStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagStreamResponsePrivate::parseUntagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagStreamResponse"));
    /// @todo
}

} // namespace KinesisVideo
} // namespace QtAws
