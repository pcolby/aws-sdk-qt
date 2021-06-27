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

#include "route53domainsresponse.h"
#include "route53domainsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::Route53DomainsResponse
 * \brief The Route53DomainsResponse class provides an interface for Route53Domains responses.
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsResponse object with parent \a parent.
 */
Route53DomainsResponse::Route53DomainsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new Route53DomainsResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a Route53DomainsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53DomainsResponsePrivate.
 */
Route53DomainsResponse::Route53DomainsResponse(Route53DomainsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void Route53DomainsResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53DomainsResponse);
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
 * \class QtAws::Route53Domains::Route53DomainsResponsePrivate
 * \brief The Route53DomainsResponsePrivate class provides private implementation for Route53DomainsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsResponsePrivate object with public implementation \a q.
 */
Route53DomainsResponsePrivate::Route53DomainsResponsePrivate(
    Route53DomainsResponse * const q) : q_ptr(q)
{

}

} // namespace Route53Domains
} // namespace QtAws
