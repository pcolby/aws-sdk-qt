/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The TagStreamResponse class provides an interace for KinesisVideo TagStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::tagStream
 */

/*!
 * Constructs a TagStreamResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const TagStreamRequest * TagStreamResponse::request() const
{
    return static_cast<const TagStreamRequest *>(KinesisVideoResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisVideo TagStream \a response.
 */
void TagStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::TagStreamResponsePrivate
 * \brief The TagStreamResponsePrivate class provides private implementation for TagStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a TagStreamResponsePrivate object with public implementation \a q.
 */
TagStreamResponsePrivate::TagStreamResponsePrivate(
    TagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo TagStream response element from \a xml.
 */
void TagStreamResponsePrivate::parseTagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
