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

#include "puteventsresponse.h"
#include "puteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::PutEventsResponse
 * \brief The PutEventsResponse class provides an interace for MobileAnalytics PutEvents responses.
 *
 * \inmodule QtAwsMobileAnalytics
 *
 *  Amazon Mobile Analytics is a service for collecting, visualizing, and understanding app usage data at
 *
 * \sa MobileAnalyticsClient::putEvents
 */

/*!
 * Constructs a PutEventsResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventsResponse::PutEventsResponse(
        const PutEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileAnalyticsResponse(new PutEventsResponsePrivate(this), parent)
{
    setRequest(new PutEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventsRequest * PutEventsResponse::request() const
{
    Q_D(const PutEventsResponse);
    return static_cast<const PutEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MobileAnalytics PutEvents \a response.
 */
void PutEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MobileAnalytics::PutEventsResponsePrivate
 * \brief The PutEventsResponsePrivate class provides private implementation for PutEventsResponse.
 * \internal
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a PutEventsResponsePrivate object with public implementation \a q.
 */
PutEventsResponsePrivate::PutEventsResponsePrivate(
    PutEventsResponse * const q) : MobileAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a MobileAnalytics PutEvents response element from \a xml.
 */
void PutEventsResponsePrivate::parsePutEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MobileAnalytics
} // namespace QtAws
