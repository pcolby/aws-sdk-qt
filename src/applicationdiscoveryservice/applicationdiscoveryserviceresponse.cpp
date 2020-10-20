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

#include "applicationdiscoveryserviceresponse.h"
#include "applicationdiscoveryserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceResponse
 * \brief The ApplicationDiscoveryServiceResponse class provides an interface for ApplicationDiscoveryService responses.
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a ApplicationDiscoveryServiceResponse object with parent \a parent.
 */
ApplicationDiscoveryServiceResponse::ApplicationDiscoveryServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationDiscoveryServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationDiscoveryServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationDiscoveryServiceResponsePrivate.
 */
ApplicationDiscoveryServiceResponse::ApplicationDiscoveryServiceResponse(ApplicationDiscoveryServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationDiscoveryServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationDiscoveryServiceResponse);
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
 * \class QtAws::ApplicationDiscoveryService::ApplicationDiscoveryServiceResponsePrivate
 * \brief The ApplicationDiscoveryServiceResponsePrivate class provides private implementation for ApplicationDiscoveryServiceResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a ApplicationDiscoveryServiceResponsePrivate object with public implementation \a q.
 */
ApplicationDiscoveryServiceResponsePrivate::ApplicationDiscoveryServiceResponsePrivate(
    ApplicationDiscoveryServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
