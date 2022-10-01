// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinsightrulesresponse.h"
#include "deleteinsightrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteInsightRulesResponse
 * \brief The DeleteInsightRulesResponse class provides an interace for CloudWatch DeleteInsightRules responses.
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
 * \sa CloudWatchClient::deleteInsightRules
 */

/*!
 * Constructs a DeleteInsightRulesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInsightRulesResponse::DeleteInsightRulesResponse(
        const DeleteInsightRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteInsightRulesResponsePrivate(this), parent)
{
    setRequest(new DeleteInsightRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInsightRulesRequest * DeleteInsightRulesResponse::request() const
{
    Q_D(const DeleteInsightRulesResponse);
    return static_cast<const DeleteInsightRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DeleteInsightRules \a response.
 */
void DeleteInsightRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInsightRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DeleteInsightRulesResponsePrivate
 * \brief The DeleteInsightRulesResponsePrivate class provides private implementation for DeleteInsightRulesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteInsightRulesResponsePrivate object with public implementation \a q.
 */
DeleteInsightRulesResponsePrivate::DeleteInsightRulesResponsePrivate(
    DeleteInsightRulesResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DeleteInsightRules response element from \a xml.
 */
void DeleteInsightRulesResponsePrivate::parseDeleteInsightRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInsightRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
