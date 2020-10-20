/*
    Copyright 2013-2020 Paul Colby

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

#include "gettimeseriesservicestatisticsresponse.h"
#include "gettimeseriesservicestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTimeSeriesServiceStatisticsResponse
 * \brief The GetTimeSeriesServiceStatisticsResponse class provides an interace for XRay GetTimeSeriesServiceStatistics responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getTimeSeriesServiceStatistics
 */

/*!
 * Constructs a GetTimeSeriesServiceStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTimeSeriesServiceStatisticsResponse::GetTimeSeriesServiceStatisticsResponse(
        const GetTimeSeriesServiceStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTimeSeriesServiceStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetTimeSeriesServiceStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTimeSeriesServiceStatisticsRequest * GetTimeSeriesServiceStatisticsResponse::request() const
{
    Q_D(const GetTimeSeriesServiceStatisticsResponse);
    return static_cast<const GetTimeSeriesServiceStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetTimeSeriesServiceStatistics \a response.
 */
void GetTimeSeriesServiceStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTimeSeriesServiceStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetTimeSeriesServiceStatisticsResponsePrivate
 * \brief The GetTimeSeriesServiceStatisticsResponsePrivate class provides private implementation for GetTimeSeriesServiceStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTimeSeriesServiceStatisticsResponsePrivate object with public implementation \a q.
 */
GetTimeSeriesServiceStatisticsResponsePrivate::GetTimeSeriesServiceStatisticsResponsePrivate(
    GetTimeSeriesServiceStatisticsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetTimeSeriesServiceStatistics response element from \a xml.
 */
void GetTimeSeriesServiceStatisticsResponsePrivate::parseGetTimeSeriesServiceStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTimeSeriesServiceStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
