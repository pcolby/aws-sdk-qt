/*
    Copyright 2013-2019 Paul Colby

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

#include "reservecontactresponse.h"
#include "reservecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ReserveContactResponse
 * \brief The ReserveContactResponse class provides an interace for GroundStation ReserveContact responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::reserveContact
 */

/*!
 * Constructs a ReserveContactResponse object for \a reply to \a request, with parent \a parent.
 */
ReserveContactResponse::ReserveContactResponse(
        const ReserveContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ReserveContactResponsePrivate(this), parent)
{
    setRequest(new ReserveContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReserveContactRequest * ReserveContactResponse::request() const
{
    Q_D(const ReserveContactResponse);
    return static_cast<const ReserveContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ReserveContact \a response.
 */
void ReserveContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReserveContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ReserveContactResponsePrivate
 * \brief The ReserveContactResponsePrivate class provides private implementation for ReserveContactResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ReserveContactResponsePrivate object with public implementation \a q.
 */
ReserveContactResponsePrivate::ReserveContactResponsePrivate(
    ReserveContactResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ReserveContact response element from \a xml.
 */
void ReserveContactResponsePrivate::parseReserveContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReserveContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
