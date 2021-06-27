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

#include "updateanomalydetectorresponse.h"
#include "updateanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateAnomalyDetectorResponse
 * \brief The UpdateAnomalyDetectorResponse class provides an interace for LookoutMetrics UpdateAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateAnomalyDetector
 */

/*!
 * Constructs a UpdateAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAnomalyDetectorResponse::UpdateAnomalyDetectorResponse(
        const UpdateAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new UpdateAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new UpdateAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAnomalyDetectorRequest * UpdateAnomalyDetectorResponse::request() const
{
    return static_cast<const UpdateAnomalyDetectorRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics UpdateAnomalyDetector \a response.
 */
void UpdateAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::UpdateAnomalyDetectorResponsePrivate
 * \brief The UpdateAnomalyDetectorResponsePrivate class provides private implementation for UpdateAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
UpdateAnomalyDetectorResponsePrivate::UpdateAnomalyDetectorResponsePrivate(
    UpdateAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics UpdateAnomalyDetector response element from \a xml.
 */
void UpdateAnomalyDetectorResponsePrivate::parseUpdateAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
