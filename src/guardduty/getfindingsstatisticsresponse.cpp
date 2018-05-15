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

#include "getfindingsstatisticsresponse.h"
#include "getfindingsstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFindingsStatisticsResponse
 * \brief The GetFindingsStatisticsResponse class provides an interace for GuardDuty GetFindingsStatistics responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getFindingsStatistics
 */

/*!
 * Constructs a GetFindingsStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetFindingsStatisticsResponse::GetFindingsStatisticsResponse(
        const GetFindingsStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetFindingsStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetFindingsStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFindingsStatisticsRequest * GetFindingsStatisticsResponse::request() const
{
    Q_D(const GetFindingsStatisticsResponse);
    return static_cast<const GetFindingsStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetFindingsStatistics \a response.
 */
void GetFindingsStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFindingsStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetFindingsStatisticsResponsePrivate
 * \brief The GetFindingsStatisticsResponsePrivate class provides private implementation for GetFindingsStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetFindingsStatisticsResponsePrivate object with public implementation \a q.
 */
GetFindingsStatisticsResponsePrivate::GetFindingsStatisticsResponsePrivate(
    GetFindingsStatisticsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetFindingsStatistics response element from \a xml.
 */
void GetFindingsStatisticsResponsePrivate::parseGetFindingsStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsStatisticsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
