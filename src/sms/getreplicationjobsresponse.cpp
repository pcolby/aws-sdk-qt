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

#include "getreplicationjobsresponse.h"
#include "getreplicationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetReplicationJobsResponse
 * \brief The GetReplicationJobsResponse class provides an interace for SMS GetReplicationJobs responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::getReplicationJobs
 */

/*!
 * Constructs a GetReplicationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationJobsResponse::GetReplicationJobsResponse(
        const GetReplicationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetReplicationJobsResponsePrivate(this), parent)
{
    setRequest(new GetReplicationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationJobsRequest * GetReplicationJobsResponse::request() const
{
    Q_D(const GetReplicationJobsResponse);
    return static_cast<const GetReplicationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS GetReplicationJobs \a response.
 */
void GetReplicationJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetReplicationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::GetReplicationJobsResponsePrivate
 * \brief The GetReplicationJobsResponsePrivate class provides private implementation for GetReplicationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetReplicationJobsResponsePrivate object with public implementation \a q.
 */
GetReplicationJobsResponsePrivate::GetReplicationJobsResponsePrivate(
    GetReplicationJobsResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS GetReplicationJobs response element from \a xml.
 */
void GetReplicationJobsResponsePrivate::parseGetReplicationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationJobsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
