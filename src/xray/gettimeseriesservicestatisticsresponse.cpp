// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
