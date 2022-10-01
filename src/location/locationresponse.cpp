/*
    Copyright 2013-2021 Paul Colby

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

#include "locationresponse.h"
#include "locationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::LocationResponse
 * \brief The LocationResponse class provides an interface for Location responses.
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationResponse object with parent \a parent.
 */
LocationResponse::LocationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LocationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LocationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LocationResponsePrivate.
 */
LocationResponse::LocationResponse(LocationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LocationResponse::parseFailure(QIODevice &response)
{
    //Q_D(LocationResponse);
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
 * \class QtAws::Location::LocationResponsePrivate
 * \brief The LocationResponsePrivate class provides private implementation for LocationResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationResponsePrivate object with public implementation \a q.
 */
LocationResponsePrivate::LocationResponsePrivate(
    LocationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Location
} // namespace QtAws
