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

#include "configserviceresponse.h"
#include "configserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::ConfigServiceResponse
 * \brief The ConfigServiceResponse class provides an interface for ConfigService responses.
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceResponse object with parent \a parent.
 */
ConfigServiceResponse::ConfigServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConfigServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConfigServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConfigServiceResponsePrivate.
 */
ConfigServiceResponse::ConfigServiceResponse(ConfigServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConfigServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConfigServiceResponse);
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
 * \class QtAws::ConfigService::ConfigServiceResponsePrivate
 * \brief The ConfigServiceResponsePrivate class provides private implementation for ConfigServiceResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceResponsePrivate object with public implementation \a q.
 */
ConfigServiceResponsePrivate::ConfigServiceResponsePrivate(
    ConfigServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ConfigService
} // namespace QtAws
