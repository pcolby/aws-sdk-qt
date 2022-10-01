// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmsresponse.h"
#include "describealarmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsResponse
 * \brief The DescribeAlarmsResponse class provides an interace for CloudWatch DescribeAlarms responses.
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
 * \sa CloudWatchClient::describeAlarms
 */

/*!
 * Constructs a DescribeAlarmsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlarmsResponse::DescribeAlarmsResponse(
        const DescribeAlarmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmsResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlarmsRequest * DescribeAlarmsResponse::request() const
{
    Q_D(const DescribeAlarmsResponse);
    return static_cast<const DescribeAlarmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DescribeAlarms \a response.
 */
void DescribeAlarmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlarmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsResponsePrivate
 * \brief The DescribeAlarmsResponsePrivate class provides private implementation for DescribeAlarmsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAlarmsResponsePrivate object with public implementation \a q.
 */
DescribeAlarmsResponsePrivate::DescribeAlarmsResponsePrivate(
    DescribeAlarmsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DescribeAlarms response element from \a xml.
 */
void DescribeAlarmsResponsePrivate::parseDescribeAlarmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
