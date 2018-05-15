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

#include "iot1clickprojectsresponse.h"
#include "iot1clickprojectsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsResponse
 * \brief The IoT1ClickProjectsResponse class provides an interface for IoT1ClickProjects responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a IoT1ClickProjectsResponse object with parent \a parent.
 */
IoT1ClickProjectsResponse::IoT1ClickProjectsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoT1ClickProjectsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoT1ClickProjectsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoT1ClickProjectsResponsePrivate.
 */
IoT1ClickProjectsResponse::IoT1ClickProjectsResponse(IoT1ClickProjectsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoT1ClickProjectsResponse::parseFailure(QIODevice &response)
{
    Q_D(IoT1ClickProjectsResponse);
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
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsResponsePrivate
 * \brief The IoT1ClickProjectsResponsePrivate class provides private implementation for IoT1ClickProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a IoT1ClickProjectsResponsePrivate object with public implementation \a q.
 */
IoT1ClickProjectsResponsePrivate::IoT1ClickProjectsResponsePrivate(
    IoT1ClickProjectsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
