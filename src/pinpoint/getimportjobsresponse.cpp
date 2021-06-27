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

#include "getimportjobsresponse.h"
#include "getimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobsResponse
 * \brief The GetImportJobsResponse class provides an interace for Pinpoint GetImportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getImportJobs
 */

/*!
 * Constructs a GetImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportJobsResponse::GetImportJobsResponse(
        const GetImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobsResponsePrivate(this), parent)
{
    setRequest(new GetImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportJobsRequest * GetImportJobsResponse::request() const
{
    return static_cast<const GetImportJobsRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetImportJobs \a response.
 */
void GetImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetImportJobsResponsePrivate
 * \brief The GetImportJobsResponsePrivate class provides private implementation for GetImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobsResponsePrivate object with public implementation \a q.
 */
GetImportJobsResponsePrivate::GetImportJobsResponsePrivate(
    GetImportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetImportJobs response element from \a xml.
 */
void GetImportJobsResponsePrivate::parseGetImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
