// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
