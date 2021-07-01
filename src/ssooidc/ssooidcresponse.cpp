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

#include "ssooidcresponse.h"
#include "ssooidcresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOOIDC {

/*!
 * \class QtAws::SSOOIDC::SsooidcResponse
 * \brief The SsooidcResponse class provides an interface for SSOOIDC responses.
 *
 * \inmodule QtAwsSSOOIDC
 */

/*!
 * Constructs a SsooidcResponse object with parent \a parent.
 */
SsooidcResponse::SsooidcResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsooidcResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsooidcResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsooidcResponsePrivate.
 */
SsooidcResponse::SsooidcResponse(SsooidcResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsooidcResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsooidcResponse);
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
 * \class QtAws::SSOOIDC::SsooidcResponsePrivate
 * \brief The SsooidcResponsePrivate class provides private implementation for SsooidcResponse.
 * \internal
 *
 * \inmodule QtAwsSSOOIDC
 */

/*!
 * Constructs a SsooidcResponsePrivate object with public implementation \a q.
 */
SsooidcResponsePrivate::SsooidcResponsePrivate(
    SsooidcResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SSOOIDC
} // namespace QtAws
