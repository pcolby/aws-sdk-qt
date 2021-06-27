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

#include "getaccuracymetricsresponse.h"
#include "getaccuracymetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::GetAccuracyMetricsResponse
 * \brief The GetAccuracyMetricsResponse class provides an interace for ForecastService GetAccuracyMetrics responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::getAccuracyMetrics
 */

/*!
 * Constructs a GetAccuracyMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccuracyMetricsResponse::GetAccuracyMetricsResponse(
        const GetAccuracyMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new GetAccuracyMetricsResponsePrivate(this), parent)
{
    setRequest(new GetAccuracyMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccuracyMetricsRequest * GetAccuracyMetricsResponse::request() const
{
    return static_cast<const GetAccuracyMetricsRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService GetAccuracyMetrics \a response.
 */
void GetAccuracyMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccuracyMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::GetAccuracyMetricsResponsePrivate
 * \brief The GetAccuracyMetricsResponsePrivate class provides private implementation for GetAccuracyMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a GetAccuracyMetricsResponsePrivate object with public implementation \a q.
 */
GetAccuracyMetricsResponsePrivate::GetAccuracyMetricsResponsePrivate(
    GetAccuracyMetricsResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService GetAccuracyMetrics response element from \a xml.
 */
void GetAccuracyMetricsResponsePrivate::parseGetAccuracyMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccuracyMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
