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

#include "iotthingsgraphresponse.h"
#include "iotthingsgraphresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphResponse
 * \brief The IoTThingsGraphResponse class provides an interface for IoTThingsGraph responses.
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphResponse object with parent \a parent.
 */
IoTThingsGraphResponse::IoTThingsGraphResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTThingsGraphResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTThingsGraphResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTThingsGraphResponsePrivate.
 */
IoTThingsGraphResponse::IoTThingsGraphResponse(IoTThingsGraphResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTThingsGraphResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTThingsGraphResponse);
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
 * \class QtAws::IoTThingsGraph::IoTThingsGraphResponsePrivate
 * \brief The IoTThingsGraphResponsePrivate class provides private implementation for IoTThingsGraphResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphResponsePrivate object with public implementation \a q.
 */
IoTThingsGraphResponsePrivate::IoTThingsGraphResponsePrivate(
    IoTThingsGraphResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
