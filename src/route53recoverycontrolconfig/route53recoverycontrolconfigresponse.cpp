// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53recoverycontrolconfigresponse.h"
#include "route53recoverycontrolconfigresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigResponse
 * \brief The Route53RecoveryControlConfigResponse class provides an interface for Route53RecoveryControlConfig responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a Route53RecoveryControlConfigResponse object with parent \a parent.
 */
Route53RecoveryControlConfigResponse::Route53RecoveryControlConfigResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53RecoveryControlConfigResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53RecoveryControlConfigResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryControlConfigResponsePrivate.
 */
Route53RecoveryControlConfigResponse::Route53RecoveryControlConfigResponse(Route53RecoveryControlConfigResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53RecoveryControlConfigResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53RecoveryControlConfigResponse);
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
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigResponsePrivate
 * \brief The Route53RecoveryControlConfigResponsePrivate class provides private implementation for Route53RecoveryControlConfigResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a Route53RecoveryControlConfigResponsePrivate object with public implementation \a q.
 */
Route53RecoveryControlConfigResponsePrivate::Route53RecoveryControlConfigResponsePrivate(
    Route53RecoveryControlConfigResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
