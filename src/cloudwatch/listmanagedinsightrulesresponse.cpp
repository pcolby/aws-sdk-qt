// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmanagedinsightrulesresponse.h"
#include "listmanagedinsightrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListManagedInsightRulesResponse
 * \brief The ListManagedInsightRulesResponse class provides an interace for CloudWatch ListManagedInsightRules responses.
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
 * \sa CloudWatchClient::listManagedInsightRules
 */

/*!
 * Constructs a ListManagedInsightRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListManagedInsightRulesResponse::ListManagedInsightRulesResponse(
        const ListManagedInsightRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new ListManagedInsightRulesResponsePrivate(this), parent)
{
    setRequest(new ListManagedInsightRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListManagedInsightRulesRequest * ListManagedInsightRulesResponse::request() const
{
    Q_D(const ListManagedInsightRulesResponse);
    return static_cast<const ListManagedInsightRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch ListManagedInsightRules \a response.
 */
void ListManagedInsightRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListManagedInsightRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::ListManagedInsightRulesResponsePrivate
 * \brief The ListManagedInsightRulesResponsePrivate class provides private implementation for ListManagedInsightRulesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListManagedInsightRulesResponsePrivate object with public implementation \a q.
 */
ListManagedInsightRulesResponsePrivate::ListManagedInsightRulesResponsePrivate(
    ListManagedInsightRulesResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch ListManagedInsightRules response element from \a xml.
 */
void ListManagedInsightRulesResponsePrivate::parseListManagedInsightRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListManagedInsightRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
