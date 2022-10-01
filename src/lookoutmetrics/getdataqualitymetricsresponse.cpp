// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataqualitymetricsresponse.h"
#include "getdataqualitymetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsResponse
 * \brief The GetDataQualityMetricsResponse class provides an interace for LookoutMetrics GetDataQualityMetrics responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getDataQualityMetrics
 */

/*!
 * Constructs a GetDataQualityMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataQualityMetricsResponse::GetDataQualityMetricsResponse(
        const GetDataQualityMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new GetDataQualityMetricsResponsePrivate(this), parent)
{
    setRequest(new GetDataQualityMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataQualityMetricsRequest * GetDataQualityMetricsResponse::request() const
{
    Q_D(const GetDataQualityMetricsResponse);
    return static_cast<const GetDataQualityMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics GetDataQualityMetrics \a response.
 */
void GetDataQualityMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataQualityMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsResponsePrivate
 * \brief The GetDataQualityMetricsResponsePrivate class provides private implementation for GetDataQualityMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetDataQualityMetricsResponsePrivate object with public implementation \a q.
 */
GetDataQualityMetricsResponsePrivate::GetDataQualityMetricsResponsePrivate(
    GetDataQualityMetricsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics GetDataQualityMetrics response element from \a xml.
 */
void GetDataQualityMetricsResponsePrivate::parseGetDataQualityMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataQualityMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
