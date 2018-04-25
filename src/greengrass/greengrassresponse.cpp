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

#include "greengrassresponse.h"
#include "greengrassresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassResponse
 * \brief The GreengrassResponse class provides an interface for Greengrass responses.
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassResponse object with parent \a parent.
 */
GreengrassResponse::GreengrassResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GreengrassResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GreengrassResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassResponsePrivate.
 */
GreengrassResponse::GreengrassResponse(GreengrassResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GreengrassResponse::parseFailure(QIODevice &response)
{
    Q_D(GreengrassResponse);
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
 * \class QtAws::Greengrass::GreengrassResponsePrivate
 * \brief The GreengrassResponsePrivate class provides private implementation for GreengrassResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassResponsePrivate object with public implementation \a q.
 */
GreengrassResponsePrivate::GreengrassResponsePrivate(
    GreengrassResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Greengrass
} // namespace QtAws
