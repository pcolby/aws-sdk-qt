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

#include "ssoresponse.h"
#include "ssoresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::SsoResponse
 * \brief The SsoResponse class provides an interface for SSO responses.
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a SsoResponse object with parent \a parent.
 */
SsoResponse::SsoResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SsoResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a SsoResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoResponsePrivate.
 */
SsoResponse::SsoResponse(SsoResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void SsoResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsoResponse);
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
 * \class QtAws::SSO::SsoResponsePrivate
 * \brief The SsoResponsePrivate class provides private implementation for SsoResponse.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a SsoResponsePrivate object with public implementation \a q.
 */
SsoResponsePrivate::SsoResponsePrivate(
    SsoResponse * const q) : q_ptr(q)
{

}

} // namespace SSO
} // namespace QtAws
