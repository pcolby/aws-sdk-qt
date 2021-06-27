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

#include "appintegrationsserviceresponse.h"
#include "appintegrationsserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceResponse
 * \brief The AppIntegrationsServiceResponse class provides an interface for AppIntegrationsService responses.
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a AppIntegrationsServiceResponse object with parent \a parent.
 */
AppIntegrationsServiceResponse::AppIntegrationsServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new AppIntegrationsServiceResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a AppIntegrationsServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppIntegrationsServiceResponsePrivate.
 */
AppIntegrationsServiceResponse::AppIntegrationsServiceResponse(AppIntegrationsServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void AppIntegrationsServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppIntegrationsServiceResponse);
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
 * \class QtAws::AppIntegrationsService::AppIntegrationsServiceResponsePrivate
 * \brief The AppIntegrationsServiceResponsePrivate class provides private implementation for AppIntegrationsServiceResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a AppIntegrationsServiceResponsePrivate object with public implementation \a q.
 */
AppIntegrationsServiceResponsePrivate::AppIntegrationsServiceResponsePrivate(
    AppIntegrationsServiceResponse * const q) : q_ptr(q)
{

}

} // namespace AppIntegrationsService
} // namespace QtAws
