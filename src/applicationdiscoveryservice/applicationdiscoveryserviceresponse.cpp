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

#include "applicationdiscoveryresponse.h"
#include "applicationdiscoveryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscovery {

/*!
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryResponse
 * \brief The ApplicationDiscoveryResponse class provides an interface for ApplicationDiscovery responses.
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * Constructs a ApplicationDiscoveryResponse object with parent \a parent.
 */
ApplicationDiscoveryResponse::ApplicationDiscoveryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationDiscoveryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationDiscoveryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationDiscoveryResponsePrivate.
 */
ApplicationDiscoveryResponse::ApplicationDiscoveryResponse(ApplicationDiscoveryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationDiscoveryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationDiscoveryResponse);
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
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryResponsePrivate
 * \brief The ApplicationDiscoveryResponsePrivate class provides private implementation for ApplicationDiscoveryResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * Constructs a ApplicationDiscoveryResponsePrivate object with public implementation \a q.
 */
ApplicationDiscoveryResponsePrivate::ApplicationDiscoveryResponsePrivate(
    ApplicationDiscoveryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationDiscovery
} // namespace QtAws
