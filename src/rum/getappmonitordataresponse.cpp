// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappmonitordataresponse.h"
#include "getappmonitordataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::GetAppMonitorDataResponse
 * \brief The GetAppMonitorDataResponse class provides an interace for Rum GetAppMonitorData responses.
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
 * \sa RumClient::getAppMonitorData
 */

/*!
 * Constructs a GetAppMonitorDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppMonitorDataResponse::GetAppMonitorDataResponse(
        const GetAppMonitorDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new GetAppMonitorDataResponsePrivate(this), parent)
{
    setRequest(new GetAppMonitorDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppMonitorDataRequest * GetAppMonitorDataResponse::request() const
{
    Q_D(const GetAppMonitorDataResponse);
    return static_cast<const GetAppMonitorDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum GetAppMonitorData \a response.
 */
void GetAppMonitorDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppMonitorDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::GetAppMonitorDataResponsePrivate
 * \brief The GetAppMonitorDataResponsePrivate class provides private implementation for GetAppMonitorDataResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a GetAppMonitorDataResponsePrivate object with public implementation \a q.
 */
GetAppMonitorDataResponsePrivate::GetAppMonitorDataResponsePrivate(
    GetAppMonitorDataResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum GetAppMonitorData response element from \a xml.
 */
void GetAppMonitorDataResponsePrivate::parseGetAppMonitorDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppMonitorDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
