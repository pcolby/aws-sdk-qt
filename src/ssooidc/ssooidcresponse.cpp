// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssooidcresponse.h"
#include "ssooidcresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::SsoOidcResponse
 * \brief The SsoOidcResponse class provides an interface for SsoOidc responses.
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a SsoOidcResponse object with parent \a parent.
 */
SsoOidcResponse::SsoOidcResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsoOidcResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsoOidcResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoOidcResponsePrivate.
 */
SsoOidcResponse::SsoOidcResponse(SsoOidcResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsoOidcResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsoOidcResponse);
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
 * \class QtAws::SsoOidc::SsoOidcResponsePrivate
 * \brief The SsoOidcResponsePrivate class provides private implementation for SsoOidcResponse.
 * \internal
 *
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a SsoOidcResponsePrivate object with public implementation \a q.
 */
SsoOidcResponsePrivate::SsoOidcResponsePrivate(
    SsoOidcResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SsoOidc
} // namespace QtAws
