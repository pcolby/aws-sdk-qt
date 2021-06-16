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

#include "updatemetricsetresponse.h"
#include "updatemetricsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetResponse
 * \brief The UpdateMetricSetResponse class provides an interace for LookoutMetrics UpdateMetricSet responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateMetricSet
 */

/*!
 * Constructs a UpdateMetricSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMetricSetResponse::UpdateMetricSetResponse(
        const UpdateMetricSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new UpdateMetricSetResponsePrivate(this), parent)
{
    setRequest(new UpdateMetricSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMetricSetRequest * UpdateMetricSetResponse::request() const
{
    Q_D(const UpdateMetricSetResponse);
    return static_cast<const UpdateMetricSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics UpdateMetricSet \a response.
 */
void UpdateMetricSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMetricSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetResponsePrivate
 * \brief The UpdateMetricSetResponsePrivate class provides private implementation for UpdateMetricSetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateMetricSetResponsePrivate object with public implementation \a q.
 */
UpdateMetricSetResponsePrivate::UpdateMetricSetResponsePrivate(
    UpdateMetricSetResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics UpdateMetricSet response element from \a xml.
 */
void UpdateMetricSetResponsePrivate::parseUpdateMetricSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMetricSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
