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

#include "route53resolverresponse.h"
#include "route53resolverresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::Route53ResolverResponse
 * \brief The Route53ResolverResponse class provides an interface for Route53Resolver responses.
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a Route53ResolverResponse object with parent \a parent.
 */
Route53ResolverResponse::Route53ResolverResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53ResolverResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53ResolverResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53ResolverResponsePrivate.
 */
Route53ResolverResponse::Route53ResolverResponse(Route53ResolverResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53ResolverResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53ResolverResponse);
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
 * \class QtAws::Route53Resolver::Route53ResolverResponsePrivate
 * \brief The Route53ResolverResponsePrivate class provides private implementation for Route53ResolverResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a Route53ResolverResponsePrivate object with public implementation \a q.
 */
Route53ResolverResponsePrivate::Route53ResolverResponsePrivate(
    Route53ResolverResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53Resolver
} // namespace QtAws
