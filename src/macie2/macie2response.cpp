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

#include "macie2response.h"
#include "macie2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::Macie2Response
 * \brief The Macie2Response class provides an interface for Macie2 responses.
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a Macie2Response object with parent \a parent.
 */
Macie2Response::Macie2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Macie2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Macie2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Macie2ResponsePrivate.
 */
Macie2Response::Macie2Response(Macie2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Macie2Response::parseFailure(QIODevice &response)
{
    //Q_D(Macie2Response);
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
 * \class QtAws::Macie2::Macie2ResponsePrivate
 * \brief The Macie2ResponsePrivate class provides private implementation for Macie2Response.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a Macie2ResponsePrivate object with public implementation \a q.
 */
Macie2ResponsePrivate::Macie2ResponsePrivate(
    Macie2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Macie2
} // namespace QtAws
