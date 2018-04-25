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

#include "getsegmentversionsresponse.h"
#include "getsegmentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsResponse
 * \brief The GetSegmentVersionsResponse class provides an interace for Pinpoint GetSegmentVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegmentVersions
 */

/*!
 * Constructs a GetSegmentVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentVersionsResponse::GetSegmentVersionsResponse(
        const GetSegmentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentVersionsRequest * GetSegmentVersionsResponse::request() const
{
    Q_D(const GetSegmentVersionsResponse);
    return static_cast<const GetSegmentVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentVersions \a response.
 */
void GetSegmentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSegmentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsResponsePrivate
 * \brief The GetSegmentVersionsResponsePrivate class provides private implementation for GetSegmentVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionsResponsePrivate object with public implementation \a q.
 */
GetSegmentVersionsResponsePrivate::GetSegmentVersionsResponsePrivate(
    GetSegmentVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentVersions response element from \a xml.
 */
void GetSegmentVersionsResponsePrivate::parseGetSegmentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
