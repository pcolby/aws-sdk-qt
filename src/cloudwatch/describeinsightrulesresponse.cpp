// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinsightrulesresponse.h"
#include "describeinsightrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeInsightRulesResponse
 * \brief The DescribeInsightRulesResponse class provides an interace for CloudWatch DescribeInsightRules responses.
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
 * \sa CloudWatchClient::describeInsightRules
 */

/*!
 * Constructs a DescribeInsightRulesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInsightRulesResponse::DescribeInsightRulesResponse(
        const DescribeInsightRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeInsightRulesResponsePrivate(this), parent)
{
    setRequest(new DescribeInsightRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInsightRulesRequest * DescribeInsightRulesResponse::request() const
{
    Q_D(const DescribeInsightRulesResponse);
    return static_cast<const DescribeInsightRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DescribeInsightRules \a response.
 */
void DescribeInsightRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInsightRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DescribeInsightRulesResponsePrivate
 * \brief The DescribeInsightRulesResponsePrivate class provides private implementation for DescribeInsightRulesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeInsightRulesResponsePrivate object with public implementation \a q.
 */
DescribeInsightRulesResponsePrivate::DescribeInsightRulesResponsePrivate(
    DescribeInsightRulesResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DescribeInsightRules response element from \a xml.
 */
void DescribeInsightRulesResponsePrivate::parseDescribeInsightRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInsightRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
