// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanomalydetectorsresponse.h"
#include "describeanomalydetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAnomalyDetectorsResponse
 * \brief The DescribeAnomalyDetectorsResponse class provides an interace for CloudWatch DescribeAnomalyDetectors responses.
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
 * \sa CloudWatchClient::describeAnomalyDetectors
 */

/*!
 * Constructs a DescribeAnomalyDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnomalyDetectorsResponse::DescribeAnomalyDetectorsResponse(
        const DescribeAnomalyDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAnomalyDetectorsResponsePrivate(this), parent)
{
    setRequest(new DescribeAnomalyDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnomalyDetectorsRequest * DescribeAnomalyDetectorsResponse::request() const
{
    Q_D(const DescribeAnomalyDetectorsResponse);
    return static_cast<const DescribeAnomalyDetectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DescribeAnomalyDetectors \a response.
 */
void DescribeAnomalyDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnomalyDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DescribeAnomalyDetectorsResponsePrivate
 * \brief The DescribeAnomalyDetectorsResponsePrivate class provides private implementation for DescribeAnomalyDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAnomalyDetectorsResponsePrivate object with public implementation \a q.
 */
DescribeAnomalyDetectorsResponsePrivate::DescribeAnomalyDetectorsResponsePrivate(
    DescribeAnomalyDetectorsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DescribeAnomalyDetectors response element from \a xml.
 */
void DescribeAnomalyDetectorsResponsePrivate::parseDescribeAnomalyDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnomalyDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
