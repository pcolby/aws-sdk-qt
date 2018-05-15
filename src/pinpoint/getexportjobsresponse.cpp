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

#include "getexportjobsresponse.h"
#include "getexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobsResponse
 * \brief The GetExportJobsResponse class provides an interace for Pinpoint GetExportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getExportJobs
 */

/*!
 * Constructs a GetExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportJobsResponse::GetExportJobsResponse(
        const GetExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportJobsRequest * GetExportJobsResponse::request() const
{
    Q_D(const GetExportJobsResponse);
    return static_cast<const GetExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetExportJobs \a response.
 */
void GetExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetExportJobsResponsePrivate
 * \brief The GetExportJobsResponsePrivate class provides private implementation for GetExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobsResponsePrivate object with public implementation \a q.
 */
GetExportJobsResponsePrivate::GetExportJobsResponsePrivate(
    GetExportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetExportJobs response element from \a xml.
 */
void GetExportJobsResponsePrivate::parseGetExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportJobsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
