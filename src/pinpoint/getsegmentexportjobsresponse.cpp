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

#include "getsegmentexportjobsresponse.h"
#include "getsegmentexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsResponse
 * \brief The GetSegmentExportJobsResponse class provides an interace for Pinpoint GetSegmentExportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegmentExportJobs
 */

/*!
 * Constructs a GetSegmentExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentExportJobsResponse::GetSegmentExportJobsResponse(
        const GetSegmentExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentExportJobsRequest * GetSegmentExportJobsResponse::request() const
{
    Q_D(const GetSegmentExportJobsResponse);
    return static_cast<const GetSegmentExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentExportJobs \a response.
 */
void GetSegmentExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsResponsePrivate
 * \brief The GetSegmentExportJobsResponsePrivate class provides private implementation for GetSegmentExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentExportJobsResponsePrivate object with public implementation \a q.
 */
GetSegmentExportJobsResponsePrivate::GetSegmentExportJobsResponsePrivate(
    GetSegmentExportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentExportJobs response element from \a xml.
 */
void GetSegmentExportJobsResponsePrivate::parseGetSegmentExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentExportJobsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
