// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const UpdateAnomalyDetectorResponse);
    return static_cast<const UpdateAnomalyDetectorRequest *>(d->request);
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
