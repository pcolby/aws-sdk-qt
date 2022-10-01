// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappmonitorsresponse.h"
#include "listappmonitorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::ListAppMonitorsResponse
 * \brief The ListAppMonitorsResponse class provides an interace for Rum ListAppMonitors responses.
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
 * \sa RumClient::listAppMonitors
 */

/*!
 * Constructs a ListAppMonitorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppMonitorsResponse::ListAppMonitorsResponse(
        const ListAppMonitorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new ListAppMonitorsResponsePrivate(this), parent)
{
    setRequest(new ListAppMonitorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppMonitorsRequest * ListAppMonitorsResponse::request() const
{
    Q_D(const ListAppMonitorsResponse);
    return static_cast<const ListAppMonitorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum ListAppMonitors \a response.
 */
void ListAppMonitorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppMonitorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::ListAppMonitorsResponsePrivate
 * \brief The ListAppMonitorsResponsePrivate class provides private implementation for ListAppMonitorsResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a ListAppMonitorsResponsePrivate object with public implementation \a q.
 */
ListAppMonitorsResponsePrivate::ListAppMonitorsResponsePrivate(
    ListAppMonitorsResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum ListAppMonitors response element from \a xml.
 */
void ListAppMonitorsResponsePrivate::parseListAppMonitorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppMonitorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
