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

#include "getsegmentsresponse.h"
#include "getsegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentsResponse
 * \brief The GetSegmentsResponse class provides an interace for Pinpoint GetSegments responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegments
 */

/*!
 * Constructs a GetSegmentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentsResponse::GetSegmentsResponse(
        const GetSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentsRequest * GetSegmentsResponse::request() const
{
    Q_D(const GetSegmentsResponse);
    return static_cast<const GetSegmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegments \a response.
 */
void GetSegmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSegmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentsResponsePrivate
 * \brief The GetSegmentsResponsePrivate class provides private implementation for GetSegmentsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentsResponsePrivate object with public implementation \a q.
 */
GetSegmentsResponsePrivate::GetSegmentsResponsePrivate(
    GetSegmentsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegments response element from \a xml.
 */
void GetSegmentsResponsePrivate::parseGetSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
