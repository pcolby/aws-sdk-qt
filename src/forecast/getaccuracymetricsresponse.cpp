// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccuracymetricsresponse.h"
#include "getaccuracymetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::GetAccuracyMetricsResponse
 * \brief The GetAccuracyMetricsResponse class provides an interace for Forecast GetAccuracyMetrics responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::getAccuracyMetrics
 */

/*!
 * Constructs a GetAccuracyMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccuracyMetricsResponse::GetAccuracyMetricsResponse(
        const GetAccuracyMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new GetAccuracyMetricsResponsePrivate(this), parent)
{
    setRequest(new GetAccuracyMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccuracyMetricsRequest * GetAccuracyMetricsResponse::request() const
{
    Q_D(const GetAccuracyMetricsResponse);
    return static_cast<const GetAccuracyMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast GetAccuracyMetrics \a response.
 */
void GetAccuracyMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccuracyMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::GetAccuracyMetricsResponsePrivate
 * \brief The GetAccuracyMetricsResponsePrivate class provides private implementation for GetAccuracyMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a GetAccuracyMetricsResponsePrivate object with public implementation \a q.
 */
GetAccuracyMetricsResponsePrivate::GetAccuracyMetricsResponsePrivate(
    GetAccuracyMetricsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast GetAccuracyMetrics response element from \a xml.
 */
void GetAccuracyMetricsResponsePrivate::parseGetAccuracyMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccuracyMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
