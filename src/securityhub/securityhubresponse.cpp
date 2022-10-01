// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "securityhubresponse.h"
#include "securityhubresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::SecurityHubResponse
 * \brief The SecurityHubResponse class provides an interface for SecurityHub responses.
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a SecurityHubResponse object with parent \a parent.
 */
SecurityHubResponse::SecurityHubResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SecurityHubResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SecurityHubResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SecurityHubResponsePrivate.
 */
SecurityHubResponse::SecurityHubResponse(SecurityHubResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SecurityHubResponse::parseFailure(QIODevice &response)
{
    //Q_D(SecurityHubResponse);
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
 * \class QtAws::SecurityHub::SecurityHubResponsePrivate
 * \brief The SecurityHubResponsePrivate class provides private implementation for SecurityHubResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a SecurityHubResponsePrivate object with public implementation \a q.
 */
SecurityHubResponsePrivate::SecurityHubResponsePrivate(
    SecurityHubResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SecurityHub
} // namespace QtAws
