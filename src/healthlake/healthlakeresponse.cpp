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

#include "healthlakeresponse.h"
#include "healthlakeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::HealthLakeResponse
 * \brief The HealthLakeResponse class provides an interface for HealthLake responses.
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeResponse object with parent \a parent.
 */
HealthLakeResponse::HealthLakeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HealthLakeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HealthLakeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthLakeResponsePrivate.
 */
HealthLakeResponse::HealthLakeResponse(HealthLakeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HealthLakeResponse::parseFailure(QIODevice &response)
{
    //Q_D(HealthLakeResponse);
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
 * \class QtAws::HealthLake::HealthLakeResponsePrivate
 * \brief The HealthLakeResponsePrivate class provides private implementation for HealthLakeResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeResponsePrivate object with public implementation \a q.
 */
HealthLakeResponsePrivate::HealthLakeResponsePrivate(
    HealthLakeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace HealthLake
} // namespace QtAws
