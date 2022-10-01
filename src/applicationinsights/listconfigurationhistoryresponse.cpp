// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigurationhistoryresponse.h"
#include "listconfigurationhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListConfigurationHistoryResponse
 * \brief The ListConfigurationHistoryResponse class provides an interace for ApplicationInsights ListConfigurationHistory responses.
 *
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights</fullname>
 * 
 *  Amazon CloudWatch Application Insights is a service that helps you detect common problems with your applications. It
 *  enables you to pinpoint the source of issues in your applications (built with technologies such as Microsoft IIS, .NET,
 *  and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights identifies, recommends, and sets up metrics and
 *  logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface actionable problems
 *  with your application. For example, if your application is slow and unresponsive and leading to HTTP 500 errors in your
 *  Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with your SQL Server
 *  database is occurring. It bases this analysis on impactful metrics and log errors.
 *
 * \sa ApplicationInsightsClient::listConfigurationHistory
 */

/*!
 * Constructs a ListConfigurationHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationHistoryResponse::ListConfigurationHistoryResponse(
        const ListConfigurationHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new ListConfigurationHistoryResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationHistoryRequest * ListConfigurationHistoryResponse::request() const
{
    Q_D(const ListConfigurationHistoryResponse);
    return static_cast<const ListConfigurationHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights ListConfigurationHistory \a response.
 */
void ListConfigurationHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::ListConfigurationHistoryResponsePrivate
 * \brief The ListConfigurationHistoryResponsePrivate class provides private implementation for ListConfigurationHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListConfigurationHistoryResponsePrivate object with public implementation \a q.
 */
ListConfigurationHistoryResponsePrivate::ListConfigurationHistoryResponsePrivate(
    ListConfigurationHistoryResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights ListConfigurationHistory response element from \a xml.
 */
void ListConfigurationHistoryResponsePrivate::parseListConfigurationHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
