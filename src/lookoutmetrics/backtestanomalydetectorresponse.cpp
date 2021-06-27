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

#include "backtestanomalydetectorresponse.h"
#include "backtestanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorResponse
 * \brief The BackTestAnomalyDetectorResponse class provides an interace for LookoutMetrics BackTestAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::backTestAnomalyDetector
 */

/*!
 * Constructs a BackTestAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
BackTestAnomalyDetectorResponse::BackTestAnomalyDetectorResponse(
        const BackTestAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new BackTestAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new BackTestAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BackTestAnomalyDetectorRequest * BackTestAnomalyDetectorResponse::request() const
{
    return static_cast<const BackTestAnomalyDetectorRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics BackTestAnomalyDetector \a response.
 */
void BackTestAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BackTestAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorResponsePrivate
 * \brief The BackTestAnomalyDetectorResponsePrivate class provides private implementation for BackTestAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a BackTestAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
BackTestAnomalyDetectorResponsePrivate::BackTestAnomalyDetectorResponsePrivate(
    BackTestAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics BackTestAnomalyDetector response element from \a xml.
 */
void BackTestAnomalyDetectorResponsePrivate::parseBackTestAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BackTestAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
