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

#include "getsegmentimportjobsresponse.h"
#include "getsegmentimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsResponse
 * \brief The GetSegmentImportJobsResponse class provides an interace for Pinpoint GetSegmentImportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentImportJobs
 */

/*!
 * Constructs a GetSegmentImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentImportJobsResponse::GetSegmentImportJobsResponse(
        const GetSegmentImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentImportJobsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentImportJobsRequest * GetSegmentImportJobsResponse::request() const
{
    return static_cast<const GetSegmentImportJobsRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentImportJobs \a response.
 */
void GetSegmentImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsResponsePrivate
 * \brief The GetSegmentImportJobsResponsePrivate class provides private implementation for GetSegmentImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentImportJobsResponsePrivate object with public implementation \a q.
 */
GetSegmentImportJobsResponsePrivate::GetSegmentImportJobsResponsePrivate(
    GetSegmentImportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentImportJobs response element from \a xml.
 */
void GetSegmentImportJobsResponsePrivate::parseGetSegmentImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
