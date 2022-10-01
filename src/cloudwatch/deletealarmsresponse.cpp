// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealarmsresponse.h"
#include "deletealarmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteAlarmsResponse
 * \brief The DeleteAlarmsResponse class provides an interace for CloudWatch DeleteAlarms responses.
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
 * \sa CloudWatchClient::deleteAlarms
 */

/*!
 * Constructs a DeleteAlarmsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlarmsResponse::DeleteAlarmsResponse(
        const DeleteAlarmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteAlarmsResponsePrivate(this), parent)
{
    setRequest(new DeleteAlarmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlarmsRequest * DeleteAlarmsResponse::request() const
{
    Q_D(const DeleteAlarmsResponse);
    return static_cast<const DeleteAlarmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DeleteAlarms \a response.
 */
void DeleteAlarmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlarmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DeleteAlarmsResponsePrivate
 * \brief The DeleteAlarmsResponsePrivate class provides private implementation for DeleteAlarmsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteAlarmsResponsePrivate object with public implementation \a q.
 */
DeleteAlarmsResponsePrivate::DeleteAlarmsResponsePrivate(
    DeleteAlarmsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DeleteAlarms response element from \a xml.
 */
void DeleteAlarmsResponsePrivate::parseDeleteAlarmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlarmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
