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

#include "groundstationresponse.h"
#include "groundstationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GroundStationResponse
 * \brief The GroundStationResponse class provides an interface for GroundStation responses.
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationResponse object with parent \a parent.
 */
GroundStationResponse::GroundStationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GroundStationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GroundStationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GroundStationResponsePrivate.
 */
GroundStationResponse::GroundStationResponse(GroundStationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GroundStationResponse::parseFailure(QIODevice &response)
{
    //Q_D(GroundStationResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::GroundStation::GroundStationResponsePrivate
 * \brief The GroundStationResponsePrivate class provides private implementation for GroundStationResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationResponsePrivate object with public implementation \a q.
 */
GroundStationResponsePrivate::GroundStationResponsePrivate(
    GroundStationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GroundStation
} // namespace QtAws
