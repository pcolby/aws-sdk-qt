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

#include "globalacceleratorresponse.h"
#include "globalacceleratorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorResponse
 * \brief The GlobalAcceleratorResponse class provides an interface for GlobalAccelerator responses.
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorResponse object with parent \a parent.
 */
GlobalAcceleratorResponse::GlobalAcceleratorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlobalAcceleratorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GlobalAcceleratorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlobalAcceleratorResponsePrivate.
 */
GlobalAcceleratorResponse::GlobalAcceleratorResponse(GlobalAcceleratorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GlobalAcceleratorResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlobalAcceleratorResponse);
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
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorResponsePrivate
 * \brief The GlobalAcceleratorResponsePrivate class provides private implementation for GlobalAcceleratorResponse.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorResponsePrivate object with public implementation \a q.
 */
GlobalAcceleratorResponsePrivate::GlobalAcceleratorResponsePrivate(
    GlobalAcceleratorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GlobalAccelerator
} // namespace QtAws
