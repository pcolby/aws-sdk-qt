// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmsformetricresponse.h"
#include "describealarmsformetricresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsForMetricResponse
 * \brief The DescribeAlarmsForMetricResponse class provides an interace for CloudWatch DescribeAlarmsForMetric responses.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
 *
 * \sa CloudWatchClient::describeAlarmsForMetric
 */

/*!
 * Constructs a DescribeAlarmsForMetricResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlarmsForMetricResponse::DescribeAlarmsForMetricResponse(
        const DescribeAlarmsForMetricRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmsForMetricResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmsForMetricRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlarmsForMetricRequest * DescribeAlarmsForMetricResponse::request() const
{
    Q_D(const DescribeAlarmsForMetricResponse);
    return static_cast<const DescribeAlarmsForMetricRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DescribeAlarmsForMetric \a response.
 */
void DescribeAlarmsForMetricResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlarmsForMetricResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsForMetricResponsePrivate
 * \brief The DescribeAlarmsForMetricResponsePrivate class provides private implementation for DescribeAlarmsForMetricResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAlarmsForMetricResponsePrivate object with public implementation \a q.
 */
DescribeAlarmsForMetricResponsePrivate::DescribeAlarmsForMetricResponsePrivate(
    DescribeAlarmsForMetricResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DescribeAlarmsForMetric response element from \a xml.
 */
void DescribeAlarmsForMetricResponsePrivate::parseDescribeAlarmsForMetricResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmsForMetricResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
