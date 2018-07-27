/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdashboardresponse.h"
#include "getdashboardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetDashboardResponse
 * \brief The GetDashboardResponse class provides an interace for CloudWatch GetDashboard responses.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
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
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::getDashboard
 */

/*!
 * Constructs a GetDashboardResponse object for \a reply to \a request, with parent \a parent.
 */
GetDashboardResponse::GetDashboardResponse(
        const GetDashboardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetDashboardResponsePrivate(this), parent)
{
    setRequest(new GetDashboardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDashboardRequest * GetDashboardResponse::request() const
{
    Q_D(const GetDashboardResponse);
    return static_cast<const GetDashboardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch GetDashboard \a response.
 */
void GetDashboardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDashboardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::GetDashboardResponsePrivate
 * \brief The GetDashboardResponsePrivate class provides private implementation for GetDashboardResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetDashboardResponsePrivate object with public implementation \a q.
 */
GetDashboardResponsePrivate::GetDashboardResponsePrivate(
    GetDashboardResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch GetDashboard response element from \a xml.
 */
void GetDashboardResponsePrivate::parseGetDashboardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDashboardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
