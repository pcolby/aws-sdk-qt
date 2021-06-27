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

#include "sesv2response.h"
#include "sesv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESV2 {

/*!
 * \class QtAws::SESV2::Sesv2Response
 * \brief The Sesv2Response class provides an interface for SESV2 responses.
 *
 * \inmodule QtAwsSESV2
 */

/*!
 * Constructs a Sesv2Response object with parent \a parent.
 */
Sesv2Response::Sesv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new Sesv2ResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a Sesv2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Sesv2ResponsePrivate.
 */
Sesv2Response::Sesv2Response(Sesv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void Sesv2Response::parseFailure(QIODevice &response)
{
    //Q_D(Sesv2Response);
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
 * \class QtAws::SESV2::Sesv2ResponsePrivate
 * \brief The Sesv2ResponsePrivate class provides private implementation for Sesv2Response.
 * \internal
 *
 * \inmodule QtAwsSESV2
 */

/*!
 * Constructs a Sesv2ResponsePrivate object with public implementation \a q.
 */
Sesv2ResponsePrivate::Sesv2ResponsePrivate(
    Sesv2Response * const q) : q_ptr(q)
{

}

} // namespace SESV2
} // namespace QtAws
