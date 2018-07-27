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

#include "deletestreamresponse.h"
#include "deletestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DeleteStreamResponse
 * \brief The DeleteStreamResponse class provides an interace for KinesisVideo DeleteStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::deleteStream
 */

/*!
 * Constructs a DeleteStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamResponse::DeleteStreamResponse(
        const DeleteStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DeleteStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamRequest * DeleteStreamResponse::request() const
{
    Q_D(const DeleteStreamResponse);
    return static_cast<const DeleteStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DeleteStream \a response.
 */
void DeleteStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DeleteStreamResponsePrivate
 * \brief The DeleteStreamResponsePrivate class provides private implementation for DeleteStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DeleteStreamResponsePrivate object with public implementation \a q.
 */
DeleteStreamResponsePrivate::DeleteStreamResponsePrivate(
    DeleteStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DeleteStream response element from \a xml.
 */
void DeleteStreamResponsePrivate::parseDeleteStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
