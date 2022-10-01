// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappmonitorresponse.h"
#include "updateappmonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::UpdateAppMonitorResponse
 * \brief The UpdateAppMonitorResponse class provides an interace for Rum UpdateAppMonitor responses.
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
 * \sa RumClient::updateAppMonitor
 */

/*!
 * Constructs a UpdateAppMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppMonitorResponse::UpdateAppMonitorResponse(
        const UpdateAppMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new UpdateAppMonitorResponsePrivate(this), parent)
{
    setRequest(new UpdateAppMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppMonitorRequest * UpdateAppMonitorResponse::request() const
{
    Q_D(const UpdateAppMonitorResponse);
    return static_cast<const UpdateAppMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum UpdateAppMonitor \a response.
 */
void UpdateAppMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::UpdateAppMonitorResponsePrivate
 * \brief The UpdateAppMonitorResponsePrivate class provides private implementation for UpdateAppMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a UpdateAppMonitorResponsePrivate object with public implementation \a q.
 */
UpdateAppMonitorResponsePrivate::UpdateAppMonitorResponsePrivate(
    UpdateAppMonitorResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum UpdateAppMonitor response element from \a xml.
 */
void UpdateAppMonitorResponsePrivate::parseUpdateAppMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
