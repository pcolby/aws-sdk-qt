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

#include "puteventstreamresponse.h"
#include "puteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventStreamResponse
 * \brief The PutEventStreamResponse class provides an interace for Pinpoint PutEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::putEventStream
 */

/*!
 * Constructs a PutEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventStreamResponse::PutEventStreamResponse(
        const PutEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new PutEventStreamResponsePrivate(this), parent)
{
    setRequest(new PutEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventStreamRequest * PutEventStreamResponse::request() const
{
    Q_D(const PutEventStreamResponse);
    return static_cast<const PutEventStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint PutEventStream \a response.
 */
void PutEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::PutEventStreamResponsePrivate
 * \brief The PutEventStreamResponsePrivate class provides private implementation for PutEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventStreamResponsePrivate object with public implementation \a q.
 */
PutEventStreamResponsePrivate::PutEventStreamResponsePrivate(
    PutEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint PutEventStream response element from \a xml.
 */
void PutEventStreamResponsePrivate::parsePutEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventStreamResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
