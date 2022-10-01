// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicediscoveryresponse.h"
#include "servicediscoveryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryResponse
 * \brief The ServiceDiscoveryResponse class provides an interface for ServiceDiscovery responses.
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ServiceDiscoveryResponse object with parent \a parent.
 */
ServiceDiscoveryResponse::ServiceDiscoveryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceDiscoveryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ServiceDiscoveryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceDiscoveryResponsePrivate.
 */
ServiceDiscoveryResponse::ServiceDiscoveryResponse(ServiceDiscoveryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ServiceDiscoveryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ServiceDiscoveryResponse);
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
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryResponsePrivate
 * \brief The ServiceDiscoveryResponsePrivate class provides private implementation for ServiceDiscoveryResponse.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ServiceDiscoveryResponsePrivate object with public implementation \a q.
 */
ServiceDiscoveryResponsePrivate::ServiceDiscoveryResponsePrivate(
    ServiceDiscoveryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
