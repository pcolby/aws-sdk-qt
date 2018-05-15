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

#include "geteventstreamresponse.h"
#include "geteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEventStreamResponse
 * \brief The GetEventStreamResponse class provides an interace for Pinpoint GetEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getEventStream
 */

/*!
 * Constructs a GetEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventStreamResponse::GetEventStreamResponse(
        const GetEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEventStreamResponsePrivate(this), parent)
{
    setRequest(new GetEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEventStreamRequest * GetEventStreamResponse::request() const
{
    Q_D(const GetEventStreamResponse);
    return static_cast<const GetEventStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEventStream \a response.
 */
void GetEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEventStreamResponsePrivate
 * \brief The GetEventStreamResponsePrivate class provides private implementation for GetEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEventStreamResponsePrivate object with public implementation \a q.
 */
GetEventStreamResponsePrivate::GetEventStreamResponsePrivate(
    GetEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEventStream response element from \a xml.
 */
void GetEventStreamResponsePrivate::parseGetEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventStreamResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
