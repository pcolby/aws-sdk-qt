// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
