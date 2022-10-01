// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationdiscoveryresponse.h"
#include "applicationdiscoveryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscovery {

/*!
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryResponse
 * \brief The ApplicationDiscoveryResponse class provides an interface for ApplicationDiscovery responses.
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * Constructs a ApplicationDiscoveryResponse object with parent \a parent.
 */
ApplicationDiscoveryResponse::ApplicationDiscoveryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationDiscoveryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationDiscoveryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationDiscoveryResponsePrivate.
 */
ApplicationDiscoveryResponse::ApplicationDiscoveryResponse(ApplicationDiscoveryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationDiscoveryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationDiscoveryResponse);
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
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryResponsePrivate
 * \brief The ApplicationDiscoveryResponsePrivate class provides private implementation for ApplicationDiscoveryResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * Constructs a ApplicationDiscoveryResponsePrivate object with public implementation \a q.
 */
ApplicationDiscoveryResponsePrivate::ApplicationDiscoveryResponsePrivate(
    ApplicationDiscoveryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationDiscovery
} // namespace QtAws
