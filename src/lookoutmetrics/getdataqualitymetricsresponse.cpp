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
