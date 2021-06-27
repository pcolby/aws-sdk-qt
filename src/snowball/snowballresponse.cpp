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

#include "snowballresponse.h"
#include "snowballresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::SnowballResponse
 * \brief The SnowballResponse class provides an interface for Snowball responses.
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballResponse object with parent \a parent.
 */
SnowballResponse::SnowballResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SnowballResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a SnowballResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowballResponsePrivate.
 */
SnowballResponse::SnowballResponse(SnowballResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void SnowballResponse::parseFailure(QIODevice &response)
{
    //Q_D(SnowballResponse);
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
 * \class QtAws::Snowball::SnowballResponsePrivate
 * \brief The SnowballResponsePrivate class provides private implementation for SnowballResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballResponsePrivate object with public implementation \a q.
 */
SnowballResponsePrivate::SnowballResponsePrivate(
    SnowballResponse * const q) : q_ptr(q)
{

}

} // namespace Snowball
} // namespace QtAws
