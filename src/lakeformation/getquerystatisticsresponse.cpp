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

#include "getquerystatisticsresponse.h"
#include "getquerystatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsResponse
 * \brief The GetQueryStatisticsResponse class provides an interace for LakeFormation GetQueryStatistics responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryStatistics
 */

/*!
 * Constructs a GetQueryStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryStatisticsResponse::GetQueryStatisticsResponse(
        const GetQueryStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetQueryStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetQueryStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryStatisticsRequest * GetQueryStatisticsResponse::request() const
{
    Q_D(const GetQueryStatisticsResponse);
    return static_cast<const GetQueryStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetQueryStatistics \a response.
 */
void GetQueryStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsResponsePrivate
 * \brief The GetQueryStatisticsResponsePrivate class provides private implementation for GetQueryStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStatisticsResponsePrivate object with public implementation \a q.
 */
GetQueryStatisticsResponsePrivate::GetQueryStatisticsResponsePrivate(
    GetQueryStatisticsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetQueryStatistics response element from \a xml.
 */
void GetQueryStatisticsResponsePrivate::parseGetQueryStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
