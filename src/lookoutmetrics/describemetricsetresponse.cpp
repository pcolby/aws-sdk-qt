// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemetricsetresponse.h"
#include "describemetricsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetResponse
 * \brief The DescribeMetricSetResponse class provides an interace for LookoutMetrics DescribeMetricSet responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeMetricSet
 */

/*!
 * Constructs a DescribeMetricSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMetricSetResponse::DescribeMetricSetResponse(
        const DescribeMetricSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeMetricSetResponsePrivate(this), parent)
{
    setRequest(new DescribeMetricSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMetricSetRequest * DescribeMetricSetResponse::request() const
{
    Q_D(const DescribeMetricSetResponse);
    return static_cast<const DescribeMetricSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeMetricSet \a response.
 */
void DescribeMetricSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMetricSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetResponsePrivate
 * \brief The DescribeMetricSetResponsePrivate class provides private implementation for DescribeMetricSetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeMetricSetResponsePrivate object with public implementation \a q.
 */
DescribeMetricSetResponsePrivate::DescribeMetricSetResponsePrivate(
    DescribeMetricSetResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeMetricSet response element from \a xml.
 */
void DescribeMetricSetResponsePrivate::parseDescribeMetricSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
