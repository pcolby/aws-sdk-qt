// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappmonitorresponse.h"
#include "deleteappmonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::DeleteAppMonitorResponse
 * \brief The DeleteAppMonitorResponse class provides an interace for Rum DeleteAppMonitor responses.
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
 * \sa RumClient::deleteAppMonitor
 */

/*!
 * Constructs a DeleteAppMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppMonitorResponse::DeleteAppMonitorResponse(
        const DeleteAppMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new DeleteAppMonitorResponsePrivate(this), parent)
{
    setRequest(new DeleteAppMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppMonitorRequest * DeleteAppMonitorResponse::request() const
{
    Q_D(const DeleteAppMonitorResponse);
    return static_cast<const DeleteAppMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum DeleteAppMonitor \a response.
 */
void DeleteAppMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::DeleteAppMonitorResponsePrivate
 * \brief The DeleteAppMonitorResponsePrivate class provides private implementation for DeleteAppMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a DeleteAppMonitorResponsePrivate object with public implementation \a q.
 */
DeleteAppMonitorResponsePrivate::DeleteAppMonitorResponsePrivate(
    DeleteAppMonitorResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum DeleteAppMonitor response element from \a xml.
 */
void DeleteAppMonitorResponsePrivate::parseDeleteAppMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
