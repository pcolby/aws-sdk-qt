// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivateanomalydetectorresponse.h"
#include "deactivateanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorResponse
 * \brief The DeactivateAnomalyDetectorResponse class provides an interace for LookoutMetrics DeactivateAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deactivateAnomalyDetector
 */

/*!
 * Constructs a DeactivateAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivateAnomalyDetectorResponse::DeactivateAnomalyDetectorResponse(
        const DeactivateAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DeactivateAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new DeactivateAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivateAnomalyDetectorRequest * DeactivateAnomalyDetectorResponse::request() const
{
    Q_D(const DeactivateAnomalyDetectorResponse);
    return static_cast<const DeactivateAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DeactivateAnomalyDetector \a response.
 */
void DeactivateAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivateAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorResponsePrivate
 * \brief The DeactivateAnomalyDetectorResponsePrivate class provides private implementation for DeactivateAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeactivateAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
DeactivateAnomalyDetectorResponsePrivate::DeactivateAnomalyDetectorResponsePrivate(
    DeactivateAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DeactivateAnomalyDetector response element from \a xml.
 */
void DeactivateAnomalyDetectorResponsePrivate::parseDeactivateAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
