// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrumeventsresponse.h"
#include "putrumeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::PutRumEventsResponse
 * \brief The PutRumEventsResponse class provides an interace for Rum PutRumEvents responses.
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
 * \sa RumClient::putRumEvents
 */

/*!
 * Constructs a PutRumEventsResponse object for \a reply to \a request, with parent \a parent.
 */
PutRumEventsResponse::PutRumEventsResponse(
        const PutRumEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RumResponse(new PutRumEventsResponsePrivate(this), parent)
{
    setRequest(new PutRumEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRumEventsRequest * PutRumEventsResponse::request() const
{
    Q_D(const PutRumEventsResponse);
    return static_cast<const PutRumEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rum PutRumEvents \a response.
 */
void PutRumEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRumEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rum::PutRumEventsResponsePrivate
 * \brief The PutRumEventsResponsePrivate class provides private implementation for PutRumEventsResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a PutRumEventsResponsePrivate object with public implementation \a q.
 */
PutRumEventsResponsePrivate::PutRumEventsResponsePrivate(
    PutRumEventsResponse * const q) : RumResponsePrivate(q)
{

}

/*!
 * Parses a Rum PutRumEvents response element from \a xml.
 */
void PutRumEventsResponsePrivate::parsePutRumEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRumEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rum
} // namespace QtAws
