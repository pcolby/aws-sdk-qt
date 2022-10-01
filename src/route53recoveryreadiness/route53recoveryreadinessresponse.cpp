// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
