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

#include "tagstreamresponse.h"
#include "tagstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::TagStreamResponse
 *
 * \brief The TagStreamResponse class provides an interace for KinesisVideo TagStream responses.
 *
 * \ingroup KinesisVideo
 *
 *
 * \sa KinesisVideoClient::tagStream
 */

/*!
 * @brief  Constructs a new TagStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagStreamResponse::TagStreamResponse(
        const TagStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new TagStreamResponsePrivate(this), parent)
{
    setRequest(new TagStreamRequest(request));
    setReply(reply);
}

const TagStreamRequest * TagStreamResponse::request() const
{
    Q_D(const TagStreamResponse);
    return static_cast<const TagStreamRequest *>(d->request);
}

/*!
 * @brief  Parse a KinesisVideo TagStream response.
 *
 * @param  response  Response to parse.
 */
void TagStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(TagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TagStreamResponsePrivate
 *
 * \brief Private implementation for TagStreamResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TagStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagStreamResponse instance.
 */
TagStreamResponsePrivate::TagStreamResponsePrivate(
    TagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * @brief  Parse an KinesisVideo TagStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagStreamResponsePrivate::parseTagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagStreamResponse"));
    /// @todo
}

} // namespace KinesisVideo
} // namespace QtAws
