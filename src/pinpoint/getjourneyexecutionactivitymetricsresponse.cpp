// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjourneyexecutionactivitymetricsresponse.h"
#include "getjourneyexecutionactivitymetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionActivityMetricsResponse
 * \brief The GetJourneyExecutionActivityMetricsResponse class provides an interace for Pinpoint GetJourneyExecutionActivityMetrics responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyExecutionActivityMetrics
 */

/*!
 * Constructs a GetJourneyExecutionActivityMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetJourneyExecutionActivityMetricsResponse::GetJourneyExecutionActivityMetricsResponse(
        const GetJourneyExecutionActivityMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetJourneyExecutionActivityMetricsResponsePrivate(this), parent)
{
    setRequest(new GetJourneyExecutionActivityMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJourneyExecutionActivityMetricsRequest * GetJourneyExecutionActivityMetricsResponse::request() const
{
    Q_D(const GetJourneyExecutionActivityMetricsResponse);
    return static_cast<const GetJourneyExecutionActivityMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetJourneyExecutionActivityMetrics \a response.
 */
void GetJourneyExecutionActivityMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJourneyExecutionActivityMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionActivityMetricsResponsePrivate
 * \brief The GetJourneyExecutionActivityMetricsResponsePrivate class provides private implementation for GetJourneyExecutionActivityMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyExecutionActivityMetricsResponsePrivate object with public implementation \a q.
 */
GetJourneyExecutionActivityMetricsResponsePrivate::GetJourneyExecutionActivityMetricsResponsePrivate(
    GetJourneyExecutionActivityMetricsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetJourneyExecutionActivityMetrics response element from \a xml.
 */
void GetJourneyExecutionActivityMetricsResponsePrivate::parseGetJourneyExecutionActivityMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJourneyExecutionActivityMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
