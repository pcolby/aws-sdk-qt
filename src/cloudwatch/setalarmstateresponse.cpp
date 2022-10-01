// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setalarmstateresponse.h"
#include "setalarmstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::SetAlarmStateResponse
 * \brief The SetAlarmStateResponse class provides an interace for CloudWatch SetAlarmState responses.
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
 * \sa CloudWatchClient::setAlarmState
 */

/*!
 * Constructs a SetAlarmStateResponse object for \a reply to \a request, with parent \a parent.
 */
SetAlarmStateResponse::SetAlarmStateResponse(
        const SetAlarmStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new SetAlarmStateResponsePrivate(this), parent)
{
    setRequest(new SetAlarmStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetAlarmStateRequest * SetAlarmStateResponse::request() const
{
    Q_D(const SetAlarmStateResponse);
    return static_cast<const SetAlarmStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch SetAlarmState \a response.
 */
void SetAlarmStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetAlarmStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::SetAlarmStateResponsePrivate
 * \brief The SetAlarmStateResponsePrivate class provides private implementation for SetAlarmStateResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a SetAlarmStateResponsePrivate object with public implementation \a q.
 */
SetAlarmStateResponsePrivate::SetAlarmStateResponsePrivate(
    SetAlarmStateResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch SetAlarmState response element from \a xml.
 */
void SetAlarmStateResponsePrivate::parseSetAlarmStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetAlarmStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
