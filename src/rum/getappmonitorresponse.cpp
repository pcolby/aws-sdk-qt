// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappmonitorresponse.h"
#include "getappmonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::GetAppMonitorResponse
 * \brief The GetAppMonitorResponse class provides an interace for Rum GetAppMonitor responses.
 *
 * \inmodule QtAwsRum
 *
 *  With Amazon CloudWatch RUM, you can perform real-user monitoring to collect client-side data about your web application
 *  performance from actual user sessions in real time. The data collected includes page load times, client-side errors, and
 *  user behavior. When you view this data, you can see it all aggregated together and also see breakdowns by the browsers
 *  and devices that your customers
 * 
 *  use>
 * 
 *  You can use the collected data to quickly identify and debug client-side performance issues. CloudWatch RUM helps you
 *  visualize anomalies in your application performance and find relevant debugging data such as error messages, stack
 *  traces, and user sessions. You can also use RUM to understand the range of end-user impact including the number of
 *  users, geolocations, and browsers
 *
 * \sa RumClient::getAppMonitor
 */

/*!
 * Constructs a GetAppMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppMonitorResponse::GetAppMonitorResponse(
        const GetAppMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new GetAppMonitorResponsePrivate(this), parent)
{
    setRequest(new GetAppMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppMonitorRequest * GetAppMonitorResponse::request() const
{
    Q_D(const GetAppMonitorResponse);
    return static_cast<const GetAppMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum GetAppMonitor \a response.
 */
void GetAppMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::GetAppMonitorResponsePrivate
 * \brief The GetAppMonitorResponsePrivate class provides private implementation for GetAppMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a GetAppMonitorResponsePrivate object with public implementation \a q.
 */
GetAppMonitorResponsePrivate::GetAppMonitorResponsePrivate(
    GetAppMonitorResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum GetAppMonitor response element from \a xml.
 */
void GetAppMonitorResponsePrivate::parseGetAppMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
