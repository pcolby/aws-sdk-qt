// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanomalydetectionexecutionsresponse.h"
#include "describeanomalydetectionexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsResponse
 * \brief The DescribeAnomalyDetectionExecutionsResponse class provides an interace for LookoutMetrics DescribeAnomalyDetectionExecutions responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAnomalyDetectionExecutions
 */

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnomalyDetectionExecutionsResponse::DescribeAnomalyDetectionExecutionsResponse(
        const DescribeAnomalyDetectionExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeAnomalyDetectionExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAnomalyDetectionExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnomalyDetectionExecutionsRequest * DescribeAnomalyDetectionExecutionsResponse::request() const
{
    Q_D(const DescribeAnomalyDetectionExecutionsResponse);
    return static_cast<const DescribeAnomalyDetectionExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeAnomalyDetectionExecutions \a response.
 */
void DescribeAnomalyDetectionExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnomalyDetectionExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsResponsePrivate
 * \brief The DescribeAnomalyDetectionExecutionsResponsePrivate class provides private implementation for DescribeAnomalyDetectionExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsResponsePrivate object with public implementation \a q.
 */
DescribeAnomalyDetectionExecutionsResponsePrivate::DescribeAnomalyDetectionExecutionsResponsePrivate(
    DescribeAnomalyDetectionExecutionsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeAnomalyDetectionExecutions response element from \a xml.
 */
void DescribeAnomalyDetectionExecutionsResponsePrivate::parseDescribeAnomalyDetectionExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnomalyDetectionExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
