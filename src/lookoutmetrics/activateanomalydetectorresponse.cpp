// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activateanomalydetectorresponse.h"
#include "activateanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorResponse
 * \brief The ActivateAnomalyDetectorResponse class provides an interace for LookoutMetrics ActivateAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::activateAnomalyDetector
 */

/*!
 * Constructs a ActivateAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateAnomalyDetectorResponse::ActivateAnomalyDetectorResponse(
        const ActivateAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ActivateAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new ActivateAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateAnomalyDetectorRequest * ActivateAnomalyDetectorResponse::request() const
{
    Q_D(const ActivateAnomalyDetectorResponse);
    return static_cast<const ActivateAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ActivateAnomalyDetector \a response.
 */
void ActivateAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorResponsePrivate
 * \brief The ActivateAnomalyDetectorResponsePrivate class provides private implementation for ActivateAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ActivateAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
ActivateAnomalyDetectorResponsePrivate::ActivateAnomalyDetectorResponsePrivate(
    ActivateAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ActivateAnomalyDetector response element from \a xml.
 */
void ActivateAnomalyDetectorResponsePrivate::parseActivateAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
