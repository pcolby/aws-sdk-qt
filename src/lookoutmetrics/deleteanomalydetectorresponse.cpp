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

#include "deleteanomalydetectorresponse.h"
#include "deleteanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorResponse
 * \brief The DeleteAnomalyDetectorResponse class provides an interace for LookoutMetrics DeleteAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAnomalyDetector
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnomalyDetectorResponse::DeleteAnomalyDetectorResponse(
        const DeleteAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DeleteAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new DeleteAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnomalyDetectorRequest * DeleteAnomalyDetectorResponse::request() const
{
    Q_D(const DeleteAnomalyDetectorResponse);
    return static_cast<const DeleteAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DeleteAnomalyDetector \a response.
 */
void DeleteAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorResponsePrivate
 * \brief The DeleteAnomalyDetectorResponsePrivate class provides private implementation for DeleteAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
DeleteAnomalyDetectorResponsePrivate::DeleteAnomalyDetectorResponsePrivate(
    DeleteAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DeleteAnomalyDetector response element from \a xml.
 */
void DeleteAnomalyDetectorResponsePrivate::parseDeleteAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
