// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedashboardsresponse.h"
#include "deletedashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteDashboardsResponse
 * \brief The DeleteDashboardsResponse class provides an interace for CloudWatch DeleteDashboards responses.
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
 * \sa CloudWatchClient::deleteDashboards
 */

/*!
 * Constructs a DeleteDashboardsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDashboardsResponse::DeleteDashboardsResponse(
        const DeleteDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteDashboardsResponsePrivate(this), parent)
{
    setRequest(new DeleteDashboardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDashboardsRequest * DeleteDashboardsResponse::request() const
{
    Q_D(const DeleteDashboardsResponse);
    return static_cast<const DeleteDashboardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DeleteDashboards \a response.
 */
void DeleteDashboardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DeleteDashboardsResponsePrivate
 * \brief The DeleteDashboardsResponsePrivate class provides private implementation for DeleteDashboardsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteDashboardsResponsePrivate object with public implementation \a q.
 */
DeleteDashboardsResponsePrivate::DeleteDashboardsResponsePrivate(
    DeleteDashboardsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DeleteDashboards response element from \a xml.
 */
void DeleteDashboardsResponsePrivate::parseDeleteDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDashboardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
