// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const BackTestAnomalyDetectorResponse);
    return static_cast<const BackTestAnomalyDetectorRequest *>(d->request);
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
