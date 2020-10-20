/*
    Copyright 2013-2020 Paul Colby

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

#include "enablealarmactionsresponse.h"
#include "enablealarmactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsResponse
 * \brief The EnableAlarmActionsResponse class provides an interace for CloudWatch EnableAlarmActions responses.
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
 * \sa CloudWatchClient::enableAlarmActions
 */

/*!
 * Constructs a EnableAlarmActionsResponse object for \a reply to \a request, with parent \a parent.
 */
EnableAlarmActionsResponse::EnableAlarmActionsResponse(
        const EnableAlarmActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new EnableAlarmActionsResponsePrivate(this), parent)
{
    setRequest(new EnableAlarmActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableAlarmActionsRequest * EnableAlarmActionsResponse::request() const
{
    Q_D(const EnableAlarmActionsResponse);
    return static_cast<const EnableAlarmActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch EnableAlarmActions \a response.
 */
void EnableAlarmActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableAlarmActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsResponsePrivate
 * \brief The EnableAlarmActionsResponsePrivate class provides private implementation for EnableAlarmActionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a EnableAlarmActionsResponsePrivate object with public implementation \a q.
 */
EnableAlarmActionsResponsePrivate::EnableAlarmActionsResponsePrivate(
    EnableAlarmActionsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch EnableAlarmActions response element from \a xml.
 */
void EnableAlarmActionsResponsePrivate::parseEnableAlarmActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAlarmActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
