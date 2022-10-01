// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53recoveryclusterresponse.h"
#include "route53recoveryclusterresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryCluster {

/*!
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterResponse
 * \brief The Route53RecoveryClusterResponse class provides an interface for Route53RecoveryCluster responses.
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a Route53RecoveryClusterResponse object with parent \a parent.
 */
Route53RecoveryClusterResponse::Route53RecoveryClusterResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53RecoveryClusterResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53RecoveryClusterResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryClusterResponsePrivate.
 */
Route53RecoveryClusterResponse::Route53RecoveryClusterResponse(Route53RecoveryClusterResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53RecoveryClusterResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53RecoveryClusterResponse);
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
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterResponsePrivate
 * \brief The Route53RecoveryClusterResponsePrivate class provides private implementation for Route53RecoveryClusterResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a Route53RecoveryClusterResponsePrivate object with public implementation \a q.
 */
Route53RecoveryClusterResponsePrivate::Route53RecoveryClusterResponsePrivate(
    Route53RecoveryClusterResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53RecoveryCluster
} // namespace QtAws
