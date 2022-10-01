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

#include "route53recoveryreadinessresponse.h"
#include "route53recoveryreadinessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessResponse
 * \brief The Route53RecoveryReadinessResponse class provides an interface for Route53RecoveryReadiness responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a Route53RecoveryReadinessResponse object with parent \a parent.
 */
Route53RecoveryReadinessResponse::Route53RecoveryReadinessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53RecoveryReadinessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53RecoveryReadinessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryReadinessResponsePrivate.
 */
Route53RecoveryReadinessResponse::Route53RecoveryReadinessResponse(Route53RecoveryReadinessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53RecoveryReadinessResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53RecoveryReadinessResponse);
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
 * \class QtAws::Route53RecoveryReadiness::Route53RecoveryReadinessResponsePrivate
 * \brief The Route53RecoveryReadinessResponsePrivate class provides private implementation for Route53RecoveryReadinessResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a Route53RecoveryReadinessResponsePrivate object with public implementation \a q.
 */
Route53RecoveryReadinessResponsePrivate::Route53RecoveryReadinessResponsePrivate(
    Route53RecoveryReadinessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
