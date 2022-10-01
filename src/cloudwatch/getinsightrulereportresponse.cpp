// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsightrulereportresponse.h"
#include "getinsightrulereportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetInsightRuleReportResponse
 * \brief The GetInsightRuleReportResponse class provides an interace for CloudWatch GetInsightRuleReport responses.
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
 * \sa CloudWatchClient::getInsightRuleReport
 */

/*!
 * Constructs a GetInsightRuleReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightRuleReportResponse::GetInsightRuleReportResponse(
        const GetInsightRuleReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetInsightRuleReportResponsePrivate(this), parent)
{
    setRequest(new GetInsightRuleReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightRuleReportRequest * GetInsightRuleReportResponse::request() const
{
    Q_D(const GetInsightRuleReportResponse);
    return static_cast<const GetInsightRuleReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch GetInsightRuleReport \a response.
 */
void GetInsightRuleReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightRuleReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::GetInsightRuleReportResponsePrivate
 * \brief The GetInsightRuleReportResponsePrivate class provides private implementation for GetInsightRuleReportResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetInsightRuleReportResponsePrivate object with public implementation \a q.
 */
GetInsightRuleReportResponsePrivate::GetInsightRuleReportResponsePrivate(
    GetInsightRuleReportResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch GetInsightRuleReport response element from \a xml.
 */
void GetInsightRuleReportResponsePrivate::parseGetInsightRuleReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightRuleReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
