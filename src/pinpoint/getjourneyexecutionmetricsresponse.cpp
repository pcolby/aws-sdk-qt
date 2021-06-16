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

#include "getjourneyexecutionmetricsresponse.h"
#include "getjourneyexecutionmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionMetricsResponse
 * \brief The GetJourneyExecutionMetricsResponse class provides an interace for Pinpoint GetJourneyExecutionMetrics responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyExecutionMetrics
 */

/*!
 * Constructs a GetJourneyExecutionMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetJourneyExecutionMetricsResponse::GetJourneyExecutionMetricsResponse(
        const GetJourneyExecutionMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetJourneyExecutionMetricsResponsePrivate(this), parent)
{
    setRequest(new GetJourneyExecutionMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJourneyExecutionMetricsRequest * GetJourneyExecutionMetricsResponse::request() const
{
    Q_D(const GetJourneyExecutionMetricsResponse);
    return static_cast<const GetJourneyExecutionMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetJourneyExecutionMetrics \a response.
 */
void GetJourneyExecutionMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJourneyExecutionMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionMetricsResponsePrivate
 * \brief The GetJourneyExecutionMetricsResponsePrivate class provides private implementation for GetJourneyExecutionMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyExecutionMetricsResponsePrivate object with public implementation \a q.
 */
GetJourneyExecutionMetricsResponsePrivate::GetJourneyExecutionMetricsResponsePrivate(
    GetJourneyExecutionMetricsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetJourneyExecutionMetrics response element from \a xml.
 */
void GetJourneyExecutionMetricsResponsePrivate::parseGetJourneyExecutionMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJourneyExecutionMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
