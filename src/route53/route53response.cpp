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

#include "route53response.h"
#include "route53response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::Route53Response
 * \brief The Route53Response class provides an interface for Route53 responses.
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a Route53Response object with parent \a parent.
 */
Route53Response::Route53Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53ResponsePrivate.
 */
Route53Response::Route53Response(Route53ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53Response::parseFailure(QIODevice &response)
{
    //Q_D(Route53Response);
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
 * \class QtAws::Route53::Route53ResponsePrivate
 * \brief The Route53ResponsePrivate class provides private implementation for Route53Response.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a Route53ResponsePrivate object with public implementation \a q.
 */
Route53ResponsePrivate::Route53ResponsePrivate(
    Route53Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53
} // namespace QtAws
