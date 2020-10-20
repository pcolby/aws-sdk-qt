/*
    Copyright 2013-2020 Paul Colby

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

#include "cancelcontactresponse.h"
#include "cancelcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CancelContactResponse
 * \brief The CancelContactResponse class provides an interace for GroundStation CancelContact responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::cancelContact
 */

/*!
 * Constructs a CancelContactResponse object for \a reply to \a request, with parent \a parent.
 */
CancelContactResponse::CancelContactResponse(
        const CancelContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CancelContactResponsePrivate(this), parent)
{
    setRequest(new CancelContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelContactRequest * CancelContactResponse::request() const
{
    Q_D(const CancelContactResponse);
    return static_cast<const CancelContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CancelContact \a response.
 */
void CancelContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CancelContactResponsePrivate
 * \brief The CancelContactResponsePrivate class provides private implementation for CancelContactResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CancelContactResponsePrivate object with public implementation \a q.
 */
CancelContactResponsePrivate::CancelContactResponsePrivate(
    CancelContactResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CancelContact response element from \a xml.
 */
void CancelContactResponsePrivate::parseCancelContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
