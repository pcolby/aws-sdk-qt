/*
    Copyright 2013-2019 Paul Colby

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

#include "getsegmentresponse.h"
#include "getsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentResponse
 * \brief The GetSegmentResponse class provides an interace for Pinpoint GetSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegment
 */

/*!
 * Constructs a GetSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentResponse::GetSegmentResponse(
        const GetSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentResponsePrivate(this), parent)
{
    setRequest(new GetSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentRequest * GetSegmentResponse::request() const
{
    Q_D(const GetSegmentResponse);
    return static_cast<const GetSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegment \a response.
 */
void GetSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentResponsePrivate
 * \brief The GetSegmentResponsePrivate class provides private implementation for GetSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentResponsePrivate object with public implementation \a q.
 */
GetSegmentResponsePrivate::GetSegmentResponsePrivate(
    GetSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegment response element from \a xml.
 */
void GetSegmentResponsePrivate::parseGetSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
