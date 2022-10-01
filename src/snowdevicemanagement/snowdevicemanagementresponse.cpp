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

#include "snowdevicemanagementresponse.h"
#include "snowdevicemanagementresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementResponse
 * \brief The SnowDeviceManagementResponse class provides an interface for SnowDeviceManagement responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a SnowDeviceManagementResponse object with parent \a parent.
 */
SnowDeviceManagementResponse::SnowDeviceManagementResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SnowDeviceManagementResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SnowDeviceManagementResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowDeviceManagementResponsePrivate.
 */
SnowDeviceManagementResponse::SnowDeviceManagementResponse(SnowDeviceManagementResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SnowDeviceManagementResponse::parseFailure(QIODevice &response)
{
    //Q_D(SnowDeviceManagementResponse);
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
 * \class QtAws::SnowDeviceManagement::SnowDeviceManagementResponsePrivate
 * \brief The SnowDeviceManagementResponsePrivate class provides private implementation for SnowDeviceManagementResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a SnowDeviceManagementResponsePrivate object with public implementation \a q.
 */
SnowDeviceManagementResponsePrivate::SnowDeviceManagementResponsePrivate(
    SnowDeviceManagementResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
