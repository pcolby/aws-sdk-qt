// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdashboardsresponse.h"
#include "listdashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListDashboardsResponse
 * \brief The ListDashboardsResponse class provides an interace for CloudWatch ListDashboards responses.
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
 * \sa CloudWatchClient::listDashboards
 */

/*!
 * Constructs a ListDashboardsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDashboardsResponse::ListDashboardsResponse(
        const ListDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new ListDashboardsResponsePrivate(this), parent)
{
    setRequest(new ListDashboardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDashboardsRequest * ListDashboardsResponse::request() const
{
    Q_D(const ListDashboardsResponse);
    return static_cast<const ListDashboardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch ListDashboards \a response.
 */
void ListDashboardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::ListDashboardsResponsePrivate
 * \brief The ListDashboardsResponsePrivate class provides private implementation for ListDashboardsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListDashboardsResponsePrivate object with public implementation \a q.
 */
ListDashboardsResponsePrivate::ListDashboardsResponsePrivate(
    ListDashboardsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch ListDashboards response element from \a xml.
 */
void ListDashboardsResponsePrivate::parseListDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDashboardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
