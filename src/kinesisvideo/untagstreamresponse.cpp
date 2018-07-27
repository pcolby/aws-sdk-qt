/*
    Copyright 2013-2018 Paul Colby

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

#include "untagstreamresponse.h"
#include "untagstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UntagStreamResponse
 * \brief The UntagStreamResponse class provides an interace for KinesisVideo UntagStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::untagStream
 */

/*!
 * Constructs a UntagStreamResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const UntagStreamRequest * UntagStreamResponse::request() const
{
    Q_D(const UntagStreamResponse);
    return static_cast<const UntagStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UntagStream \a response.
 */
void UntagStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UntagStreamResponsePrivate
 * \brief The UntagStreamResponsePrivate class provides private implementation for UntagStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UntagStreamResponsePrivate object with public implementation \a q.
 */
UntagStreamResponsePrivate::UntagStreamResponsePrivate(
    UntagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UntagStream response element from \a xml.
 */
void UntagStreamResponsePrivate::parseUntagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
