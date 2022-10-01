// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
