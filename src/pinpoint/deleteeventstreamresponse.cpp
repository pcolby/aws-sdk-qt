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

#include "deleteeventstreamresponse.h"
#include "deleteeventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamResponse
 * \brief The DeleteEventStreamResponse class provides an interace for Pinpoint DeleteEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEventStream
 */

/*!
 * Constructs a DeleteEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventStreamResponse::DeleteEventStreamResponse(
        const DeleteEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEventStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventStreamRequest * DeleteEventStreamResponse::request() const
{
    return static_cast<const DeleteEventStreamRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEventStream \a response.
 */
void DeleteEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamResponsePrivate
 * \brief The DeleteEventStreamResponsePrivate class provides private implementation for DeleteEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEventStreamResponsePrivate object with public implementation \a q.
 */
DeleteEventStreamResponsePrivate::DeleteEventStreamResponsePrivate(
    DeleteEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEventStream response element from \a xml.
 */
void DeleteEventStreamResponsePrivate::parseDeleteEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
