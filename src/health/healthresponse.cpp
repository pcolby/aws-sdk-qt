/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "healthresponse.h"
#include "healthresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthResponse
 * \brief The HealthResponse class provides an interface for Health responses.
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthResponse object with parent \a parent.
 */
HealthResponse::HealthResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HealthResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HealthResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthResponsePrivate.
 */
HealthResponse::HealthResponse(HealthResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HealthResponse::parseFailure(QIODevice &response)
{
    Q_D(HealthResponse);
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
 * \class QtAws::Health::HealthResponsePrivate
 * \brief The HealthResponsePrivate class provides private implementation for HealthResponse.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthResponsePrivate object with public implementation \a q.
 */
HealthResponsePrivate::HealthResponsePrivate(
    HealthResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Health
} // namespace QtAws
