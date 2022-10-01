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

#include "detectmetricsetconfigresponse.h"
#include "detectmetricsetconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DetectMetricSetConfigResponse
 * \brief The DetectMetricSetConfigResponse class provides an interace for LookoutMetrics DetectMetricSetConfig responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::detectMetricSetConfig
 */

/*!
 * Constructs a DetectMetricSetConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DetectMetricSetConfigResponse::DetectMetricSetConfigResponse(
        const DetectMetricSetConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DetectMetricSetConfigResponsePrivate(this), parent)
{
    setRequest(new DetectMetricSetConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectMetricSetConfigRequest * DetectMetricSetConfigResponse::request() const
{
    Q_D(const DetectMetricSetConfigResponse);
    return static_cast<const DetectMetricSetConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DetectMetricSetConfig \a response.
 */
void DetectMetricSetConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectMetricSetConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DetectMetricSetConfigResponsePrivate
 * \brief The DetectMetricSetConfigResponsePrivate class provides private implementation for DetectMetricSetConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DetectMetricSetConfigResponsePrivate object with public implementation \a q.
 */
DetectMetricSetConfigResponsePrivate::DetectMetricSetConfigResponsePrivate(
    DetectMetricSetConfigResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DetectMetricSetConfig response element from \a xml.
 */
void DetectMetricSetConfigResponsePrivate::parseDetectMetricSetConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectMetricSetConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
