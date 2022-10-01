// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmanagedinsightrulesresponse.h"
#include "putmanagedinsightrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutManagedInsightRulesResponse
 * \brief The PutManagedInsightRulesResponse class provides an interace for CloudWatch PutManagedInsightRules responses.
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
 * \sa CloudWatchClient::putManagedInsightRules
 */

/*!
 * Constructs a PutManagedInsightRulesResponse object for \a reply to \a request, with parent \a parent.
 */
PutManagedInsightRulesResponse::PutManagedInsightRulesResponse(
        const PutManagedInsightRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutManagedInsightRulesResponsePrivate(this), parent)
{
    setRequest(new PutManagedInsightRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutManagedInsightRulesRequest * PutManagedInsightRulesResponse::request() const
{
    Q_D(const PutManagedInsightRulesResponse);
    return static_cast<const PutManagedInsightRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch PutManagedInsightRules \a response.
 */
void PutManagedInsightRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutManagedInsightRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::PutManagedInsightRulesResponsePrivate
 * \brief The PutManagedInsightRulesResponsePrivate class provides private implementation for PutManagedInsightRulesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutManagedInsightRulesResponsePrivate object with public implementation \a q.
 */
PutManagedInsightRulesResponsePrivate::PutManagedInsightRulesResponsePrivate(
    PutManagedInsightRulesResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch PutManagedInsightRules response element from \a xml.
 */
void PutManagedInsightRulesResponsePrivate::parsePutManagedInsightRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutManagedInsightRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
